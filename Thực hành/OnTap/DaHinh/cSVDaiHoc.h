// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#pragma once
#include "cSinhVien.h"

class cSVDaiHoc : public cSinhVien
{
private:
	string sTenLV;
	float fDiemLV;

public:
	cSVDaiHoc(int = 0, string = "", string = "", unsigned char = 0, float = 0.0, string = "", float = 0.0);

	string getTenLV() const { return sTenLV; }
	float getDiemLV() const { return fDiemLV; }
	void setTenLV(string tenlv) { sTenLV = tenlv; }
	void setDiemLV(float diemlv) { fDiemLV = diemlv; }

	void Nhap();
	void Xuat() const;
	bool XetTotNghiep();
};

