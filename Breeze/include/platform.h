#pragma once

#ifdef __APPLE_CC__
#include <TargetConditionals.h>
#endif

#if defined(linux) || defined(__linux) || defined(__linux__)
#define BREEZE_PLATFORM_LINUX
#elif defined(__ORBIS__)
#define BREEZE_PLATFORM_PLAYSTATION4
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
#define BREEZE_PLATFORM_BSD
#elif defined(_XBOX_ONE)
#define BREEZE_PLATFORM_XBOX_ONE
#elif defined(__NX__)
#define BREEZE_PLATFORM_SWITCH
#elif defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
#define BREEZE_PLATFORM_WIN32
#elif defined(__EMSCRIPTEN__)
#define BREEZE_PLATFORM_EMSCRIPTEN
#elif defined(ANDROID) || defined(__ANDROID__)
#define BREEZE_PLATFORM_ANDROID
#elif defined(__APPLE_CC__) && defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE
#define BREEZE_PLATFORM_APPLE_IOS
#elif defined(__APPLE_CC__) && defined(TARGET_OS_MAC) && TARGET_OS_MAC
#define BREEZE_PLATFORM_MACOSX
#elif defined(__QNXNTO__)
#define BREEZE_PLATFORM_QNXNTO
#elif defined(__native_client__)
#define BREEZE_PLATFORM_NACL
#elif defined(__CYGWIN__)
#define BREEZE_PLATFORM_CYGWIN
#elif defined(sun) || defined(__sun)
#define BREEZE_PLATFORM_SOLARIS
#elif defined(__hpux)
#define BREEZE_PLATFORM_HPUX
#elif defined(__ghs__)
#define BREEZE_PLATFORM_WIIU
#else
#error "Sorry, this platform is not supported."
#endif
