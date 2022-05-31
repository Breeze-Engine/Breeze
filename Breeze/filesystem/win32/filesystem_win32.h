// file system windows

#pragma once

#include "Breeze/include/conditional_compilation.h"
#include "Breeze/utility/errors.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <memory>
#include <string>
#include <tuple>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze::detail::win32 {
    [[nodiscard]] std::unique_ptr<Error>
    CreateNewDirectory(const std::string& path) noexcept;

    [[nodiscard]] std::unique_ptr<Error>
    CreateDirectories(const std::string& path) noexcept;
}