#include "Constants.h"
#include "ReacTScreen.h"
#include "GraphScreen.h"
//#include "Screen.h"
#include "Button.h"
#pragma once

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
	Screen* current;

	sf::Sprite navBar;
	sf::Texture navBarTexture{ sf::Vector2u(675,100) };
public:

	ApplicationManager();

	void update(sf::RenderWindow& window);
	void draw(sf::RenderWindow& window);
	void changeScreen(AppScreen changeTo);

};