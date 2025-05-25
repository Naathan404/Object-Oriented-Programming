// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGiaoDichBDS.h"

#pragma once
class cGDDat : public cGiaoDichBDS
{
private:
	char LoaiDat;

public:
	cGDDat(string = "", cDate = cDate(), float = 0, float = 0, char = ' ');

	char getLoaiDat() const { return LoaiDat; }
	void setLoaiDat(char loaidat) { LoaiDat = loaidat; }

	void Nhap();
	void Xuat() const;
	float TinhThanhTien() const;
};

