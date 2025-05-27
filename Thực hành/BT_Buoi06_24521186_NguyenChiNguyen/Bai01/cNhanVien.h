// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <string>
#include "cDate.h"
#include <iostream>
using namespace std;

#pragma once
class cNhanVien
{
protected:
	string hoTen;
	cDate ngaySinh;
	int luong;

public:
	cNhanVien(string = "", cDate = cDate(), int = 0);

	enum LOAI
	{
		MAC_DINH,
		SAN_XUAT,
		VAN_PHONG
	};

	LOAI loai;

	string getHoTen() const;
	cDate getNgaySinh() const;
	int getLuong() const;
	void setHoTen(string);
	void setNgaySinh(int, int, int);
	void setLuong(int);

	virtual void Nhap();
	virtual void Xuat() const;
	virtual int TinhLuong() = 0;
};

