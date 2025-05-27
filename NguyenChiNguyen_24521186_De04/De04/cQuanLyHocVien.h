// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cHocSinhSinhVien.h"
#include "cNguoiDiLam.h"
#include <vector>

#pragma once
class cQuanLyHocVien
{
private:
	vector<cHocVien*> danhSachHocVien;

public:
	void ThemHVHocSinhSinhVien();
	void ThemHVNguoiDiLam();
	void NhapDanhSachHocVien(int);
	void XuatDanhSachHocVien() const;
	int TinhTongHocPhi() const;
	void TimKhoaHocNhieuHocVienDangKyNhat() const;
	void XuatHocVienNguoiDiLamDongHocPhiNhieuNhat() const;
};

