#ifndef G1O_NETWORK_PACKET_H
#define G1O_NETWORK_PACKET_H

#include <steam/steamnetworkingsockets.h>
#include <steam/isteamnetworkingutils.h>

#include <chrono>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <limits>
#include <string>
#include <thread>
#include <type_traits>
#include <vector>

namespace g1o::network
{
	inline std::uint64_t NowMilliseconds()
	{
		return static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
			std::chrono::steady_clock::now().time_since_epoch()).count());
	}

	inline void Sleep(std::uint32_t milliseconds)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
	}

	class PacketWriter
	{
	public:
		PacketWriter() = default;

		template <typename T>
		requires (std::is_arithmetic_v<std::remove_cv_t<T>> || std::is_enum_v<std::remove_cv_t<T>>)
		bool Write(const T& value)
		{
			using Value = std::remove_cv_t<T>;

			if constexpr (std::is_same_v<Value, bool>)
			{
				const std::uint8_t encoded = value ? 1 : 0;
				return WriteBytes(&encoded, sizeof(encoded));
			}
			else if constexpr (std::is_enum_v<Value>)
			{
				using Underlying = std::underlying_type_t<Value>;
				return Write(static_cast<Underlying>(value));
			}
			else
			{
				return WriteBytes(&value, sizeof(value));
			}
		}

		bool Write(const std::string& value)
		{
			if (value.size() > std::numeric_limits<std::uint32_t>::max())
				return false;
			const auto size = static_cast<std::uint32_t>(value.size());
			return Write(size) && WriteBytes(value.data(), value.size());
		}

		bool Write(const char* value)
		{
			return value && Write(std::string(value));
		}

		bool WriteBytes(const void* data, std::size_t size)
		{
			if (size == 0)
				return true;
			if (!data || size > std::numeric_limits<std::uint32_t>::max() ||
				m_Data.size() > std::numeric_limits<std::uint32_t>::max() - size)
				return false;

			const auto* bytes = static_cast<const std::uint8_t*>(data);
			m_Data.insert(m_Data.end(), bytes, bytes + size);
			return true;
		}

		const void* Data() const { return m_Data.data(); }
		std::uint32_t Size() const { return static_cast<std::uint32_t>(m_Data.size()); }
		bool Empty() const { return m_Data.empty(); }
		void Reset() { m_Data.clear(); }

	private:
		std::vector<std::uint8_t> m_Data;
	};

	class PacketReader
	{
	public:
		PacketReader(const void* data, std::size_t size)
			: m_Data(static_cast<const std::uint8_t*>(data)), m_Size(size), m_Offset(0)
		{
		}

		template <typename T>
		requires (std::is_arithmetic_v<std::remove_cv_t<T>> || std::is_enum_v<std::remove_cv_t<T>>)
		bool Read(T& value)
		{
			using Value = std::remove_cv_t<T>;

			if constexpr (std::is_same_v<Value, bool>)
			{
				std::uint8_t encoded = 0;
				if (!ReadBytes(&encoded, sizeof(encoded)) || encoded > 1)
					return false;
				value = encoded != 0;
				return true;
			}
			else if constexpr (std::is_enum_v<Value>)
			{
				using Underlying = std::underlying_type_t<Value>;
				Underlying encoded{};
				if (!Read(encoded))
					return false;
				value = static_cast<Value>(encoded);
				return true;
			}
			else
			{
				return ReadBytes(&value, sizeof(value));
			}
		}

		bool Read(std::string& value, std::uint32_t maximumSize = 1024 * 1024)
		{
			std::uint32_t size = 0;
			if (!Read(size) || size > maximumSize || Remaining() < size)
				return false;
			value.assign(reinterpret_cast<const char*>(m_Data + m_Offset), size);
			m_Offset += size;
			return true;
		}

		bool ReadBytes(void* destination, std::size_t size)
		{
			if (size > Remaining() || (size != 0 && !destination))
				return false;
			if (size != 0)
				std::memcpy(destination, m_Data + m_Offset, size);
			m_Offset += size;
			return true;
		}

		const void* CurrentData() const { return m_Data + m_Offset; }
		std::size_t Remaining() const { return m_Size - m_Offset; }
		bool Empty() const { return Remaining() == 0; }

	private:
		const std::uint8_t* m_Data;
		std::size_t m_Size;
		std::size_t m_Offset;
	};
}

using g1o::network::PacketReader;
using g1o::network::PacketWriter;

#endif
