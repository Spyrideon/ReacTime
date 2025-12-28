#include <SFML/Graphics.hpp>
#include <optional>
#pragma once

constexpr unsigned int WindowHeight = 675;	// 16:9 ratio
constexpr unsigned int WindowWidth = 1200;	// 16:9 ratio

inline sf::Color color(20, 90, 25, 80);		// test color
inline sf::Color buttonPassiveCol(66, 66, 66);
inline sf::Color buttonActiveCol(122, 122, 122);
inline sf::Vector2f ButtonSize = { 120.f, 40.f };

constexpr float vertexRadius = 5.f;

constexpr unsigned int VertexArraySize = 50;

inline sf::Font font("../assets/font/ByteBounce.ttf");

