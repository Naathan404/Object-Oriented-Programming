// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
#include <string>
#include "cDate.h"

#pragma once
class cNhanVien
{
protected:
	string sHoTen;
	cDate dNgaySinh;

public:
	cNhanVien(string = "", cDate = cDate());

	string getHoTen() const { return sHoTen; }
	cDate getNgaySinh() const { return dNgaySinh; }
	void setHoTen(string hoten) { sHoTen = hoten; }
	void setNgaySinh(cDate ngaysinh) { dNgaySinh = ngaysinh; }

	void Nhap();
	void Xuat() const;
	int TinhLuong() const { return 0; }
};

