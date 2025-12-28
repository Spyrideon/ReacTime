#include "Constants.h"
#include "Graph.h"
#include "ApplicationManager.h"



int main()
{
	//------------------------------------------- INITIALIZE ---------------------------------------------//																	// Enable anti-aliasing
	sf::RenderWindow window(sf::VideoMode({WindowWidth, WindowHeight}), "ReacTime", sf::Style::Default);
	window.setVerticalSyncEnabled(true);																	// Enable vertical sync
	window.setFramerateLimit(60);																			// Set framerate limit to 60 FPS

	ApplicationManager applicationManager(window);
	Graph graph;


	//------------------------------------------- INITIALIZE ---------------------------------------------//
	//####################################################################################################//
	//####################################################################################################//
	//---------------------------------------------- LOAD ------------------------------------------------//

	graph.writeVertex(20.f, 20.f);							// test write vertex
	//---------------------------------------------- LOAD ------------------------------------------------//
	//####################################################################################################//
	//####################################################################################################//
	//--------------------------------------------- UPDATE -----------------------------------------------//
	while (window.isOpen())
	{
		while (const std::optional event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
				window.close();
			if (const auto* mb = event->getIf<sf::Event::MouseButtonPressed>()) {
				if (mb->button == sf::Mouse::Button::Left) {
					sf::Vector2i pixel = mb->position;
					sf::Vector2f world = window.mapPixelToCoords(pixel);

					if (applicationManager.getGraphBounds().contains(world)) {
						applicationManager.graphButtonClicked();
					}
					else if (applicationManager.getReactionBounds().contains(world)) {
						applicationManager.reactionTestButtonClicked();
					}
				}
			}
		}
		
		

	//--------------------------------------------- UPDATE -----------------------------------------------//
	//####################################################################################################// 
	//####################################################################################################// 
	//	-------------------------------------------- DRAW ------------------------------------------------//
		window.clear();
		
		applicationManager.update();
		//graph.draw(window);

		window.display();
	//	-------------------------------------------- DRAW ------------------------------------------------//
	}
	return 0;
}
