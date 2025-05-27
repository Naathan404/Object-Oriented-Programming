// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "cNhanVien.h"
#include "cNVSanXuat.h"
#include "cNVVanPhong.h"
#include <vector>

class cQuanLyNV
{
private:
	vector<cNhanVien*> dsNhanVien;

public:
	void ThemNVSanXuat();
	void ThemNVVanPhong();
	void Nhap(int);
	void Xuat() const;
	int TinhTongLuong() const;
	void XuatNVSanXuatLuongThapNhat() const;
	void XuatNVVanPhongLonTuoiNhat() const;
};

