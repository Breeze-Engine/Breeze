#pragma once

#include "Breeze/include/conditional_compilation.h"
#include "Breeze/include/export.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <atomic>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze::detail {

    class BREEZE_EXPORT SpinLock final {
        std::atomic_flag flag = ATOMIC_FLAG_INIT;

    public:
        void lock() noexcept;

        void unlock() noexcept;
    };

} 
