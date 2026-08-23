#include "SharedNatives.h"

#include "NativeApi.h"

#include <Crypto/Hash.h>
#include <Utility/utility.h>
#include <goMath/goMath.h>

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

namespace g1o::script {

namespace {

/* g1odoc (func)
 *
 * This function returns the monotonic runtime tick count.
 *
 * @name getTickCount
 * @side server
 * @category Utility
 * @version 0.4.0
 * @return (int) Elapsed milliseconds.
 *
 */
int GetTickCount(CallContext& context, TimerManager::Clock clock)
{
	context.Push(static_cast<unsigned>(clock()));
	return 1;
}

/* g1odoc (func)
 *
 * This function calculates the distance between two 3D points.
 *
 * @name getDistance3d
 * @side server
 * @category Math
 * @version 0.4.0
 * @param (float) x1 First X coordinate.
 * @param (float) y1 First Y coordinate.
 * @param (float) z1 First Z coordinate.
 * @param (float) x2 Second X coordinate.
 * @param (float) y2 Second Y coordinate.
 * @param (float) z2 Second Z coordinate.
 * @return (float) Distance between the points.
 *
 */
int GetDistance3D(CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 6);
	SCRIPT_CHECK_PARAM_FLOAT(context, x1, 0);
	SCRIPT_CHECK_PARAM_FLOAT(context, y1, 1);
	SCRIPT_CHECK_PARAM_FLOAT(context, z1, 2);
	SCRIPT_CHECK_PARAM_FLOAT(context, x2, 3);
	SCRIPT_CHECK_PARAM_FLOAT(context, y2, 4);
	SCRIPT_CHECK_PARAM_FLOAT(context, z2, 5);
	context.Push(goMath::GetDistance3D(x1, y1, z1, x2, y2, z2));
	return 1;
}

/* g1odoc (func)
 *
 * This function calculates the distance between two 2D points.
 *
 * @name getDistance2d
 * @side server
 * @category Math
 * @version 0.4.0
 * @param (float) x1 First X coordinate.
 * @param (float) y1 First Y coordinate.
 * @param (float) x2 Second X coordinate.
 * @param (float) y2 Second Y coordinate.
 * @return (float) Distance between the points.
 *
 */
int GetDistance2D(CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 4);
	SCRIPT_CHECK_PARAM_FLOAT(context, x1, 0);
	SCRIPT_CHECK_PARAM_FLOAT(context, y1, 1);
	SCRIPT_CHECK_PARAM_FLOAT(context, x2, 2);
	SCRIPT_CHECK_PARAM_FLOAT(context, y2, 3);
	context.Push(goMath::GetDistance2D(x1, y1, x2, y2));
	return 1;
}

/* g1odoc (func)
 *
 * This function parses a command string using a sequence of `d`, `f`, and `s` format characters.
 *
 * @name sscanf
 * @side server
 * @category Utility
 * @version 0.4.0
 * @param (string) format Value types to parse.
 * @param (string) input Command text.
 * @return (array|bool) Parsed values, or false when parsing fails.
 *
 */
int Scan(CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 2);
	SCRIPT_CHECK_PARAM_STRING(context, format, 0);
	SCRIPT_CHECK_PARAM_STRING(context, input, 1);

	std::vector<std::string> elements;
	if (!utility::sscanf(format, input, elements) || elements.size() < std::strlen(format))
	{
		context.Push(false);
		return 1;
	}

	context.NewArray();
	for (std::size_t index = 0; index < std::strlen(format); ++index)
	{
		int integer = 0;
		float number = 0.0f;
		switch (format[index])
		{
		case 'd':
			if (std::sscanf(elements[index].c_str(), "%d", &integer) != 1) { context.ClearResults(); context.Push(false); return 1; }
			SCRIPT_ARRAY_INT(context, integer);
			break;
		case 'f':
			if (std::sscanf(elements[index].c_str(), "%f", &number) != 1) { context.ClearResults(); context.Push(false); return 1; }
			SCRIPT_ARRAY_FLOAT(context, number);
			break;
		case 's':
			SCRIPT_ARRAY_STRING(context, elements[index].c_str());
			break;
		default:
			context.ClearResults();
			context.Push(false);
			return 1;
		}
	}
	return 1;
}

/* g1odoc (func)
 *
 * This function converts RGB color components to a hexadecimal string.
 *
 * @name rgbToHex
 * @side server
 * @category Utility
 * @version 0.4.0
 * @param (int) red Red component.
 * @param (int) green Green component.
 * @param (int) blue Blue component.
 * @return (string) Six-character hexadecimal color.
 *
 */
int RgbToHex(CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 3);
	SCRIPT_CHECK_PARAM_INT(context, red, 0);
	SCRIPT_CHECK_PARAM_INT(context, green, 1);
	SCRIPT_CHECK_PARAM_INT(context, blue, 2);
	context.Push(utility::RGBToHex(red, green, blue));
	return 1;
}

/* g1odoc (func)
 *
 * This function converts a hexadecimal color to RGB components.
 *
 * @name hexToRgb
 * @side server
 * @category Utility
 * @version 0.4.0
 * @param (string) color Hexadecimal color, with or without a leading `#`.
 * @return (table) Table containing `r`, `g`, and `b` components.
 *
 */
int HexToRgb(CallContext& context)
{
	SCRIPT_CHECK_PARAM_COUNT(context, 1);
	SCRIPT_CHECK_PARAM_STRING(context, color, 0);
	int red = 0;
	int green = 0;
	int blue = 0;
	utility::HexToRGB(color, &red, &green, &blue);
	context.NewTable();
	SCRIPT_TABLE_SET_INT(context, "r", red);
	SCRIPT_TABLE_SET_INT(context, "g", green);
	SCRIPT_TABLE_SET_INT(context, "b", blue);
	return 1;
}

#define G1O_HASH_NATIVE(functionName, algorithm) \
	int functionName(CallContext& context) \
	{ \
		SCRIPT_CHECK_PARAM_COUNT(context, 1); \
		SCRIPT_CHECK_PARAM_STRING(context, text, 0); \
		context.Push(g1o::crypto::Hash(text, g1o::crypto::HashAlgorithm::algorithm)); \
		return 1; \
	}

/* g1odoc (func)
 *
 * This function calculates an MD5 digest.
 * @name md5
 * @side server
 * @category Hash
 * @version 0.4.0
 * @param (string) text Input text.
 * @return (string) Lowercase hexadecimal digest.
 */
G1O_HASH_NATIVE(Md5, Md5)

/* g1odoc (func)
 *
 * This function calculates a SHA-1 digest.
 * @name sha1
 * @side server
 * @category Hash
 * @version 0.4.0
 * @param (string) text Input text.
 * @return (string) Lowercase hexadecimal digest.
 */
G1O_HASH_NATIVE(Sha1, Sha1)

/* g1odoc (func)
 *
 * This function calculates a SHA-256 digest.
 * @name sha256
 * @side server
 * @category Hash
 * @version 0.4.0
 * @param (string) text Input text.
 * @return (string) Lowercase hexadecimal digest.
 */
G1O_HASH_NATIVE(Sha256, Sha256)

/* g1odoc (func)
 *
 * This function calculates a SHA-384 digest.
 * @name sha384
 * @side server
 * @category Hash
 * @version 0.4.0
 * @param (string) text Input text.
 * @return (string) Lowercase hexadecimal digest.
 */
G1O_HASH_NATIVE(Sha384, Sha384)

/* g1odoc (func)
 *
 * This function calculates a SHA-512 digest.
 * @name sha512
 * @side server
 * @category Hash
 * @version 0.4.0
 * @param (string) text Input text.
 * @return (string) Lowercase hexadecimal digest.
 */
G1O_HASH_NATIVE(Sha512, Sha512)

/* g1odoc (func)
 *
 * This function calculates a BLAKE2b digest using libsodium.
 * @name blake2b
 * @side server
 * @category Hash
 * @version 0.5.0
 * @param (string) text Input text.
 * @return (string) Lowercase hexadecimal digest.
 */
G1O_HASH_NATIVE(Blake2b, Blake2b)

#undef G1O_HASH_NATIVE

} // namespace

void RegisterSharedNatives(NativeRegistry& registry, TimerManager::Clock clock)
{
	registry.Add("getTickCount", [clock](CallContext& context) { return GetTickCount(context, clock); });
	registry.Add("getDistance3d", GetDistance3D);
	registry.Add("getDistance2d", GetDistance2D);
	registry.Add("sscanf", Scan);
	registry.Add("rgbToHex", RgbToHex);
	registry.Add("hexToRgb", HexToRgb);
	registry.Add("md5", Md5);
	registry.Add("sha1", Sha1);
	registry.Add("sha256", Sha256);
	registry.Add("sha384", Sha384);
	registry.Add("sha512", Sha512);
	registry.Add("blake2b", Blake2b);
}

} // namespace g1o::script
