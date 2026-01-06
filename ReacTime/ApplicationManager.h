#include "Constants.h"
#include "Button.h"
#pragma once

class ApplicationManager {
private:
	Button graphButton;
	Button reacButton;


public:

	ApplicationManager();

	void update(sf::RenderWindow& window);
	void draw(sf::RenderWindow& window);

};