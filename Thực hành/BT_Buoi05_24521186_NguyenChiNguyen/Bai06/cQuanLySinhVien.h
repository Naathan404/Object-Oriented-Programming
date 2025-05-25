// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSVCaoDang.h"
#include "cSVDaiHoc.h"
#include <vector>

#pragma once
class cQuanLySinhVien
{
private:
	vector<cSVCaoDang> List_SVCaoDang;
	vector<cSVDaiHoc> List_SVDaiHoc;

public:
	void NhapDSSVCaoDang(int n);
	void NhapDSSVDaiHoc(int n);
	void XuatDSSVCaoDang() const;
	void XuatDSSVDaiHoc() const;
	
	void XuatDSSVDuDieuKienTotNghiep() const;
	void XuatDSSVKhongDuDieuKienTotNghiep() const;

	void XuatSVDaiHocCoDiemTBCaoNhat() const;
};

