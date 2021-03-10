#pragma once
#include "Directions.h"
#include "BasicTool.h"
#include "GameBoard.h"
class Queen : public BasicTool
{
public:
	Queen(int LocX, int  LocY, int color) :BasicTool(LocX, LocY, color) {};
	bool MoveTo(int Locx, int LocY);
	bool if_the_path_clear(int LocX, int LocY);
	void  Print();
};

