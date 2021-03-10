#pragma once
#include "BasicTool.h"
class Rook : public BasicTool
{
public:
	Rook(int LocX, int  LocY, int color) :BasicTool(LocX, LocY, color) {};
	bool MoveTo(int LocX, int LocY)
	{
		if (!(LocX == this->LocX && LocY != this->LocY) || (LocX != this->LocX && LocY == this->LocY)) {
			return false;
		}


	}


	void Print();
};

