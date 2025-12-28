#include "Button.h"

Button::Button(){}

Button::Button(sf::Vector2f position, bool checkedState) {
	checkedState ? body.setFillColor(buttonActiveCol) : body.setFillColor(buttonPassiveCol);
	body.setSize(ButtonSize);
	// if button is initialized active, color needs to be initialized acc
	body.setPosition(position);

	//sf::Font font("../assets/sounds/ballHit.wav");
	//sf::Text text(font);

	active = checkedState;				// set local field
}

sf::FloatRect Button::getBounds() {
	return body.getGlobalBounds();
}

bool Button::isActive() {					// return local field
	return active;
}

void Button::makePassive() {
	active = false;
	body.setFillColor(buttonPassiveCol);
}

void Button::makeActive() {
	active = true;
	body.setFillColor(buttonActiveCol);
}

void Button::draw(sf::RenderWindow& window) {
	window.draw(body);
}