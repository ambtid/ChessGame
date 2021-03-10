#include "Queen.h"

bool Queen::MoveTo(int DesX, int DesY)
{
	
	if (!(DIRECTION_E || DIRECTION_N || DIRECTION_S || DIRECTION_W || DIRECTION_NE || DIRECTION_NW || DIRECTION_SW || DIRECTION_SE ))
	{
		return false;
	}
	if (!(sol_in_path(this->LocX, this->LocY,DesX,DesY)))
	{
		return false;
	}


	GameBoard* game = GameBoard::get_game_board();
	King* king = game->getKingGame(this->color==BLACK ? WHITE:BLACK);
	king->checkThreat(this->LocX, this->LocY);

	King* king = game->getKingGame(this->color);


	if(sol_in_path(DesX,DesY,king->LocX,king->LocY))
	{

		game -> threatState == true;
		game -> threatTool == this;

	}



}

	
void Queen::Print()
{
}
