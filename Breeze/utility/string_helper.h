#pragma once

#include "Breeze/include/conditional_compilation.h"
#include "Breeze/include/export.h"

namespace breeze::StringHelper {

POMDOG_EXPORT
bool hasPrefix(std::string_view s, std::string_view prefix);

POMDOG_EXPORT
bool hasSuffix(std::string_view s, std::string_view suffix);

POMDOG_EXPORT
std::string_view TrimRight(std::string_view source, char separator);

POMDOG_EXPORT
std::string_view TrimLift(std::string_view source, char sepearator);
}