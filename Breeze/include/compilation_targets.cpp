#include "Breeze/include/compilation_targets.h"
#include "Breeze/include/conditional_compilation.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#ifdef __APPLE_CC__
#include <AvailabilityMacros.h>
#include <TargetConditionals.h>
#endif
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze {

    #if defined(_MSC_VER)
    #elif defined(__clang__)
    #elif defined(__GNUC__)
    #elif defined(__INTEL_COMPILER)
    #elif defined(__BORLANDC__) && defined(__BCPLUSPLUS__)
    #else
    #error "Compiler undefined or not supported."
    #endif

    #if defined(__clang__) && defined(__has_feature)
    #if __has_feature(cxx_lambdas) && \
        __has_feature(cxx_nullptr) && \
        __has_feature(cxx_static_assert) && \
        __has_feature(cxx_strong_enums) && \
        __has_feature(cxx_defaulted_functions) && \
        __has_feature(cxx_rvalue_references)
    #else
    #error "C++14 is not supported on this older version of clang."
    #endif
    #elif defined(_MSC_VER) && (_MSC_VER >= 1900)
    #elif defined(__GNUC__) && (__cplusplus >= 201402L)
    #else
    #error "C++14 is not supported."
    #endif

    #if defined(__APPLE_CC__) && defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE
    #if (__IPHONE_OS_VERSION_MIN_REQUIRED < 90300)
    #error "Minimum required OS X version: Apple iOS 9.3 or later"
    #endif
    #endif

    #if defined(__APPLE_CC__) && defined(TARGET_OS_MAC) && TARGET_OS_MAC
    #if (MAC_OS_X_VERSION_MIN_REQUIRED < MAC_OS_X_VERSION_10_14)
    #error "Minimum required OS X version: macOS 10.14 or later"
    #endif
    #endif

    #if defined(DEBUG) && defined(NDEBUG)
    #error "Both DEBUG and NDEBUG are defined."
    #endif

} 
