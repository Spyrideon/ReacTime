#pragma once

#include "Screen.h"

class GraphScreen : public Screen {
private:

public:
	GraphScreen();

	void draw(sf::RenderWindow& window);

	void update();


};