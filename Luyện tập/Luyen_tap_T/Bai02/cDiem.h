#pragma once
#include <iostream>
using namespace std;

class cDiem
{
private:
	float fHoanhDo, fTungDo;

public:
	// Ham thiet lap
	cDiem(float x = 0, float y = 0) { fHoanhDo = x; fTungDo = y; }
	
	// Ham get/set
	void setHoangDo(float);
	void setTungDo(float);
	float getHoanhDo();
	float getTungDo();

	// Ham thanh phan
	void Nhap();
	void Xuat();
	void TinhTien(float, float);
};

