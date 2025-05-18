#pragma once
#include <iostream>

class Game
{
	void GamePhysics();
	void Render();
	void Initialize(const std::string& Name);
public:
	Game(const std::string& Name);		// Game constructor
	void Run() const;					// runs the game
};
