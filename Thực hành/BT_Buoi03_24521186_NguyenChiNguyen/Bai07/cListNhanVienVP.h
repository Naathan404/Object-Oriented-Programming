// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cNhanVienVP.h"
#include "vector"

#pragma once
class cListNhanVienVP
{
private:
	vector<cNhanVienVP> List;

public:
	cListNhanVienVP(int = 0);

	void Nhap();
	void Xuat() const;
	cNhanVienVP TimNVLuongCaoNhat() const;
	int TinhTongLuong() const;
	cNhanVienVP TimNVTuoiCaoNhat() const;
	void SapXepTheoLuong(bool);
};

