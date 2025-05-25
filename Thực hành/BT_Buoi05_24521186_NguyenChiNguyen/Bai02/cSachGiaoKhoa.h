// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSach.h"

#pragma once
class cSachGiaoKhoa : public cSach
{
private:
	string sTinhTrang;

public:
	string getTinhTrang() const { return sTinhTrang; }
	void setTinhTrang(string tinhtrang) { sTinhTrang = tinhtrang; }

	void Nhap();
	void Xuat() const;
	int TinhThanhTien() const;
};

