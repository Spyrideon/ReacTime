#include "Constants.h"
#include "ReacTScreen.h"
#include "GraphScreen.h"
#include "Button.h"
#pragma once

// to capture the active screen (adjustable)
enum class AppScreen {
	Graph,
	ReacT
};

class ApplicationManager {
private:
	Button graphButton;
	Button reacButton;
	
	GraphScreen graph;
	ReacTScreen reacT;
	Screen* current;		// pointer to current screen, only switch with button logic

	sf::Sprite navBar;
	sf::Texture navBarTexture{ sf::Vector2u(675,100) };
public:

	ApplicationManager();

	void update(sf::RenderWindow& window);
	void draw(sf::RenderWindow& window);
	void changeScreen(AppScreen changeTo);

};