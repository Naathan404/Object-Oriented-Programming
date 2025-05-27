// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2
#include "GDBatDongSan.h"
#include "GDDat.h"
#include "GDNhaPho.h"
#include "GDCanHoChungCu.h"
#include <vector>

#pragma once
class QuanLyGiaoDich
{
private:
	vector<GDBatDongSan*> dsGiaoDich;

public:
	void ThemGDDat();
	void ThemGDNhaPho();
	void ThemGDCanHoChungCu();
	void Nhap(int);
	int TinhTongSoGDDat() const;
	int TinhTongSoGDNhaPho() const;
	int TinhTongSoGDCanHoChungCu() const;
	int TinhTBThanhTienGDCanHoChungCu() const;
	void XuatGDNhaPhoCoThanhTienLonNhat() const;
	void XuatDSGDVaoThang(int, int) const;
};

