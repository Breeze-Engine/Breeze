#pragma once

#include "Breeze/include/conditional_compilation.h"
#include "Breeze/include/export.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <memory>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze {
    class Error;
}

namespace breeze {

    class BREEZE_EXPORT Game {
    public:
        Game();
        Game(const Game&) = delete;

        Game& operator=(const Game&) = delete;

        virtual ~Game();

        [[nodiscard]] virtual std::unique_ptr<Error> intiialize() = 0;

        virtual void Update() = 0;

        virtual void Draw() = 0;
    };  
}