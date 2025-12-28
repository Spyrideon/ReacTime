#pragma once
#include "Constants.h"

class Vertex {
private:
	float delayTime;					// "y" axis
	float reactionTime;					// "x" axis
	sf::CircleShape vertexBody;			// body to draw

public:

	Vertex(float delay, float rT);
	Vertex();

	void draw(sf::RenderWindow& window);

	// |  getter and setter for RT  |
	// v							v

	void setDelayTime(float d);

	void setReactionTime(float rT);

	float getDelayTime();

	float getReactionTime();
};