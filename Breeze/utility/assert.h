#pragma once

#include "breeze/include/conditional_compilation.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <cassert>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze::detail {
#if defined(NDEBUG)
#define BREEZE_ASSERT(expression)
#define BREEEZE_ASSERT_MESSAGE(expression, message)
#else
#endif
}