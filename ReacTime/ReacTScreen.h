#pragma once
#include "Button.h"
#include "Screen.h"
#include "Constants.h"

enum class State {
	Idle,
	Waiting,
	Stimulus,
	Finished
};

class ReacTScreen : public Screen {
private:
	Button startButton;
	State state = State::Idle;

public:
	ReacTScreen();

	void draw(sf::RenderWindow& window) override;
	void update(sf::Vector2f mouseCoords, bool isMouseLeftPressed);

	void startTest();

};