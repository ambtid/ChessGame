#pragma once
#include <iostream>
#include <ostream>
using namespace std;
#define BLACK 0
#define WHITE 1
class BasicTool
{
public:
	BasicTool(int LocX,int LocY, int color) {
		this->LocX = LocX;
		this->LocY = LocY;
		this->color = color;
	}
	bool virtual MoveTo(int Locx, int LocY);
	const string virtual Print();
	int LocX;
	int LocY;
	int color;


};
ostream& operator<<(ostream& output,  class BasicTool& D);

