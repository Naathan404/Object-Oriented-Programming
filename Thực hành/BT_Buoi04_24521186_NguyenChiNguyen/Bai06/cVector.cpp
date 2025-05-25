// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cVector.h"

cVector::cVector(int sochieu)
{
	ToaDo.resize(sochieu);
	for (int i = 0; i < sochieu; i++)
	{
		ToaDo[i] = 0;
	}
}

void cVector::setSoChieu(int soChieu)
{
	ToaDo.resize(soChieu);
}

int cVector::size() const
{
	return ToaDo.size();
}

cVector cVector::operator+(cVector other)
{
	if ((this->ToaDo.size() != other.ToaDo.size()) || this->ToaDo.size() == 0)
		return cVector();
	cVector KQ(this->ToaDo.size());
	for (int i = 0; i < this->ToaDo.size(); i++)
	{
		KQ.ToaDo[i] = this->ToaDo[i] + other.ToaDo[i];
	}
	return KQ;
}

cVector cVector::operator-(cVector other)
{
	if ((this->ToaDo.size() != other.ToaDo.size()) || this->ToaDo.size() == 0)
		return cVector();
	cVector KQ(this->ToaDo.size());
	for (int i = 0; i < this->ToaDo.size(); i++)
	{
		KQ.ToaDo[i] = this->ToaDo[i] - other.ToaDo[i];
	}
	return KQ;
}

cVector cVector::operator*(float factor)
{
	if (this->ToaDo.size() == 0)
		return cVector();
	cVector KQ(this->ToaDo.size());
	for (int i = 0; i < this->ToaDo.size(); i++)
	{
		KQ.ToaDo[i] = this->ToaDo[i] * factor;
	}
	return KQ;
}

cVector operator*(float factor, cVector a)
{
	cVector KQ(a);
	for (int i = 0; i < a.ToaDo.size(); i++)
	{
		KQ.ToaDo[i] = a.ToaDo[i] * factor;
	}
	return KQ;
}

int cVector::operator*(cVector other)
{
	if ((this->ToaDo.size() != other.ToaDo.size()) || this->ToaDo.size() == 0)
		return 0;
	int res = 0;
	for (int i = 0; i < this->ToaDo.size(); i++)
	{
		res += (this->ToaDo[i] * other.ToaDo[i]);
	}
	return res;
}

cVector cVector::operator/(float factor)
{
	return (*this * (1.0 / factor));
}

float& cVector::operator[](int i)
{
	return ToaDo[i];
}

float cVector::operator[](int i) const
{
	return ToaDo[i];
}

istream& operator>>(istream& is, cVector& vt)
{
	if (vt.ToaDo.size() == 0)
		return is;
	for (int i = 0; i < vt.ToaDo.size(); i++)
		is >> vt.ToaDo[i];
	return is;
}

ostream& operator<<(ostream& os, const cVector& vt)
{
	os << "(";
	int n = vt.ToaDo.size();
	for (int i = 0; i < n - 1; i++)
	{
		os << vt.ToaDo[i] << ", ";
	}
	os << vt.ToaDo[n - 1] << ")";
	return os;
}
