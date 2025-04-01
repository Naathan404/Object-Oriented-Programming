#pragma once
#include <iostream>
using namespace std;


class Temporary
{
private:
	float xPos, yPos;
public:
	Temporary(int x = 0, int y = 0) { xPos = x; yPos = y; };
	void Nhap();
	void Xuat();

	~Temporary() { cout << "huy bo!"; };
};

