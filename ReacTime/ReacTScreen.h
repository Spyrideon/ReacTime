#pragma once
#include "Button.h"
#include "Screen.h"
#include "Constants.h"

class ReacTScreen : public Screen {
private:
	Button startButton;


public:
	ReacTScreen();

	void draw(sf::RenderWindow& window) override;
	void update(sf::Vector2f mouseCoords, bool isMouseLeftPressed);

	void startTest();

};