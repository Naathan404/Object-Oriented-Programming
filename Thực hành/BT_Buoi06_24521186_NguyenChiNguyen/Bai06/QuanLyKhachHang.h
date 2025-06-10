// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "KhachHang.h"
#include "vector"

#pragma once
class QuanLyKhachHang
{
private:
	vector<KhachHang*> dsKhachHang;

public: 
	void ThemKHLoaiA(ifstream&);
	void ThemKHLoaiB(ifstream&);
	void ThemKHLoaiC(ifstream&);
	void NhapDS(int x, int y, int z, ifstream&);
	void XuatDS(ofstream&) const;
	int TinhTongSoTienThuDuoc() const;
};

