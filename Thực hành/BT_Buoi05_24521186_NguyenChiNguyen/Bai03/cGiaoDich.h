// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDate.h"
#include "string"
#include "iostream"
using namespace std;

#pragma once
class cGiaoDich
{
protected:
	string sMaGD;
	cDate NgayGD;
	int iDonGia;
	int iSoLuong;

public:
	string getMaGD() const { return sMaGD; }
	cDate getNgayGD() const { return NgayGD; }
	int getDonGia() const { return iDonGia; }
	int getSoLuong() const { return iSoLuong; }
	void setMaGD(string magd) { sMaGD = magd; }
	void setNgayGD(cDate ngaygd) { NgayGD = ngaygd; }
	void setDonGia(int dongia) { iDonGia = dongia; }
	void setSoLuong(int sl) { iSoLuong = sl; }

	void Nhap();
	void Xuat() const;
	int TinhThanhTien() const { return 0; }
};

