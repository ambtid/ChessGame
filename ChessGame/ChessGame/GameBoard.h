#pragma once
#include "BasicTool.h"
#include "King.h"
#define BOARDSIZE  7
class GameBoard
{
private:
	static GameBoard* game_board;
	GameBoard();
	King* BlackKing;
	King* WhiteKing;
	BasicTool*** tools;
	

public:
	bool threatState = false;
	BasicTool* threatTool;
	static GameBoard* get_game_board()
	{
		if (!game_board)
		{
			game_board = new GameBoard();
		}
		return game_board;
	}

	BasicTool* getSol(int x, int y)
	{
		if (tools[x][y])
			return tools[x][y];
		else
			return NULL;

	}

	bool checkKingThreat(int x, int y, int color)
	{
		King* king_on_threat;
		switch (color)
		{
		case BLACK:
			king_on_threat = BlackKing;
			break;
		case WHITE:
			king_on_threat = WhiteKing;
			break;
		} 
		

	}

	King* getKingGame(int color)
	{
		if (color == BLACK)
			return WhiteKing;
		else
			return BlackKing;


	}

};

