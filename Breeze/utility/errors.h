#pragma once

#include "Breeze/include/conditional_compilation.h"
#include "Breeze/include/export.h"
#include "Breeze/utility/assert.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <memory>
#include <string>
#include <system_error>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze {

    class BREEZE_EXPORT Error {
    public:
        virtual ~Error() noexcept;
        [[nodiscard]] virtual std::string ToString() const noexcept = 0;
        [[nodiscard]] virtual std::unique_ptr<Error> Clone() const noexcept = 0;
    };

} 