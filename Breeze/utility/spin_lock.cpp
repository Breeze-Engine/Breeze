#include "Breeze/utility/spin_lock.h"
#include "Breeze/include/conditional_compilation.h"
#include "Breeze/include/platform.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#if defined(BREEZE_PLATFORM_LINUX) && (defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64))
#include <emmintrin.h>
#else
#include <thread>
#endif
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze::detail {

void SpinLock::lock() noexcept {
    while (flag.test_and_set(std::memory_order_acquire)) {
#if defined(BREEZE_PLATFORM_LINUX) && (defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64))
        _mm_pause();
#else
        std::this_thread::yield();
#endif
    }
}

void SpinLock::unlock() noexcept
{
    flag.clear(std::memory_order_release);
}

}
