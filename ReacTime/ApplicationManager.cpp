#include "ApplicationManager.h"


ApplicationManager::ApplicationManager(sf::RenderWindow& window) : m_window(window) {
	graphButton = Button{ {(WindowWidth / 2) - 2 * ButtonSize.x, 30.f }, true};
	reactionTestButton = Button{ { (WindowWidth / 2) + ButtonSize.x, 30.f}, false };
}

void ApplicationManager::update() {
	if (graphButton.isActive()) {
		graph.draw(m_window);
	}
	else if(reactionTestButton.isActive()) {
		reactionTest.update();
		reactionTest.draw(m_window);
	}
	
	graphButton.draw(m_window);
	reactionTestButton.draw(m_window);
}

void ApplicationManager::graphButtonClicked() {
	graphButton.makeActive();
	reactionTestButton.makePassive();
}
void ApplicationManager::reactionTestButtonClicked() {
	graphButton.makePassive();
	reactionTestButton.makeActive();
}

sf::FloatRect ApplicationManager::getGraphBounds() {
	return graphButton.getBounds();
}
sf::FloatRect ApplicationManager::getReactionBounds() {
	return reactionTestButton.getBounds();
}
sf::FloatRect ApplicationManager::getReactionTestBounds() {
	return reactionTest.getStartTestBounds();
}
bool ApplicationManager::isReactionTestButtonActive() {
	return reactionTestButton.isActive();
}