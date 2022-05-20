#pragma once

#if defined(_MSC_VER)
#define BREEZE_MSVC_SUPPRESS_WARNING(w) __pragma(warning(disable : w))

#define BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN \
    __pragma(warning(push)) \
    BREEZE_MSVC_SUPPRESS_WARNING(4265) \
    BREEZE_MSVC_SUPPRESS_WARNING(4365) \
    BREEZE_MSVC_SUPPRESS_WARNING(4514) \
    BREEZE_MSVC_SUPPRESS_WARNING(4668) \
    BREEZE_MSVC_SUPPRESS_WARNING(4710) \
    BREEZE_MSVC_SUPPRESS_WARNING(4711) \
    BREEZE_MSVC_SUPPRESS_WARNING(4820) \
    BREEZE_MSVC_SUPPRESS_WARNING(4986) \
    BREEZE_MSVC_SUPPRESS_WARNING(5039) \
    BREEZE_MSVC_SUPPRESS_WARNING(5204) \
    BREEZE_MSVC_SUPPRESS_WARNING(5219) \
    BREEZE_MSVC_SUPPRESS_WARNING(5220)

#define BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END \
    __pragma(warning(pop))

#elif defined(__clang__)
#define BREEZE_CLANG_PRAGMA_TO_STR(x) _Pragma(#x)
#define BREEZE_CLANG_SUPPRESS_WARNING(w) BREEZE_CLANG_PRAGMA_TO_STR(clang diagnostic ignored w)

#define BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN \
    _Pragma("clang diagnostic push") \
    BREEZE_CLANG_SUPPRESS_WARNING("-Wpadded") \
    BREEZE_CLANG_SUPPRESS_WARNING("-Wweak-vtables") \
    BREEZE_CLANG_SUPPRESS_WARNING("-Wreserved-id-macro")

#define BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END \
    _Pragma("clang diagnostic pop")

#elif defined(__GNUC__)
#define BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#define BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END
#else
#define BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#define BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END
#endif