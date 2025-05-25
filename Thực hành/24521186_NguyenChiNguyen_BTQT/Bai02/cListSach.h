//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2

#include "cSachThamKhao.h"
#include "cSachGiaoKhoa.h"
#include <vector>

#pragma once
class cListSach
{
private:
	vector<cSachGiaoKhoa> ListSGK;
	vector<cSachThamKhao> ListSTK;

public: 
	cListSach(int = 0, int = 0);
	void Nhap();
	void Xuat() const;
	int TinhTongThanhTienSGK() const;
	int TinhTongThanhTienSTK() const;
	int TinhThanhTienSGKThapNhat() const;
	int TinhThanhTienSTKThapNhat() const;
	void XuatSGKCoThanhTienThapNhat() const;
	void XuatSTKCoThanhTienThapNhat() const;
	void TimSGKTheoNXB(string) const;
};

