#pragma once

#include "breeze/utility/errors.h"
#include <memory>
#include <string>
#include <tuple>

namespace breeze::detail::apple {
    [[nodiscard]] std::unique_ptr<Error>
    CreateNewDirectory(const std::string& path) noexcept;

    [[nodiscard]] std::unique_ptr<Error>
    CreateDirectories(const std::string& path) noexcept;

    [[nodiscard]] bool
    Exists(const std::string& path) noexcept;

    [[nodiscard]] bool
    IsDirectory(const std::string& path) noexcept;

    [[nodiscard]] std::tuple<std::size_t, std::unique_ptr<Error>>
    GetFileSize(const std::string& path) noexcept;

    [[nodiscard]] std::tuple<std::string, std::unique_ptr<Error>>
    GetLocalAppDataDirectoryPath() noexcept;

    [[nodiscard]] std::tuple<std::string, std::unique_ptr<Error>>
    GetAppDataDirectoryPath() noexcept;

    [[nodiscard]] std::tuple<std::string, std::unique_ptr<Error>>
    GetResourceDirectoryPath() noexcept;

    [[nodiscard]] std::tuple<std::string, std::unique_ptr<Error>>
    GetTempDirectoryPath() noexcept;

    [[nodiscard]] std::tuple<std::string, std::unique_ptr<Error>>
    GetCurrentWorkingDirectory() noexcept;

}
