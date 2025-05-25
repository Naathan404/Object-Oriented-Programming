// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSoPhuc.h"

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

istream& operator>>(istream& is, cSoPhuc& p)
{
	is >> p.fThuc >> p.fAo;
	return is;
}

ostream& operator<<(ostream& os, cSoPhuc p)
{
	if (p.fThuc == 0 && p.fAo == 0)
	{
		os << 0;
		return os;
	}
	if (p.fAo == 0)
	{
		os << p.fThuc;
		return os;
	}
	if (p.fAo == 1)
	{
		if (p.fThuc == 0)
			os << "i";
		else
			os << p.fThuc << " + i";
		return os;
	}
	if (p.fAo == -1)
	{
		if (p.fThuc == 0)
			os << "-i";
		else
			os << p.fThuc << " - i";
		return os;
	}
	if (p.fThuc == 0)
		os << p.fAo << "i";
	else
		os << p.fThuc << " + " << p.fAo << "i";
	return os;
}

cSoPhuc operator+(cSoPhuc a, cSoPhuc b)
{
	return cSoPhuc(a.fThuc + b.fThuc, a.fAo + b.fAo);
}

cSoPhuc operator-(cSoPhuc a, cSoPhuc b)
{
	return cSoPhuc(a.fThuc - b.fThuc, a.fAo - b.fAo);
}

cSoPhuc operator*(cSoPhuc a, cSoPhuc b)
{
	return cSoPhuc(a.fThuc * b.fThuc - a.fAo * b.fAo, a.fThuc * b.fAo + a.fAo * b.fThuc);
}

cSoPhuc operator/(cSoPhuc a, cSoPhuc b)
{
	float Thuc = (a.fThuc * b.fThuc + a.fAo * b.fAo) / (b.fThuc * b.fThuc + b.fAo * b.fAo);
	float Ao = (b.fThuc * a.fAo - a.fThuc * b.fAo) / (b.fThuc * b.fThuc + b.fAo * b.fAo);
	return cSoPhuc(Thuc, Ao);
}

bool operator==(cSoPhuc a, cSoPhuc b)
{
	return a.fThuc == b.fThuc && a.fAo == b.fAo;
}

bool operator!=(cSoPhuc a, cSoPhuc b)
{
	return a.fThuc != b.fThuc || a.fAo != b.fAo;
}