#pragma once

#include "Breeze/basic/conditional_compilation.h"
#include "Breeze/basic/export.h"

BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_BEGIN
#include <memory>
BREEZE_SUPPRESS_WARNINGS_GENERATED_BY_STD_HEADERS_END

namespace breeze {
    class AssetManager;
    class AudioEngine;
    class GameClock;
    class Gamepad;
    class GameWindow;
    class HTTPClient;
    class IOService;
    class Keyboard;
    class Mouse;
} 

namespace breeze::gpu {
    class CommandQueue;
    class GraphicsDevice;
} 

namespace breeze {

    class BREEZE_EXPORT GameHost : public std::enable_shared_from_this<GameHost> {
    public:    
        GameHost();
        GameHost(const GameHost&) = delete;
        GameHost& operator=(const GameHost&) = delete;

        virtual ~GameHost();

        virtual void Exit() = 0;

        [[nodiscard]] virtual std::shared_ptr<GameWindow>
        GetWindow() noexcept = 0;

        [[nodiscard]] virtual std::shared_ptr<GameClock>
        GetClock() noexcept = 0;

        [[nodiscard]] virtual std::shared_ptr<gpu::GraphicsDevice>
        GetGraphicsDevice() noexcept = 0;

        [[nodiscard]] virtual std::shared_ptr<gpu::CommandQueue>
        GetCommandQueue() noexcept = 0;

        [[nodiscard]] virtual std::shared_ptr<AudioEngine>
        GetAudioEngine() noexcept = 0;

        [[nodiscard]] virtual std::shared_ptr<AssetManager>
        GetAssetManager() noexcept = 0;

        [[nodiscard]] virtual std::shared_ptr<Keyboard>
        GetKeyboard() noexcept = 0;

        [[nodiscard]] virtual std::shared_ptr<Mouse>
        GetMouse() noexcept = 0;

        [[nodiscard]] virtual std::shared_ptr<Gamepad>
        GetGamepad() noexcept = 0;

        [[nodiscard]] virtual std::shared_ptr<IOService>
        GetIOService() noexcept = 0;

        [[nodiscard]] virtual std::shared_ptr<HTTPClient>
        GetHTTPClient() noexcept = 0;
    };

} 