#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	corpyTexture.loadFromFile("gfx/animZombie.png");
	corpy.setSize(sf::Vector2f(55, 108));
	corpy.setPosition(100, 100);
	corpy.setTexture(&corpyTexture);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{

}

// Update game objects
void Level::update(float dt)
{
	corpy.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(corpy);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}