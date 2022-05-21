#pragma once

#include "breeze/include/conditional_compilation.h"
#include "breeze/include/export.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <cstdint>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze::detail {
    template <typename T, class PhantomType>
    class TaggedArithmetic;

    namespace Tags {
        struct DegreeTag;
        struct RadianTag;
    }
}

namespace breeze {
    template <typename T>
    using Degree = detail::TaggedArithmetic<T, detail::Tags::DegreeTag>;

    template <typename T>
    using Radian = detail::TaggedArithmetic<T, detail::Tags::RadianTag>;

    class BoundingBox;
    class BoundingBox2D;
    class BoundingCircle;
}