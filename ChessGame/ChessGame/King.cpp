#include "King.h"

bool King::MoveTo(int LocX, int LocY)
{
	if (abs(LocX - this->LocX) > 1 || abs(LocY - this->LocY) > 1)
		return false;
	//check_threat(LocX, LocY);

}

bool King::checkThreat(int DesX, int DesY)
{
	if (!(DIRECTION_E || DIRECTION_W || DIRECTION_S || DIRECTION_N || DIRECTION_NE || DIRECTION_NW || DIRECTION_SE || DIRECTION_SW))
	{
		return true;
	}
	if (sol_in_path(LocX, LocY, DesX, DesY)!=nullptr) 
	{
		return true;

	}
	BasicTool* tool;
	if (DIRECTION_E)
		tool = sol_in_path(DesX, DesY, DesX, BOARDSIZE);
	if (DIRECTION_W)
		tool = sol_in_path(DesX, DesY, DesX, 0);
	if (DIRECTION_N)
		tool = sol_in_path(DesX, DesY, BOARDSIZE, DesY);
	if (DIRECTION_E)
		tool = sol_in_path(DesX, DesY, BOARDSIZE, DesY);

	GameBoard* game = GameBoard::get_game_board();
	if (DIRECTION_NE)
	{
		size_t j = DesX + 1;
		for (size_t i = DesX + 1; i < BOARDSIZE || j < BOARDSIZE ; i++, j++)
		{
			if (game->getSol(j, i) != nullptr)
			{
				tool= game->getSol(j, i);
			}

		}
		
	}
	
	if (DIRECTION_SE)
	{
		size_t j = DesX - 1;
		for (size_t i = DesY + 1; i < BOARDSIZE || j > 0 ; i++, j--)
		{
			if (game->getSol(j, i) != nullptr)
			{
				tool= game->getSol(j, i);
			}

		}
	}
	if (DIRECTION_SW)
	{
		size_t j = DesX - 1;
		for (size_t i = DesY - 1; i > 0 || j > 0; i--, j--)
		{
			if (game->getSol(j, i) != nullptr)
			{
				tool= game->getSol(j, i);
			}

		}
	}

	if (DIRECTION_NW)
	{
		size_t j = DesX + 1;
		for (size_t i = DesY - 1; i >0 || BOARDSIZE; i--, j++)
		{
			if (game->getSol(j, i) != nullptr)
			{
				tool= game->getSol(j, i);
			}

		}
	}


}

void King::Print()
{
}
