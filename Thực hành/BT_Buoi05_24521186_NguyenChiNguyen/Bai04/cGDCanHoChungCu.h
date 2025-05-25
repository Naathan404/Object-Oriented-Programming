// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "cGiaoDichBDS.h"
class cGDCanHoChungCu : public cGiaoDichBDS
{
private:
	string sMaCan;
	int iTang;

public:
	cGDCanHoChungCu(string = "", cDate = cDate(), float = 0, float = 0,  string = "", int = 0);

	string getMaCan() const { return sMaCan; }
	void setMaCan(string macan) { sMaCan = macan; }
	int getTang() const { return iTang; }
	void setTang(int tang) { iTang = tang; }

	void Nhap();
	void Xuat() const;
	float TinhThanhTien() const;
};

