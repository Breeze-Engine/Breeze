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

namespace breeze::errors {

    class BREEZE_EXPORT IOError final : public Error {
    public:
        std::errc Kind;
        std::string Reason;
        [[nodiscard]] std::string ToString() const noexcept override;
        [[nodiscard]] std::unique_ptr<Error> Clone() const noexcept override;
    };

    [[nodiscard]] BREEZE_EXPORT std::unique_ptr<IOError>
    New(std::errc kind, std::string&& reason) noexcept;

    [[nodiscard]] BREEZE_EXPORT std::unique_ptr<Error>
    New(std::string&& message) noexcept;

    [[nodiscard]] BREEZE_EXPORT std::unique_ptr<Error>
    Wrap(std::unique_ptr<Error>&& err, std::string&& message) noexcept;

} 
