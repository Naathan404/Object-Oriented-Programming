#include "arrPhanSo.h"
#include <ctime>
#include <iostream>
using namespace std;

arrPhanSo::arrPhanSo()
{
	size = 0;
	arr = nullptr;
}

arrPhanSo::arrPhanSo(int n)
{
	size = n;
	arr = new cPhanSo[n];
}

arrPhanSo::~arrPhanSo()
{
	delete[] arr;
}

cPhanSo arrPhanSo::getPhanSo(int x)
{
	return arr[x];
}

void arrPhanSo::Nhap(int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i].Nhap();
	}
}

void arrPhanSo::Xuat()
{
	for (int i = 0; i < size; i++)
	{
		arr[i].Xuat();
		cout << endl;
	}
}

void arrPhanSo::TaoMangNgauNhien(int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i].setTuSo(rand() % 190 - 90);
		arr[i].setMauSo(rand() % 1000);
		while(arr[i].getMauSo() == 0)
			arr[i].setMauSo(rand() % 1000);
	}
}
cPhanSo arrPhanSo::TimPhanSoLonNhat()
{
	cPhanSo KQ = arr[0];
	float maxVal = (float)arr[0].getTuSo() / arr[0].getMauSo();
	for (int i = 1; i < size; ++i)
	{
		float temp = (float)arr[i].getTuSo() / arr[i].getMauSo();
		if (temp > maxVal)
		{
			maxVal = temp;
			KQ = arr[i];
		}
	}
	return KQ;
}