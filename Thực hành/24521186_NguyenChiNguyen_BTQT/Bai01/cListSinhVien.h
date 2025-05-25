//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2

#include "cSVCaoDang.h"
#include "cSVDaiHoc.h"
#include <vector>

#pragma once
class cListSinhVien
{
private:
	vector<cSVCaoDang> ListSVCaoDang;
	vector<cSVDaiHoc> ListSVDaihoc;

public:
	cListSinhVien(int = 0, int = 0);
	void Nhap();
	void Xuat() const;
	int DemSoSVDuDieuKienTotNghiep() const;
	cSVDaiHoc TimSVDaiHocDTBCaoNhat() const;
};

