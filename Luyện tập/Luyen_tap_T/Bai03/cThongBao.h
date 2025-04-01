#pragma once
#include "cSoPhuc.h"

class cThongBao
{
public:
	void XuongDong();
	void ThongBaoNhap(int);
	void ThongBaoXuat(int);
	void ThongBaoKetQuaPhepToan(char, cSoPhuc, cSoPhuc);
};

void cThongBao::XuongDong()
{
	cout << endl;
}

void cThongBao::ThongBaoNhap(int i = 0)
{
	if (i == 0)
		cout << "Nhap so phuc: \n";
	else
		cout << "Nhap so phuc thu " << i << ": \n";
}

void cThongBao::ThongBaoXuat(int i = 0)
{
	if (i == 0)
		cout << "So phuc la: ";
	else
		cout << "So phuc thu " << i << " la: ";
}

void cThongBao::ThongBaoKetQuaPhepToan(char Dau, cSoPhuc A, cSoPhuc B)
{
	cout << "(";
	A.Xuat();
	cout << ") " << Dau << " (";
	B.Xuat();
	cout << ") = ";
}

