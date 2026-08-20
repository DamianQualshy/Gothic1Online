#pragma once

#include <bit>
#include <cstdint>
#include <type_traits>

namespace Gothic_II_Addon {

    template <typename T>
    struct class_of;

    template <typename C, typename R, typename... Args>
    struct class_of<R(__thiscall C::*)(Args...)> {
        using type = C;
    };

    template <typename C, typename R, typename... Args>
    struct class_of<R(__cdecl C::*)(Args...)> {
        using type = C;
    };

    template <typename C, typename R, typename... Args>
    struct class_of<R(__stdcall C::*)(Args...)> {
        using type = C;
    };

    template <typename C, typename R, typename... Args>
    struct class_of<R(__fastcall C::*)(Args...)> {
        using type = C;
    };

    template <typename C, typename R, typename... Args>
    struct class_of<R(__vectorcall C::*)(Args...)> {
        using type = C;
    };

    template<typename T>
    struct ZenginClassMatcher
    {
        template<auto Fn>
        static std::uintptr_t Address;
    };

    namespace ZenginFunctions
    {
        template<auto Fn>
        inline constexpr std::uintptr_t Address = 0;
    };

    template<auto Matcher>
    constexpr auto signature_of()
    {
        using MatcherType = decltype(Matcher);

        if constexpr (std::is_member_function_pointer_v<MatcherType>)
        {
            using C = typename class_of<MatcherType>::type;
            return ZenginClassMatcher<C>::template Address<Matcher>;
        }
        else if constexpr (std::is_function_v<std::remove_pointer_t<MatcherType>>)
        {
            return ZenginFunctions::Address<Matcher>;
        }
        else
        {
            static_assert([]{return false;}(), "Unsupported matcher in signature_of");
        }
    }

    template<auto Fn, typename Cast>
    constexpr auto signature_of()
    {
        return signature_of<static_cast<Cast>(Fn)>();
    }

} // namespace Gothic_II_Addon

// User Code

#define SIGNATURE_OF(...) std::bit_cast<void*>(signature_of<__VA_ARGS__>())

#define ZENGIN_REGISTER_FUNCTION(fn, addr)                          \
namespace ZenginFunctions                                           \
{                                                                   \
template<>                                                          \
constexpr std::uintptr_t Address<fn> = addr;                        \
}

#define ZENGIN_REGISTER_FUNCTION_EXPLICIT(fn, cast, addr)           \
namespace ZenginFunctions                                           \
{                                                                   \
template<>                                                          \
constexpr std::uintptr_t Address<static_cast<cast>(fn)> = addr;     \
}

#define ZENGIN_REGISTER_CLASS(cls)                                  \
template<>                                                          \
struct ZenginClassMatcher<cls>                                      \
{                                                                   \
template<auto Fn>                                                   \
static std::uintptr_t Address;                                      \
};

#define ZENGIN_REGISTER_METHOD(cls, fn, addr)                       \
template<>                                                          \
constexpr std::uintptr_t                                            \
ZenginClassMatcher<cls>::Address<fn> = addr

#define ZENGIN_REGISTER_METHOD_EXPLICIT(cls, fn, cast, addr)        \
template<>                                                          \
constexpr std::uintptr_t                                            \
ZenginClassMatcher<cls>::Address<static_cast<cast>(fn)> = addr;