#pragma once
#include "lib\framework.hpp"

enum Map{
	MAP_HEIGHT = 8,
	MAP_WIDTH = 8,
	BLOCK_SIZE = 75,
	PIECE_SIZE = 20
};

class Game{

private:

	Texture Rule1;
	Texture Rule2;
	Texture Rule3;
	Texture Rule4;
	Texture Rule5;

public:
	Game();
	
	Vec2f Mpos = Vec2f(500, -260);


	void Setup();
	void Draw();
	int Stage[MAP_HEIGHT][MAP_WIDTH];

};