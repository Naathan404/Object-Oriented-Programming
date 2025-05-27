// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "GDBatDongSan.h"

#pragma once
class GDCanHoChungCu : public GDBatDongSan
{
private:
	string maCan;
	int tang;

public:
	GDCanHoChungCu(string = "", cDate = cDate(), int = 0, int = 0, string = "", int = 0);
	string getMaCan() const;
	int getTang() const;
	void setMaCan(string);
	void setTang(int);
	void Nhap() override;
	void Xuat() const override;
	int TinhThanhTien() const override;
};

