#pragma once
#include <iostream>
using namespace std;

class cSoPhuc
{
private: 
	float fThuc, fAo;

public:
	// Ham thiet lap
	cSoPhuc(float thuc = 0, float ao = 0) { fThuc = thuc; fAo = ao; }

	// Ham set/get
	float getThuc();
	float getAo();
	void setThuc(float);
	void setAo(float);

	// Cac ham thanh phan
	void Nhap();
	void Xuat();
	float DinhGiaTri();
	cSoPhuc Cong(cSoPhuc);
	cSoPhuc Tru(cSoPhuc);
	cSoPhuc Nhan(cSoPhuc);
	cSoPhuc Chia(cSoPhuc);
};

