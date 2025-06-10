// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "NhanVien.h"
#include "LapTrinhVien.h"
#include "KiemChungVien.h"
#include <vector>

#pragma once
class QuanLyNhanVien
{
private:
	vector<NhanVien*> dsNhanVien;

public:
	void ThemLapTrinhVien();
	void ThemKiemChungVien();
	void NhapDS(int n);
	void XuatDS() const;
	int TinhLuongTrungBinhCuaCacNhanVien() const;
	void XuatDanhSachNhanVienLuongThapHonLuongTrungBinh() const;
	void XuatNhanVienCoLuongCaoNhat() const;
	void XuatNhanVienCoLuongThapNhat() const;
	void XuatLapTrinhVienCoLuongCaoNhat() const;
	void XuatKiemChungVienCoLuongThapNhat() const;
};

