// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
#include <math.h>
using namespace std;

#pragma once
class cDonThuc
{
private:
	float fHeSo;
	int iSoMu;

public:
	cDonThuc(float heSo = 0, int soMu = 0) : fHeSo(heSo), iSoMu(soMu) {}

	float getHeSo() const { return fHeSo; };
	int getSoMu() const { return iSoMu; };
	void setHeSo(float heSo) { fHeSo = heSo; };
	void setSoMu(int soMu) { iSoMu = soMu; };

	friend istream& operator>>(istream& is, cDonThuc& dt)
	{
		cout << "Nhap he so: ";
		is >> dt.fHeSo;
		cout << "Nhap so mu: ";
		is >> dt.iSoMu;
		return is;
	}

	friend ostream& operator<<(ostream& os, cDonThuc dt)
	{
		if (dt.fHeSo == 0)
			os << 0;
		if (dt.iSoMu == 0)
			os << dt.fHeSo;
		else if (dt.iSoMu == 1)
		{
			if(dt.fHeSo == 1)
				os << "x";
			else
				os << dt.fHeSo << "x";
		}
		else
		{
			if (dt.fHeSo == 1)
				os << "x^" << dt.iSoMu;
			else
				os << dt.fHeSo << "x^" << dt.iSoMu;
		}
			
		return os;
	}

	float Tinh(float x) const
	{
		return fHeSo * pow(x, iSoMu);
	}
};

