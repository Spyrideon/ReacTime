#include "GraphScreen.h"

GraphScreen::GraphScreen() : graphBackground(graphTexture){
	if (!graphTexture.loadFromFile("../assets/textures/GraphScreen.png"))
		printf("Graph Background Texture could not be loaded from file! \n");
	if (!vertexTexture.loadFromFile("../assets/textures/Point.png"))
		printf("Vertex Texture could not be loaded from file! \n");
	graphBackground.setTexture(graphTexture);
	graphBackground.setTextureRect(sf::IntRect({ 0,0 }, { 1200,675 }));

	vertexArray.reserve(100);
	//writeVertex({ 0.f,0.f });
}

void GraphScreen::draw(sf::RenderWindow& window) {
	//printf("Graph Screen is being drawn!\n");
	window.draw(graphBackground);

	for (const auto& vertex : vertexVector) {
		window.draw(vertex);
	}
}

void GraphScreen::writeVertex(sf::Vector2f pos) {
	if (vertexVector.size() >= 100)
		return;

	sf::Sprite sprite(vertexTexture);
	
	sprite.setTextureRect(sf::IntRect({0,0}, {5, 5}));
	sprite.setScale({ 3.f,3.f });
	sprite.setOrigin(sf::Vector2f{2.5f, 2.5f});
	sprite.setPosition({80.f + pos.x, WindowHeight - 80.f - pos.y});

	vertexVector.emplace_back(sprite);
}