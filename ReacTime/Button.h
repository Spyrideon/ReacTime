#include "Constants.h"
#pragma once

class Button {
private:
	sf::RectangleShape body;
	sf::Vector2f size{ButtonSize};

	//sf::Text text;

	bool active;

public:
	Button();

	Button(sf::Vector2f position, bool checkedState);

	void draw(sf::RenderWindow& window);

	sf::FloatRect getBounds();

	bool isActive();

	void makeActive();

	void makePassive();

};