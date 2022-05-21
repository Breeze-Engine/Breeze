#pragma once

#include "Breeze/include/conditional_compilation.h"
#include "Breeze/include/export.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <cstddef>
#include <cstdint>
#include <string>
#include <type_traits>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze::detail::crc32 {

    [[nodiscard]] BREEZE_EXPORT std::uint32_t
    ComputeCRC32(const void* data, std::size_t length) noexcept;

    template <typename CharT>
    [[nodiscard]] BREEZE_EXPORT std::uint32_t
    ComputeCRC32(const std::basic_string<CharT>& data) noexcept {
        static_assert(std::is_integral<CharT>::value, "You can only use integral types");
        return ComputeCRC32(data.data(), data.length() * sizeof(CharT));
    }

} 
