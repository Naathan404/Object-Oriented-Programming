#include "SinhVien.h"
#include "SVCaoDang.h"
#include "SVDaiHoc.h"
#include <vector>

#pragma once
class QuanLySinhVien
{
private:
	vector<SinhVien*> dsSinhVien;

public:
	void ThemSVCaoDang();
	void ThemSVDaiHoc();
	void NhapDS(int);
	void XuatDS() const;
	void XuatDSSVDuDieuKienTotNghiep() const;
	void XuatDSSVKhongDuDieuKienTotNghiep() const;
	void XuatSVDaiHocCoDTBCaoNhat() const;
	void XuatSVCaoDangCoDTBCaoNhat() const;
	int XuatSoSVDaiHocKhongDuDieuKienTotNghiep() const;
	int XuatSoSVCaoDangKhongDuDieuKienTotNghiep() const;
};

