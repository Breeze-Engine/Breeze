#pragma once

#include "Breeze/include/conditional_compilation.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <system_error>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze::detail {
    [[nodiscard]] std::ercc ToErrc(int err) noexcept;
}