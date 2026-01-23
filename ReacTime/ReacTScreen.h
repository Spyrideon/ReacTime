#pragma once
#include "Button.h"
#include "Screen.h"
#include "Constants.h"

// capture current screen state (reaction test running, finished etc.)
enum class State {
	Idle,
	Waiting,
	Stimulus,
	Finished
};

class ReacTScreen : public Screen {
private:
	Button startButton;		// button to start a reaction test
	State state = State::Idle;

public:
	ReacTScreen();

	void draw(sf::RenderWindow& window) override;
	void update(sf::Vector2f mouseCoords, bool isMouseLeftPressed);

	void startTest();

};