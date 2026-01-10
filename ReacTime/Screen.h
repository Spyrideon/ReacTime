#include "Constants.h"
#pragma once

class Screen {
private:

public:

	virtual ~Screen() = default;

	virtual void draw(sf::RenderWindow& window) = 0;

	//virtual void handleEvent(const sf::Event& /*event*/) {}

	virtual void update(sf::Vector2f mouseCoords, bool isMouseLeftPressed) { }


};