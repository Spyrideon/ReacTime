#include "Constants.h"
#pragma once

// to capture buttonstate for rendering right textures & logic
enum class ButtonState {
	Normal,
	Hovered,
	Pressed
};

class Button {
private:
	sf::Sprite body;
	sf::Texture texture{ sf::Vector2u(30,12) };
	ButtonState state = ButtonState::Normal;

	std::function<void()> buttonFunction;
public:
	Button(sf::Vector2f pos, std::string spriteFile, std::function<void()> buttonFunc, sf::Vector2f origin = { 0.f, 0.f });
	
	void update(sf::Vector2f mouseCoords, bool isMouseLeftPressed);

	void draw(sf::RenderWindow& window);
	void updateTexture();

};