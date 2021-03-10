#include "Pawn.h"

bool Pawn::MoveTo(int LocX, int LocY)
{
	GameBoard* game_board = GameBoard::get_game_board();
	BasicTool* tool = game_board->getSol(LocX, LocY);
	if (this->LocX != LocX)
	{
		
		if (tool == nullptr)
			return false;
		if (checkKingThreat(this->LocX, this->LocY)) 
		{
			return false;
		}

	}
	if (this->LocY - LocY == 2 || LocY - this->LocY == 2)
	{
		if (!firstMove)
			return false;

	}
}
