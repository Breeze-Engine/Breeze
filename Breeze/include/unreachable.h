#pragma once

#if defined(__clang__)
#if __has_builtin(__builtin_unreachable)
#define BREEZE_UNREACHABLE(message) __builtin_unreachable
#else
// 
#endif 