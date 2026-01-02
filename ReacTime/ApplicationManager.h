#include "Constants.h"
#include "Button.h"
#include "Graph.h"
#include "ReactionTest.h"
#pragma once

class ApplicationManager {
private:
	Graph graph;
	ReactionTest reactionTest;

	Button graphButton;
	Button reactionTestButton;

	sf::RenderWindow& m_window;

public:
	explicit ApplicationManager(sf::RenderWindow& win);

	void update();

	void graphButtonClicked();
	void reactionTestButtonClicked();
	sf::FloatRect getGraphBounds();
	sf::FloatRect getReactionBounds();
	sf::FloatRect getReactionTestBounds();
	bool isReactionTestButtonActive();
};
