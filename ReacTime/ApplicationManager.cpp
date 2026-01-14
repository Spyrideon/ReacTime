#include "ApplicationManager.h"

ApplicationManager::ApplicationManager() : 
	graphButton(
		{ (WindowWidth / 2) - 120.f,20.f }, 
		"../assets/textures/GraphButton.png", 
		[this]() {changeScreen(AppScreen::Graph); }, 
		{ 30.f, 0.f }),
	reacButton(
		{ (WindowWidth / 2) + 120.f,20.f }, 
		"../assets/textures/ReacTButton.png", 
		[this]() {changeScreen(AppScreen::ReacT); }),
	navBar(navBarTexture){

	if (!navBarTexture.loadFromFile("../assets/textures/NavigationBanner.png"))
		printf("NavBar Texture could not be loaded from file!");
	navBar.setTexture(navBarTexture);
	navBar.setTextureRect(sf::IntRect({ 0,0 }, { 200,20 }));
	navBar.setScale({ 6.f,6.f });


	current = &reacT;
}

void ApplicationManager::update(sf::RenderWindow& window) {
	while (const std::optional event = window.pollEvent()) {
		if (event->is<sf::Event::Closed>())
			window.close();
		if (const auto* mousePressed = event->getIf<sf::Event::MouseButtonPressed>()) {
			sf::Vector2f mouseWorldPos = window.mapPixelToCoords({ mousePressed->position.x, mousePressed->position.y });
			graphButton.update(mouseWorldPos, true);
			reacButton.update(mouseWorldPos, true);
			current->update(mouseWorldPos, true);

		}
		else if (const auto* mouseMoved = event->getIf< sf::Event::MouseMoved>()) {
			sf::Vector2f mouseWorldPos = window.mapPixelToCoords({ mouseMoved->position.x, mouseMoved->position.y });
			graphButton.update(mouseWorldPos, false);
			reacButton.update(mouseWorldPos, false);
			current->update(mouseWorldPos, false);
		}
	}


	draw(window);
}

void ApplicationManager::draw(sf::RenderWindow& window) {
	window.clear();

	current->draw(window);
	window.draw(navBar);
	graphButton.draw(window);
	reacButton.draw(window);


	window.display();
}

void ApplicationManager::changeScreen(AppScreen changeTo) {
	switch(changeTo) {
	case AppScreen::Graph:
		current = &graph;
		break;
	case AppScreen::ReacT:
		current = &reacT;
		break;
	default:
		printf("Not accepted AppScreen state!");
		break;
	}

}