#pragma once

#include <string>
#include <string_view>

namespace g1o::crypto {

enum class HashAlgorithm
{
	Md5,
	Sha1,
	Sha256,
	Sha384,
	Sha512,
	Blake2b
};

std::string Hash(std::string_view input, HashAlgorithm algorithm);

} // namespace g1o::crypto
