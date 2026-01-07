#include "Constants.h"
#include "ReacTScreen.h"
#include "GraphScreen.h"
//#include "Screen.h"
#include "Button.h"
#pragma once

enum class AppScreens {
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


public:

	ApplicationManager();

	void update(sf::RenderWindow& window);
	void draw(sf::RenderWindow& window);
	void changeScreen(AppScreens changeTo);

};