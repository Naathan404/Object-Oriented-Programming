// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cChuyenXe.h"

#pragma once
class cChuyenXeNoiThanh : public cChuyenXe
{
private:
	int iSoTuyen;
	float fSoKM;

public:
	cChuyenXeNoiThanh(int = 0, string = "null", int = 0, int = 0, int = 0, float = 0);

	int getSoTuyen() const { return iSoTuyen; }
	float getSoKmDaDi() const { return fSoKM; }
	void setSoTuyen(int sotuyen) { iSoTuyen = sotuyen; }
	void setSoKmDaDi(float sokm) { fSoKM = sokm; }

	void Nhap();
	void Xuat() const;
};