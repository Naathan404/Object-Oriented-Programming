// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "cNhanVien.h"

class cNVSanXuat : public cNhanVien
{
private:
	int luongCoBan;
	int soSanPham;

public:
	cNVSanXuat(string = "", cDate = cDate(), int = 0, int = 0, int = 0);
	int getLuongCoBan() const;
	int getSoSanPham() const;
	void setLuongCoBan(int);
	void setSoSanPham(int);

	void Nhap() override;
	void Xuat() const override;
	int TinhLuong() override;
};

