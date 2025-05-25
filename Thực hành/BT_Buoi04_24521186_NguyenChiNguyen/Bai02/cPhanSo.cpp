// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cPhanSo.h"


// Constructor
cPhanSo::cPhanSo(int tu, int mau)
{
	iTuSo = tu;
	iMauSo = mau;
	if (iMauSo == 0)
		iMauSo = 1;
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

// Cac ham bo tro 
float cPhanSo::DinhGiaTri() const
{
	return (float)iTuSo / iMauSo;
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
istream& operator>>(istream& is, cPhanSo& p)
{
	is >> p.iTuSo >> p.iMauSo;
	while (p.iMauSo == 0)
	{
		cout << "Mau so khong hop le! Hay nhap lai mot phan so khac: ";
		is >> p.iTuSo >> p.iMauSo;
	}
	return is;
}

ostream& operator<<(ostream& os, cPhanSo p)
{
	if (p.iTuSo % p.iMauSo == 0)
		os << p.iTuSo / p.iMauSo;
	else if (p.iMauSo < 0)
		os << p.iTuSo * -1 << "/" << p.iMauSo * -1;
	else
		os << p.iTuSo << "/" << p.iMauSo;
	return os;
}

cPhanSo operator+(cPhanSo a, cPhanSo b)
{
	return cPhanSo(a.iTuSo * b.iMauSo + a.iMauSo * b.iTuSo, a.iMauSo * b.iMauSo).RutGon();
}

cPhanSo operator-(cPhanSo a, cPhanSo b)
{
	return cPhanSo(a.iTuSo * b.iMauSo - a.iMauSo * b.iTuSo, a.iMauSo * b.iMauSo).RutGon();
}

cPhanSo operator*(cPhanSo a, cPhanSo b)
{
	return cPhanSo(a.iTuSo * b.iTuSo, a.iMauSo * b.iMauSo).RutGon();
}

cPhanSo operator/(cPhanSo a, cPhanSo b)
{
	return cPhanSo(a.iTuSo * b.iMauSo, a.iMauSo * b.iTuSo).RutGon();
}

bool operator==(cPhanSo a, cPhanSo b)
{
	cPhanSo temp1 = a.RutGon(), temp2 = b.RutGon();
	return temp1.iTuSo == temp2.iTuSo && temp1.iMauSo == temp2.iMauSo;
}

bool operator>(cPhanSo a, cPhanSo b)
{
	return a.DinhGiaTri() > b.DinhGiaTri();
}

bool operator<(cPhanSo a, cPhanSo b)
{
	return a.DinhGiaTri() < b.DinhGiaTri();
}