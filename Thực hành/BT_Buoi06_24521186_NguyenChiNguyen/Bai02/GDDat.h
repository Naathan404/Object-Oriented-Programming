// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "GDBatDongSan.h"
class GDDat : public GDBatDongSan
{
private:
	char loaiDat; // A - B - C

public:
	GDDat(string = "", cDate = cDate(), int = 0, int = 0, char = 'A');

	char getLoaiDat() const;
	void setLoaiDat(char);

	void Nhap() override;
	void Xuat() const override;
	int TinhThanhTien() const override;
};

