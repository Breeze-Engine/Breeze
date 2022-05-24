//
// Created by Pranav on 24/05/22.
//

#include "Breeze/utility/error_helper.h"

namespace breeze::detail {
    std::errc ToErrc(int err) noexcept {
        static_assert(std::errc::bad_address == static_cast<std::errc>(EFAULT));

        return static_cast<std::errc>(err);
    }
}
