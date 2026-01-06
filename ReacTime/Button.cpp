#include "Button.h"

Button::Button(sf::Vector2f pos, std::string spriteFile) : body(texture){
	if (!texture.loadFromFile(spriteFile))
		printf("Texture could not be loaded from file!");
	body.setTexture(texture);
	body.setTextureRect(sf::IntRect({ 0,0 }, { 30,12 }));
	body.setScale({ 6.f,6.f });
	body.setPosition(pos);
}


void Button::draw(sf::RenderWindow& window) {
	window.draw(body);
}
void Button::update(sf::Vector2f mouseCoords, bool isMouseLeftPressed) {
	bool hovering = body.getGlobalBounds().contains(mouseCoords);
	
	ButtonState newState;
	if (hovering && isMouseLeftPressed) {
		newState = ButtonState::Pressed;
	}
	else if (hovering)
		newState = ButtonState::Hovered;
	else
		newState = ButtonState::Normal;

	
	if (newState != state) {
		state = newState;
		updateTexture();
	}
}
void Button::updateTexture() {
	switch (state) {
	case ButtonState::Normal:
		body.setTextureRect(sf::IntRect({ 0,0 }, { 30, 12 }));
		break;
	case ButtonState::Hovered:
		body.setTextureRect(sf::IntRect({ 30,0 }, { 30, 12 }));
		break;
	case ButtonState::Pressed:
		body.setTextureRect(sf::IntRect({ 60,0 }, { 30, 12 }));
		break;
	default:
		break;
	}
}