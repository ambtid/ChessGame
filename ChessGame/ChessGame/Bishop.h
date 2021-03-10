#pragma once
#include "BasicTool.h"
class Bishop : public BasicTool
{
public:
	Bishop(int LocX, int  LocY, int color) :BasicTool(LocX, LocY, color) {};
	bool MoveTo(int LocX, int LocY) 
	{
		if (!(abs(LocX - this->LocX) == abs(LocY - this->LocY))) 
		{
			return false;
		}


	}
	void  Print();
};

