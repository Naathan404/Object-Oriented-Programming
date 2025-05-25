#pragma once
#include "HoaDonDoanhNghiep.h"
#include "HoaDonHoGiaDinh.h"
#include <vector>

class QuanLyHoaDon
{
private:
	vector<HoaDon*> list;

public:
	void ThemHoaDonDoanhNghiep();
	void ThemHoaDonHoGD();
	void Nhap(int);
	void Xuat() const;
	int TinhTongSoTienThanhToan() const;
	void XuatHoGiaDinhDungDienNhieuNhat() const;
};

