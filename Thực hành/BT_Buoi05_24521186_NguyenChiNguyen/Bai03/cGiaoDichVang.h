// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGiaoDich.h"

#pragma once
class cGiaoDichVang : public cGiaoDich
{
private:
	string sLoaiVang;
	
public:
	string getLoaiVang() const { return sLoaiVang; }
	void setLoaiVang(string loai) { sLoaiVang = loai; }

	void Nhap();
	void Xuat() const;
	long long TinhThanhTien() const;
};

