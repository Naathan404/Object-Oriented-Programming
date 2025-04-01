#include "cSoPhuc.h"
#include <math.h>
#include <iomanip>

float cSoPhuc::getThuc()
{
	return fThuc;
}

float cSoPhuc::getAo()
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
	cout << "Nhap phan thuc: ";
	cin >> fThuc;
	cout << "Nhap phan ao: ";
	cin >> fAo;
}

void cSoPhuc::Xuat()
{
	if (fThuc == 0 && fAo == 0)
		cout << 0;
	else if (fThuc == 0)
		cout << setprecision(2) << fAo << "i";
	else if (fAo == 0)
		cout << fThuc;
	else
		cout << setprecision(2) << fThuc << " + " << setprecision(2) << fAo << "i";
}

float cSoPhuc::DinhGiaTri()
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