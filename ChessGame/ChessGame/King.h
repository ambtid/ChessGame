#pragma once
#include "BasicTool.h"
#include "Directions.h"
class King : public BasicTool
{
public:
	King(int LocX, int  LocY, int color) :BasicTool(LocX, LocY, color) {};
	bool MoveTo(int Locx, int LocY);
	bool checkThreat(int LocX, int LocY);
	void  Print();

};

