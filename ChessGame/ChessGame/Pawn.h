#pragma once
#include "BasicTool.h"
#include "GameBoard.h"
class Pawn : public BasicTool
{
public:
	bool firstMove = true;
	Pawn(int LocX, int  LocY, int color) :BasicTool(LocX, LocY, color) {};
	bool MoveTo(int Locx, int LocY);
};

