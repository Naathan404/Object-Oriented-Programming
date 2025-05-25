// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cPhanSo.h"
#include <iostream>
using namespace std;

 // Constructor
cPhanSo::cPhanSo(int tu, int mau)
{
	iTuSo = tu;
	iMauSo = mau;
}

// Gets/sets
int cPhanSo::GetTu() const
{
	return iTuSo;
}

int cPhanSo::GetMau() const
{ 
	return iMauSo;
}

void cPhanSo::SetTu(int tu)
{
	iTuSo = tu;
}

void cPhanSo::SetMau(int mau)
{
	iMauSo = mau;
}

void cPhanSo::Nhap()
{
	cin >> iTuSo;
	cin >> iMauSo;
	while (iMauSo == 0)
	{
		cout << "Mau so khong hop le! Nhap lai: ";
		cin >> iTuSo;
		cin >> iMauSo;
	}
}

void cPhanSo::Xuat() const
{
	/*if (iTuSo % iMauSo == 0)
	{
		cout << iTuSo / iMauSo;
		return;
	}*/
	if (iMauSo < 0)
	{
		cout << iTuSo * -1 << "/" << iMauSo * -1;
		return;
	}
	cout << iTuSo  << "/" << iMauSo;
}

int GCD(int a, int b)
{
	if (a == 0)
		return b;
	return GCD(b % a, a);
}

cPhanSo cPhanSo::RutGon()
{
	int gcdValue = GCD(iTuSo, iMauSo);
	return cPhanSo(iTuSo / gcdValue, iMauSo / gcdValue);
}

// Operators
cPhanSo operator+(cPhanSo self, cPhanSo other)
{
	return cPhanSo(self.iTuSo * other.iMauSo + self.iMauSo * other.iTuSo, self.iMauSo * other.iMauSo);
}

cPhanSo operator-(cPhanSo self, cPhanSo other)
{
	return cPhanSo(self.iTuSo * other.iMauSo - self.iMauSo * other.iTuSo, self.iMauSo * other.iMauSo);
}

cPhanSo operator*(cPhanSo self, cPhanSo other)
{
	return cPhanSo(self.iTuSo * other.iTuSo, self.iMauSo * other.iMauSo);
}

cPhanSo operator/(cPhanSo self, cPhanSo other)
{
	return cPhanSo(self.iTuSo * other.iMauSo, self.iMauSo * other.iTuSo);
}

//cPhanSo cPhanSo::Cong(cPhanSo B)
//{
//	return cPhanSo(this->iTuSo * B.iMauSo + this->iMauSo * B.iTuSo, this->iMauSo * B.iMauSo);
//}

//cPhanSo cPhanSo::Tru(cPhanSo B)
//{
//	return cPhanSo(this->iTuSo * B.iMauSo - this->iMauSo * B.iTuSo, this->iMauSo * B.iMauSo);
//}

//cPhanSo cPhanSo::Nhan(cPhanSo B)
//{
//	return cPhanSo(this->iTuSo * B.iTuSo, this->iMauSo * B.iMauSo);
//}

//cPhanSo cPhanSo::Chia(cPhanSo B)
//{
//	return cPhanSo(this->iTuSo * B.iMauSo, this->iMauSo * B.iTuSo);
//}

float cPhanSo::DinhGiaTri() const
{
	return (float)iTuSo / iMauSo;
}

void cPhanSo::operator=(int a)
{
	Set(a, 1);
}
