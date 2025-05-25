// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGiaoDich.h"

#pragma once
class cGiaoDichTienTe : public cGiaoDich
{
private:
	float fTiGia;
	string sLoaiTien;

public:
	float getTiGia() const { return fTiGia; }
	void setTiGia(float tiGia) { fTiGia = tiGia > 0 ? tiGia : 0; }
	string getLoaiTien() const { return sLoaiTien; }
	void setLoaiTien(string loai) { sLoaiTien = loai; }

	void Nhap();
	void Xuat() const;
	long long TinhThanhTien() const;
};

