#include "Mory/UserInterface.h"

#include <iostream>

namespace Mory
{
    void UserInterface::PoolEvent(const std::optional<sf::Event> event)
    {
        if (event->is<sf::Event::MouseMoved>())
        {
            auto mouseEvent = event->getIf<sf::Event::MouseMoved>();
            std::cout << "Mouse moved: " << mouseEvent->position.x << " ; " << mouseEvent->position.y << std::endl;
        }
    }
}