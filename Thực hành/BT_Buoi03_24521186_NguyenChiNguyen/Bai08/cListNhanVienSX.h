// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cNhanVienSX.h"
#include "vector"

#pragma once
class cListNhanVienSX
{
private:
	vector<cNhanVienSX> List;

public:
	cListNhanVienSX(int = 0);

	void Nhap();
	void Xuat() const;
	cNhanVienSX TimNVLuongThapNhat() const;
	int TinhTongLuong() const;
	cNhanVienSX TimNVTuoiCaoNhat() const;
	void SapXepTheoLuong(bool);
};

