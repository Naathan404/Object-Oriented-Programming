// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#pragma once
#include "cNhanVien.h"

class cNVSanXuat : public cNhanVien
{
private:
	int iLuongCB;
	int iSoSP;

public:
	cNVSanXuat(string = "", cDate = cDate(), int = 0, int = 0);

	int getLuongCB() const { return iLuongCB; }
	int getSoSP() const { return iSoSP; }
	void setLuongCB(int luongcb) { iLuongCB = luongcb; }
	void setSoSP(int sosp) { iSoSP = sosp; }

	void Nhap();
	void Xuat() const;
	int TinhLuong() const;
};

