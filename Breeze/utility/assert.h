#pragma once

#include "breeze/include/conditional_compilation.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <cassert>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze::detail {

    #if defined(NDEBUG)
    #define BREEZE_ASSERT(expression)
    #define BREEZE_ASSERT_MESSAGE(expression, message)
    #else
    #define BREEZE_ASSERT(expression) assert(expression)
    #define BREEZE_ASSERT_MESSAGE(expression, message) assert(expression)
    #endif

} 
