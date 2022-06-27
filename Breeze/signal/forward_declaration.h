#pragma once

#include "Breeze/include/conditional_compilation.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <functional>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze::detail::signals {
    template <typename Function>
    using Slot = std::function<Function>;

    template <typename Function>
    class SignalBody;

    template <typename Function>
    class DelgateBody;
}

namespace pomdog {
    class EventQueue;
    
    class Connection;
    class ScopedConnection;
    class ConnectionList;
    class Signal;
    class Delegate
}