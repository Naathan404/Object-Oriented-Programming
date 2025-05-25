// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "cSinhVien.h"

class cSVCaoDang : public cSinhVien
{
private:
	float fDiemTN;

public:
	cSVCaoDang(int = 0, string = "", string = "", unsigned char = 0, float = 0.0, float = 0.0);

	float getDiemTN() const { return fDiemTN; }
	void setDiemTN(float diemtn) { fDiemTN = diemtn; }

	void Nhap();
	void Xuat() const;
	bool XetTotNghiep() const;
};

