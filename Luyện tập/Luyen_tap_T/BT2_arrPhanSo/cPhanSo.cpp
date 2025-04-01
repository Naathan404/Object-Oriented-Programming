#include "cPhanSo.h"
#include <iostream>
using namespace std;

cPhanSo::cPhanSo()
{
	iTuSo = 0;
	iMauSo = 1;
}

cPhanSo::cPhanSo(int tu, int mau)
{
	iTuSo = tu;
	iMauSo = mau;
}

int cPhanSo::getTuSo()
{
	return iTuSo;
}

int cPhanSo::getMauSo()
{
	return iMauSo;
}

void cPhanSo::setTuSo(int tu)
{
	iTuSo = tu;
}

void cPhanSo::setMauSo(int mau)
{
	iMauSo = mau;
}

void cPhanSo::Nhap()
{
	cin >> iTuSo >> iMauSo;
}

void cPhanSo::Xuat()
{
	cout << iTuSo << "/" << iMauSo;
}