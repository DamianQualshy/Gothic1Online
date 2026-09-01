#include "Hash.h"

#include <windows.h>
#include <bcrypt.h>
#include <sodium.h>

#include <limits>
#include <stdexcept>
#include <vector>

namespace g1o::crypto {

namespace {

void EnsureSodiumInitialized()
{
	static const bool initialized = [] {
		if (sodium_init() < 0)
			throw std::runtime_error("Failed to initialize libsodium");
		return true;
	}();
	(void)initialized;
}

void CheckStatus(NTSTATUS status, const char* operation)
{
	if (!BCRYPT_SUCCESS(status))
		throw std::runtime_error(operation);
}

std::vector<unsigned char> LegacyHash(std::string_view input, LPCWSTR algorithm)
{
	if (input.size() > (std::numeric_limits<ULONG>::max)())
		throw std::length_error("Hash input exceeds the Windows CNG size limit");

	BCRYPT_ALG_HANDLE provider = nullptr;
	BCRYPT_HASH_HANDLE hash = nullptr;
	try
	{
		CheckStatus(BCryptOpenAlgorithmProvider(&provider, algorithm, nullptr, 0),
			"BCryptOpenAlgorithmProvider failed");

		ULONG digestSize = 0;
		ULONG resultSize = 0;
		CheckStatus(BCryptGetProperty(provider, BCRYPT_HASH_LENGTH,
			reinterpret_cast<PUCHAR>(&digestSize), sizeof(digestSize), &resultSize, 0),
			"BCryptGetProperty failed");

		CheckStatus(BCryptCreateHash(provider, &hash, nullptr, 0, nullptr, 0, 0),
			"BCryptCreateHash failed");
		CheckStatus(BCryptHashData(hash,
			reinterpret_cast<PUCHAR>(const_cast<char*>(input.data())),
			static_cast<ULONG>(input.size()), 0), "BCryptHashData failed");

		std::vector<unsigned char> digest(digestSize);
		CheckStatus(BCryptFinishHash(hash, digest.data(), digestSize, 0),
			"BCryptFinishHash failed");

		BCryptDestroyHash(hash);
		BCryptCloseAlgorithmProvider(provider, 0);
		return digest;
	}
	catch (...)
	{
		if (hash)
			BCryptDestroyHash(hash);
		if (provider)
			BCryptCloseAlgorithmProvider(provider, 0);
		throw;
	}
}

std::string ToHex(const unsigned char* bytes, std::size_t size)
{
	std::string output(size * 2 + 1, '\0');
	sodium_bin2hex(output.data(), output.size(), bytes, size);
	output.resize(size * 2);
	return output;
}

} // namespace

std::string Hash(std::string_view input, HashAlgorithm algorithm)
{
	EnsureSodiumInitialized();

	switch (algorithm)
	{
	case HashAlgorithm::Md5:
	{
		const auto digest = LegacyHash(input, BCRYPT_MD5_ALGORITHM);
		return ToHex(digest.data(), digest.size());
	}
	case HashAlgorithm::Sha1:
	{
		const auto digest = LegacyHash(input, BCRYPT_SHA1_ALGORITHM);
		return ToHex(digest.data(), digest.size());
	}
	case HashAlgorithm::Sha256:
	{
		unsigned char digest[crypto_hash_sha256_BYTES];
		crypto_hash_sha256(digest, reinterpret_cast<const unsigned char*>(input.data()), input.size());
		return ToHex(digest, sizeof(digest));
	}
	case HashAlgorithm::Sha384:
	{
		const auto digest = LegacyHash(input, BCRYPT_SHA384_ALGORITHM);
		return ToHex(digest.data(), digest.size());
	}
	case HashAlgorithm::Sha512:
	{
		unsigned char digest[crypto_hash_sha512_BYTES];
		crypto_hash_sha512(digest, reinterpret_cast<const unsigned char*>(input.data()), input.size());
		return ToHex(digest, sizeof(digest));
	}
	case HashAlgorithm::Blake2b:
	{
		unsigned char digest[crypto_generichash_BYTES];
		crypto_generichash(digest, sizeof(digest),
			reinterpret_cast<const unsigned char*>(input.data()), input.size(), nullptr, 0);
		return ToHex(digest, sizeof(digest));
	}
	}

	throw std::invalid_argument("Unknown hash algorithm");
}

} // namespace g1o::crypto
