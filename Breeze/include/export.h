#pragma once

#if defined(BREEZE_BUILDING_LIBRARY_EXPORTS) && defined(BREEZE_USING_LIBRARY_EXPORTS)
#error "exporting error"
#endif

#if defined(_MSC_VER) && defined(_WIN32)
#if defined(BREEZE_BUILDING_LIBRARY_EXPORTS)
#define BREEZE_EXPORT __declspec(dllexport)
#elif defined(BREEZE_USING_LIBRARY_EXPORTS)
#define BREEZE_EXPORT __declspec(dllimport)
#else
#define BREEZE_EXPORT
#endif

#elif defined(__CYGWIN__) && defined(__GNUC__)
#if defined(BREEZE_BUILDING_LIBRARY_EXPORTS)
#define BREEZE_EXPORT __attribute__((dllexport))
#elif defined(BREEZE_USING_LIBRARY_EXPORTS)
#define BREEZE_EXPORT __attribute__((dllimport))
#else
#define BREEZE_EXPORT
#endif

#elif defined(__clang__) && defined(__APPLE_CC__)
#if defined(BREEZE_BUILDING_LIBRARY_EXPORTS)
#define BREEZE_EXPORT __attribute__((visibility("default")))
#elif defined(BREEZE_USING_LIBRARY_EXPORTS)
#define BREEZE_EXPORT
#else
#define BREEZE_EXPORT
#endif

#elif defined(__GNUC__) && ((__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 3))f
#if defined(BREEZE_BUILDING_LIBRARY_EXPORTS)
#define BREEZE_EXPORT __attribute__((visibility("default")))
#elif defined(BREEZE_USING_LIBRARY_EXPORTS)
#define BREEZE_EXPORT
#else
#define BREEZE_EXPORT
#endif

#endif
