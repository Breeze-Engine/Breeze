#pragma once

#if defined(__clang__)
#if __has_builtin(__builtin_unreachable)
#define BREEZE_UNREACHABLE(message) __builtin_unreachable()
#else
#define BREEZE_UNREACHABLE(message)
#endif
#elif defined(__GNUC__)
#define BREEZE_UNREACHABLE(message) __builtin_unreachable()
#elif defined(_MSC_VER)
#define BREEZE_UNREACHABLE(message) __assume(0)
#else
#define BREEZE_UNREACHABLE(message)
#endif
