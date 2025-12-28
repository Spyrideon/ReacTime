#pragma once
#include "Constants.h"
#include <stdexcept>
#include <optional>
#include "ReactionTest.h"

class Graph {
private:
	ReactionTest vertexArray[VertexArraySize];			// holds up to 100 vertices
	int nextIndex = 0;									// holds next index in the array to write to

	sf::RectangleShape xAxis;							// axis for delay in seconds
	sf::RectangleShape yAxis;							// axis for reactiontime in ms

public:

	Graph();

	void writeVertex(float delay, float rT);				// write vertex to array

	void draw(sf::RenderWindow& window);

};