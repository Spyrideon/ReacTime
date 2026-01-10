#include "ReacTScreen.h"

ReacTScreen::ReacTScreen() : startButton(
	{ WindowWidth/2.f,WindowHeight - 150.f }, 
	"../assets/textures/StartButton.png", 
	[this]() {startTest(); },
	{15.f,0.f}) {

}

void ReacTScreen::draw(sf::RenderWindow& window) {
	//printf("ReacT Screen is being drawn!\n");
	startButton.draw(window);
}

void ReacTScreen::update(sf::Vector2f mouseCoords, bool isMouseLeftPressed) {
	startButton.update(mouseCoords, isMouseLeftPressed);
}

void ReacTScreen::startTest() {
	printf("Reaction Test was started!\n");
}