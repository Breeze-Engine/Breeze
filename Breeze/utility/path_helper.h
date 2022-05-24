#pragma once

#include "Breeze/include/conditional_compilation.h"
#include "Breeze/include/export.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <string>
#include <string_view>
#include <tuple>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze::PathHelper {

    [[nodiscard]] BREEZE_EXPORT std::string
    Join(std::string_view path1, std::string_view path2) noexcept;

    [[nodiscard]] BREEZE_EXPORT std::string_view
    GetBaseName(std::string_view path) noexcept;

    [[nodiscard]] BREEZE_EXPORT std::string_view
    GetDirectoryName(std::string_view path) noexcept;

    [[nodiscard]] BREEZE_EXPORT std::tuple<std::string_view, std::string_view>
    Split(std::string_view path) noexcept;

    [[nodiscard]] BREEZE_EXPORT std::tuple<std::string_view, std::string_view>
    SplitExtension(std::string_view path) noexcept;

    [[nodiscard]] BREEZE_EXPORT std::string
    Normalize(std::string_view path) noexcept;

    [[nodiscard]] BREEZE_EXPORT std::string
    ToSlash(std::string_view path) noexcept;

    [[nodiscard]] BREEZE_EXPORT std::string
    Relative(std::string_view path, std::string_view start) noexcept;

    [[nodiscard]] BREEZE_EXPORT bool
    IsAbsolute(std::string_view path) noexcept;

} 
