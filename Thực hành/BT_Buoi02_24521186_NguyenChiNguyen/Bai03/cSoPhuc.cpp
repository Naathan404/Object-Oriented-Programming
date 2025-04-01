// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cSoPhuc.h"
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

cSoPhuc::cSoPhuc()
{
	fThuc = 0;
	fAo = 0;
}

cSoPhuc::cSoPhuc(float thuc, float ao)
{
	fThuc = thuc;
	fAo = ao;
}

float cSoPhuc::getThuc() const
{
	return fThuc;
}

float cSoPhuc::getAo() const
{
	return fAo;
}

void cSoPhuc::setThuc(float thuc)
{
	fThuc = thuc;
}

void cSoPhuc::setAo(float ao)
{
	fAo = ao;
}

void cSoPhuc::Nhap()
{
	cin >> fThuc >> fAo;
}

void cSoPhuc::Xuat() const
{
	if (fThuc == 0 && fAo == 0)
	{
		cout << 0;
		return;
	}
	else if (fAo == 0)
	{
		cout << setprecision(3) << fThuc;
		return;
	}
	if (fAo == 1)
	{
		if (fThuc == 0)
		cout << setprecision(3) << "i";
		else
		cout << setprecision(3) << fThuc << " + " << setprecision(3) << "i";
		return;
	}
	if (fAo == -1)
	{
		if (fThuc == 0)
			cout << setprecision(3) << "-i";
		else
			cout << setprecision(3) << fThuc << " + " << setprecision(3) << "-i";
		return;
	}
	if (fThuc == 0)
		cout << setprecision(3) << fAo << "i";
	else
		cout << setprecision(3) << fThuc << " + " << setprecision(3) << fAo << "i";
}

float cSoPhuc::DinhGiaTri() const
{
	return sqrt(fThuc * fThuc + fAo * fAo);
}

cSoPhuc cSoPhuc::Cong(cSoPhuc B)
{
	return cSoPhuc(this->fThuc + B.fThuc, this->fAo + B.fAo);
}

cSoPhuc cSoPhuc::Tru(cSoPhuc B)
{
	return cSoPhuc(this->fThuc - B.fThuc, this->fAo - B.fAo);
}

cSoPhuc cSoPhuc::Nhan(cSoPhuc B)
{
	return cSoPhuc(this->fThuc * B.fThuc - this->fAo * B.fAo, this->fThuc * B.fAo + this->fAo * B.fThuc);
}

cSoPhuc cSoPhuc::Chia(cSoPhuc B)
{
	
	float Thuc = (this->fThuc * B.fThuc + this->fAo * B.fAo) / (B.fThuc * B.fThuc + B.fAo * B.fAo);
	float Ao = (B.fThuc * this->fAo - this->fThuc * B.fAo) / (B.fThuc * B.fThuc + B.fAo * B.fAo);
	return cSoPhuc(Thuc, Ao);
}