// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "iostream"

static int UCLN(int a, int b)
{
	if (a == 0)
		return abs(b);
	return UCLN(b % a, a);
}

#pragma once
class cPhanSo
{
private:
	int iTuSo, iMauSo;

public:
	cPhanSo(int tu = 0, int mau = 1) { iTuSo = tu; setMauSo(mau); };

	void setTuSo(int tu)
	{
		iTuSo = tu;
	}
	void setMauSo(int mau)
	{
		if (mau == 0)
			mau = 1;
		iMauSo = mau;
	}
	int getTuSo() const
	{
		return iTuSo;
	}
	int getMauSo() const
	{
		return iMauSo;
	}

	void Nhap()
	{
		std::cin >> iTuSo >> iMauSo;
		while (iMauSo == 0)
		{
			std::cout << "Mau so khong hop le, vui long nhap lai phan so: ";
			std::cin >> iTuSo >> iMauSo;
		}
	}

	void RutGon()
	{
		int iUocChung = UCLN(iTuSo, iMauSo);
		iTuSo /= iUocChung;
		iMauSo /= iUocChung;
	}

	void Xuat() const
	{
		int iUocChung = UCLN(iTuSo, iMauSo);
		if (iTuSo % iMauSo == 0)
		{
			std::cout << iTuSo / iMauSo;
			return;
		}
		if (iMauSo < 0)
		{
			std::cout << (-1 * iTuSo) / iUocChung << "/" << (-1 * iMauSo) / iUocChung;
		}
		else
		{
			std::cout << iTuSo / iUocChung << "/" << iMauSo / iUocChung;
		}
	}

	cPhanSo Cong(cPhanSo B)
	{
		return cPhanSo(this->iTuSo * B.iMauSo + this->iMauSo * B.iTuSo, this->iMauSo * B.iMauSo);
	}

	cPhanSo Tru(cPhanSo B)
	{
		return cPhanSo(this->iTuSo * B.iMauSo - this->iMauSo * B.iTuSo, this->iMauSo * B.iMauSo);
	}

	cPhanSo Nhan(cPhanSo B)
	{
		return cPhanSo(this->iTuSo * B.iTuSo, this->iMauSo * B.iMauSo);
	}

	cPhanSo Chia(cPhanSo B)
	{
		return cPhanSo(this->iTuSo * B.iMauSo, this->iMauSo * B.iTuSo);
	}

	float DinhGiaTri() const
	{
		return (float)iTuSo / iMauSo;
	}
};
