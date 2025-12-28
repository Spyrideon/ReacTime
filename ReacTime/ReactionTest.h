#pragma once
#include "Constants.h"

class ReactionTest {
private:
	float delayTime;					// "y" axis
	float reactionTime;					// "x" axis
	sf::CircleShape vertexBody;			// body to draw

public:

	ReactionTest(float delay, float rT);
	ReactionTest();

	void draw(sf::RenderWindow& window);

	// |  getter and setter for RT  |
	// v							v

	void setDelayTime(float d);

	void setReactionTime(float rT);

	float getDelayTime();

	float getReactionTime();
};