#pragma once
#include "cHoaDon.h"

class cHoaDonHoGiaDinh : public cHoaDon
{
private:
	bool bLaHoNgheo; // 1: Co , 0: Khong

public:
	cHoaDonHoGiaDinh() : cHoaDon(), bLaHoNgheo(false) { loai = HO_GIA_DINH; }
	cHoaDonHoGiaDinh(string, string, int, int, int, cDate, bool);
	bool getLaHoNgheo() const;
	void setLaHoNgheo(bool);
	void Nhap() override;
	void Xuat() const override;
	int TinhTienThanhToan() override;
};