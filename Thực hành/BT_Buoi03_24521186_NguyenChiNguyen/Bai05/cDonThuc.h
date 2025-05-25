// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
#include <math.h>

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


	void Nhap()
	{
		std::cout << "Nhap he so: ";
		std::cin >> fHeSo;
		std::cout << "Nhap so mu: ";
		std::cin >> iSoMu;
	}

	void Xuat() const
	{
		if (fHeSo == 0)
			return;
		if (iSoMu == 0)
			std::cout << fHeSo;
		else if (iSoMu == 1)
			std::cout << fHeSo << "x";
		else
			std::cout << fHeSo << "x^" << iSoMu;
	}

	float Tinh(float x) const
	{
		return fHeSo * pow(x, iSoMu);
	}
};

