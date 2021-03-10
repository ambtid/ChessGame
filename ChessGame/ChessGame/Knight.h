#pragma once
#include "BasicTool.h"
class Knight : public BasicTool
{
public:
	Knight(int LocX, int  LocY, int color) :BasicTool(LocX, LocY, color) {};

	bool MoveTo(int LocX, int LocY) {
		if (!((abs(LocX - this->LocX) == 1 && (abs(LocX - this->LocX) == 2)) || abs(LocX - this->LocX) == 2 && (abs(LocX - this->LocX) == 1)))
		{
			return false;
		}
		

	}
	void  Print();
};

