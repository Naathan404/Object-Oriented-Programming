#pragma once
#include "cPhanSo.h"
class arrPhanSo
{
private:
	int size;
	cPhanSo* arr;

public:
	arrPhanSo();
	arrPhanSo(int);
	~arrPhanSo();

	// Get Phan so
	cPhanSo getPhanSo(int);

	// Cac ham thanh phan
	void Nhap(int);
	void Xuat();
	void TaoMangNgauNhien(int);
	cPhanSo TimPhanSoLonNhat();
};

