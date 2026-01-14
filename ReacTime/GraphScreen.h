#pragma once

#include "Screen.h"

class GraphScreen : public Screen {
private:
	sf::Sprite graphBackground;
	sf::Texture graphTexture;

	sf::Texture vertexTexture;
	std::vector<sf::Sprite> vertexVector;

public:
	GraphScreen();

	void draw(sf::RenderWindow& window) override;

	void writeVertex(sf::Vector2f pos);
};