#pragma once

#include "breeze//conditional_compilation.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <chrono>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze {
    /**
     * @breif duration
     */
    using Duration = std::chrono::duration<double>;
}