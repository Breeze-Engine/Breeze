#pragma once

#if defined(_M_IX86) || defined(__i386__)
#define BREEZE_ARCHITECTURE_X86
#elif defined(_M_IA64) || defined(__ia64__)
#define BREEZE_ARCHITECTURE_IA64
#elif defined(_M_AMD64) || defined(__amd64__)
#define BREEZE_ARCHITECTURE_AMD64
#elif defined(_M_ARM) || defined(__arm__)
#define BREEZE_ARCHITECTURE_ARM
#elif defined(__aarch64__) || defined(__arm64__)
#define BREEZE_ARCHITECTURE_ARM64
#elif defined(__powerpc64__)
#define BREEZE_ARCHITECTURE_POWERPC64
#elif defined(_M_PPC) || defined(__ppc__)
#define BREEZE_ARCHITECTURE_POWERPC
#elif defined(_POWER) || defined(_ARCH_PWR) || defined(_ARCH_COM)
#define BREEZE_ARCHITECTURE_POWER
#elif defined(__mips__) || defined(__mips) || defined(__MIPS__)
#define BREEZE_ARCHITECTURE_MIPS
#elif defined(__alpha__) || defined(__alpha)
#define BREEZE_ARCHITECTURE_ALPHA
#elif defined(__EMSCRIPTEN__)
#define BREEZE_ARCHITECTURE_EMSCRIPTEN
#else
#error "Cannot detect CPU architecture."
#endif

#if defined(BREEZE_ARCHITECTURE_X86)
#define BREEZE_BYTEORDER_LITTLE_ENDIAN
#elif defined(BREEZE_ARCHITECTURE_AMD64)
#define BREEZE_BYTEORDER_LITTLE_ENDIAN
#elif defined(BREEZE_ARCHITECTURE_IA64) && (defined(_hpux) || defined(hpux))
#define BREEZE_BYTEORDER_BIG_ENDIAN
#elif defined(BREEZE_ARCHITECTURE_IA64)
#define BREEZE_BYTEORDER_LITTLE_ENDIAN
#elif defined(__ARMEB__)
#define BREEZE_BYTEORDER_BIG_ENDIAN
#elif defined(__ARMEL__)
#define BREEZE_BYTEORDER_LITTLE_ENDIAN
#elif defined(BREEZE_ARCHITECTURE_POWERPC)
#define BREEZE_BYTEORDER_BIG_ENDIAN
#elif defined(BREEZE_ARCHITECTURE_POWER)
#define BREEZE_BYTEORDER_BIG_ENDIAN
#elif defined(MIPSEB) || defined(_MIPSEB) || defined(__MIPSEB)
#define BREEZE_BYTEORDER_BIG_ENDIAN
#elif defined(MIPSEL) || defined(_MIPSEL) || defined(__MIPSEL)
#define BREEZE_BYTEORDER_LITTLE_ENDIAN
#elif defined(BREEZE_ARCHITECTURE_ALPHA)
#define BREEZE_BYTEORDER_LITTLE_ENDIAN
#elif defined(__LITTLE_ENDIAN__)
#define BREEZE_BYTEORDER_LITTLE_ENDIAN
#elif defined(__BIG_ENDIAN__)
#define BREEZE_BYTEORDER_BIG_ENDIAN
#elif defined(__BYTE_ORDER) && (__BYTE_ORDER == __LITTLE_ENDIAN)
#define BREEZE_BYTEORDER_LITTLE_ENDIAN
#elif defined(__BYTE_ORDER) && (__BYTE_ORDER == __BIG_ENDIAN)
#define BREEZE_BYTEORDER_BIG_ENDIAN
#else
#error "Byte order undefined or not supported."
#endif
