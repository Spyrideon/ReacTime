#include "Vertex.h"


Vertex::Vertex(float delay, float rT) {
	delayTime = delay;														// initialize field
	reactionTime = rT;														// initialize field
	vertexBody.setOrigin({ vertexRadius / 2.f, vertexRadius / 2.f });		// make origin centre of cirle
	vertexBody.setPosition({ 50.f + delay, 625.f - rT });					// set the position relative to local coordinate sys
	vertexBody.setRadius(vertexRadius);										// set radius
	vertexBody.setFillColor(sf::Color::White);								// set color
}
Vertex::Vertex(){				// empty constructor for array initialization
	delayTime = 0.f;
	reactionTime = 0.f;
}

void Vertex::draw(sf::RenderWindow& window) {
	window.draw(vertexBody);
}

// |  getter and setter for RT  |
// v							v

void Vertex::setDelayTime(float d) {
	this->delayTime = d;
}

void Vertex::setReactionTime(float rT) {
	this->reactionTime = rT;
}

float Vertex::getDelayTime() {
	return this->delayTime;
}

float Vertex::getReactionTime() {
	return this->reactionTime;
}