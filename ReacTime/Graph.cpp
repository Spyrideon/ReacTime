#include "Graph.h"

Graph::Graph() {
	// initialize axis
	xAxis.setSize({ 1100.f, 2.f });
	yAxis.setSize({ 2.f, 600.f });
	xAxis.setPosition({ 50.f, 625.f });
	yAxis.setPosition({ 49.f, 26.f });
}

void Graph::writeVertex(float delay, float rT) {
	if (nextIndex >= VertexArraySize) {
		throw std::out_of_range("Vertex array is full");
	}
	else {
		vertexArray[nextIndex] = Vertex{delay, rT};
		/*ReactionTest current = vertexArray[nextIndex];
		current.setDelayTime(delay + 50.f);
		current.setReactionTime(625.f - rT);
		nextIndex++;*/
	}
}

void Graph::draw(sf::RenderWindow& window) {
	for (Vertex vertex : vertexArray) {
		vertex.draw(window);
	}
	window.draw(xAxis);
	window.draw(yAxis);
}