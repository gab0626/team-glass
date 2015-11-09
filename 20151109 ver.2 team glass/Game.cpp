#pragma once
#include "Game.h"
#include "lib\framework.hpp"

Game::Game()
{
	Rule1 = Texture("res/rules.png");
	Rule2 = Texture("res/rules1.png");
	Rule3 = Texture("res/rules2.png");
	Rule4 = Texture("res/rules3.png");
	Rule5 = Texture("res/rules4.png");
}

void Game::Setup()
{
	std::ifstream* Mapfile = nullptr;

	const char* NewStage = "res/Stage.txt";

	Mapfile = new std::ifstream(NewStage);

	for (int i = 0; i < MAP_HEIGHT; i++)
	{
		for (int k = 0; k < MAP_WIDTH; k++)
		{
			*Mapfile >> Stage[i][k];
		}
	}

}

void Game::Draw()
{
	for (int i = 0; i < MAP_HEIGHT; i++)
	{
		for (int k = 0; k < MAP_WIDTH; k++)
		{
			Vec2f MapPos = Vec2f(BLOCK_SIZE * k, BLOCK_SIZE * -i) - Mpos;

			switch (Stage[i][k])
			{
			case 0://Cant'Move
				drawFillBox(MapPos.x(), MapPos.y(), BLOCK_SIZE, BLOCK_SIZE, Color::maroon);
				break;

			case 1://Can Move
				drawFillBox(MapPos.x(), MapPos.y(), BLOCK_SIZE, BLOCK_SIZE, Color::olive);
				break;

			case 2://MyPiece
				drawFillBox(MapPos.x(), MapPos.y(), BLOCK_SIZE, BLOCK_SIZE, Color::olive);
				drawFillCircle(MapPos.x(), MapPos.y(), PIECE_SIZE, PIECE_SIZE, 100, Color::blue);
				break;

			case 3://Enemy's Piece
				drawFillBox(MapPos.x(), MapPos.y(), BLOCK_SIZE, BLOCK_SIZE, Color::olive);
				drawFillCircle(MapPos.x(), MapPos.y(), BLOCK_SIZE, BLOCK_SIZE, 100, Color::red);
				break;
			}
		}
	}



}