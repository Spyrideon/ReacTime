#include "ReactionTest.h"


ReactionTest::ReactionTest(float delay, float rT) {
	delayTime = delay;														// initialize field
	reactionTime = rT;														// initialize field
	vertexBody.setOrigin({ vertexRadius / 2.f, vertexRadius / 2.f });		// make origin centre of cirle
	vertexBody.setPosition({ 50.f + delay, 625.f - rT });					// set the position relative to local coordinate sys
	vertexBody.setRadius(vertexRadius);										// set radius
	vertexBody.setFillColor(sf::Color::White);								// set color
}
ReactionTest::ReactionTest(){				// empty constructor for array initialization
	delayTime = 0.f;
	reactionTime = 0.f;
}

void ReactionTest::draw(sf::RenderWindow& window) {
	window.draw(vertexBody);
}

// |  getter and setter for RT  |
// v							v

void ReactionTest::setDelayTime(float d) {
	this->delayTime = d;
}

void ReactionTest::setReactionTime(float rT) {
	this->reactionTime = rT;
}

float ReactionTest::getDelayTime() {
	return this->delayTime;
}

float ReactionTest::getReactionTime() {
	return this->reactionTime;
}