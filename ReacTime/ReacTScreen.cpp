#include "ReacTScreen.h"

ReacTScreen::ReacTScreen() : startButton(
	{ WindowWidth/2.f,WindowHeight - 150.f }, 
	"../assets/textures/StartButton.png", 
	[this]() {startTest(); },
	{15.f,0.f}) {

}

void ReacTScreen::draw(sf::RenderWindow& window) {
	switch (state) {
	case State::Idle:
		startButton.draw(window);
		break;
	case State::Waiting:

		break;

	case State::Stimulus:

		break;

	case State::Finished:

		break;

	default:
		printf("Unknown ReacTScreen state!");
	}
}

void ReacTScreen::update(sf::Vector2f mouseCoords, bool isMouseLeftPressed) {
	switch (state) {
	case State::Idle:
		startButton.update(mouseCoords, isMouseLeftPressed);
		break;
	case State::Waiting:

		break;

	case State::Stimulus:

		break;

	case State::Finished:

		break;

	default:
		printf("Unknown ReacTScreen state!");
	}
}

void ReacTScreen::startTest() {
	//printf("Reaction Test was started!\n");
	state = State::Waiting;
}