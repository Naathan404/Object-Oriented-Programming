// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "string"
#include "cDate.h"
#include "iostream"
using namespace std;

#pragma once
class cGiaoDichBDS
{
protected:
	string sMaGD;
	cDate dNgayGD;
	float fDonGia;
	float fDienTich;

public:
	cGiaoDichBDS(string = "", cDate = cDate(), float = 0, float = 0);

	string getMaGD() const { return sMaGD; }
	cDate getNgayGD() const { return dNgayGD; }
	float getDonGia() const { return fDonGia; }
	float getDienTich() const { return fDienTich; }
	void setMaGD(string magd) { sMaGD = magd; }
	void setNgayGD(cDate ngaygd) { dNgayGD = ngaygd; }
	void setDonGia(float dongia) { fDonGia = dongia; }
	void setDienTich(float dientich) { fDienTich = dientich; }

	void Nhap();
	void Xuat() const;
	float TinhThanhTien() const { return 0; }
};

