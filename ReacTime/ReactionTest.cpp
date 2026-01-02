#include "ReactionTest.h"

ReactionTest::ReactionTest() {
	startButton = Button{ {(WindowWidth / 2)-(ButtonSize.x / 2), WindowHeight - 4 * ButtonSize.y }, false };
}

void ReactionTest::draw(sf::RenderWindow& window) {
	startButton.draw(window);
}

void ReactionTest::runTest() {

}

void ReactionTest::update() {
	if (startButton.isActive()) {
		runTest();
		startButton.makePassive();
	}
}

sf::FloatRect ReactionTest::getStartTestBounds() {
	return startButton.getBounds();
}