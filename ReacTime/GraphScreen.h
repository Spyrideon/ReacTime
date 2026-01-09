#pragma once

#include "Screen.h"

class GraphScreen : public Screen {
private:
	sf::Sprite graphBackground;
	sf::Texture graphTexture;


public:
	GraphScreen();

	void draw(sf::RenderWindow& window) override;


};