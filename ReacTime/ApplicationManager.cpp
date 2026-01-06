#include "ApplicationManager.h"

ApplicationManager::ApplicationManager() : 
	graphButton({ 0.f,0.f }, "../assets/textures/GraphButton.png"), reacButton({ 0.f,100.f }, "../assets/textures/ReacTButton.png") {
	
}

void ApplicationManager::update(sf::RenderWindow& window) {
	while (const std::optional event = window.pollEvent()) {
		if (event->is<sf::Event::Closed>())
			window.close();
		if (const auto* mousePressed = event->getIf<sf::Event::MouseButtonPressed>()) {
			sf::Vector2f mouseWorldPos = window.mapPixelToCoords({ mousePressed->position.x, mousePressed->position.y });
			graphButton.update(mouseWorldPos, true);
			reacButton.update(mouseWorldPos, true);
		}
		if (const auto* mouseMoved = event->getIf< sf::Event::MouseMoved>()) {
			sf::Vector2f mouseWorldPos = window.mapPixelToCoords({ mouseMoved->position.x, mouseMoved->position.y });
			graphButton.update(mouseWorldPos, false);
			reacButton.update(mouseWorldPos, false);
		}
	}



	window.clear();

	graphButton.draw(window);
	reacButton.draw(window);

	window.display();
}

void ApplicationManager::draw(sf::RenderWindow& window) {
	graphButton.draw(window);
	reacButton.draw(window);
}