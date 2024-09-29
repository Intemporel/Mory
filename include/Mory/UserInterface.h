#pragma once

#include <SFML/Window.hpp>

namespace Mory
{
    class UserInterface
    {
    public:
        static void PoolEvent(std::optional<sf::Event> event);
    };
}