#include "GraphScreen.h"

GraphScreen::GraphScreen() : graphBackground(graphTexture){
	if (!graphTexture.loadFromFile("../assets/textures/GraphScreen.png"))
		printf("Graph Background Texture could not be loaded from file! ");
	graphBackground.setTexture(graphTexture);
	graphBackground.setTextureRect(sf::IntRect({ 0,0 }, { 1200,675 }));
}

void GraphScreen::draw(sf::RenderWindow& window) {
	//printf("Graph Screen is being drawn!\n");
	window.draw(graphBackground);
}