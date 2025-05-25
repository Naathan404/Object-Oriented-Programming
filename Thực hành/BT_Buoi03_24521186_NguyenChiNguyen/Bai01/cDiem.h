// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "iostream"
using namespace std;


class cDiem
{
private:
	float fHoanhDo, fTungDo;

public:
	cDiem(float x = 0, float y = 0)
	{
		fHoanhDo = x;
		fTungDo = y;
	}

	void setHoanhDo(float x)
	{
		fHoanhDo = x;
	}

	void setTungDo(float y)
	{
		fTungDo = y;
	}

	float getHoanhDo() const
	{
		return fHoanhDo;
	}

	float getTungDo() const
	{
		return fTungDo;
	}

	void Nhap()
	{
		cin >> fHoanhDo >> fTungDo;
	}

	void Xuat() const
	{
		cout << "(" << fHoanhDo << ", " << fTungDo << ")";
	}

	void TinhTien(float x, float y)
	{
		fHoanhDo += x;
		fTungDo += y;
	}

	void Quay(bool TheoChieuKimDongHo)
	{
		float tempToaDo = fHoanhDo;
		if (TheoChieuKimDongHo)
		{
			fHoanhDo = fTungDo;
			fTungDo = -tempToaDo;
		}
		else
		{
			fHoanhDo = -fTungDo;
			fTungDo = tempToaDo;
		}
	}
};