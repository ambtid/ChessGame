#pragma once
#include "GameBoard.h"

#define DIRECTION_E ((LocX==DesX) && (LocY<DesY))
#define DIRECTION_W ((LocX==DesX) && (LocY<DesY))
#define DIRECTION_N ((LocX<DesX) && (LocY==DesY))
#define DIRECTION_S ((LocX>DesX) && (LocY==DesY))
#define DIRECTION_NW ((LocX<DesX) && (LocY==DesY))
#define DIRECTION_NE ((LocX<DesX) && (LocY<DesY))
#define DIRECTION_SE ((LocX<DesX) && (LocY<DesY))
#define DIRECTION_SW ((LocX>DesX) && (LocY<DesY))


BasicTool* sol_in_path(int LocX, int LocY, int DesX, int DesY)
{
	GameBoard* game = GameBoard::get_game_board();
	if (DIRECTION_E)
		{

			for (size_t i = LocY + 1; i < DesY; i++)
			{
				if (game->getSol(LocX, i) != nullptr)
				{
					return game->getSol(LocX, i);
				}

			}
			return nullptr;
		}


	if (DIRECTION_W)
	{
		for (size_t i = LocY - 1; i > DesY; i--)
		{
			if (game->getSol(LocX, i) != nullptr)
			{
				return game->getSol(LocX, i);
			}

		}
		return nullptr;
	}

	if (DIRECTION_N)
	{

		for (size_t i = LocX + 1; i < DesX; i++)
		{
			if (game->getSol(i, LocY) != nullptr)
			{
				return game->getSol(i, LocY);
			}

		}
		return nullptr;
	}


	if (DIRECTION_S)
	{
		for (size_t i = LocX - 1; i > DesX; i--)
		{
			if (game->getSol(i, LocY) != nullptr)
			{
				return game->getSol(i, LocY);
			}

		}
		return nullptr;
	}



	if (DIRECTION_NE)
	{
		size_t j=LocX+1;
		for (size_t i = LocY + 1; i < DesY; i++,j++)
		{
			if (game->getSol(j, i) != nullptr)
			{
				return game->getSol(j, i);
			}

		}
		return nullptr;
	}


	if (DIRECTION_SE)
	{
		size_t j = LocX -1;
		for (size_t i = LocY + 1; i < DesY; i++, j--)
		{
			if (game->getSol(j, i) != nullptr)
			{
				return game->getSol(j, i);
			}

		}
		return nullptr;
	}

	if (DIRECTION_SW)
	{
		size_t j = LocX - 1;
		for (size_t i = LocY - 1; i < DesY; i--, j--)
		{
			if (game->getSol(j, i) != nullptr)
			{
				return game->getSol(j, i);
			}

		}
		return nullptr;
	}


	if (DIRECTION_NW)
	{
		size_t j = LocX + 1;
		for (size_t i = LocY - 1; i < DesY; i--, j++)
		{
			if (game->getSol(j, i) != nullptr)
			{
				return game->getSol(j, i);
			}

		}
		return nullptr;
	}




}



