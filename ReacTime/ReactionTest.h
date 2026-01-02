#include "Constants.h"
#include "Button.h"
#pragma once

class ReactionTest {
private:
	Button startButton;

public:
	ReactionTest();

	void draw(sf::RenderWindow& window);

	void runTest();

	void update();

	sf::FloatRect getStartTestBounds();
};