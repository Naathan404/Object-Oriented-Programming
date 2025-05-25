#pragma once
#include "HoaDon.h"
class HoaDonHoGiaDinh : public HoaDon
{
private:
	bool laHoNgheo; // 1: Co, 0: Khong

public: 
	HoaDonHoGiaDinh() : HoaDon(), laHoNgheo(false) { loai = HO_GIA_DINH; }
	HoaDonHoGiaDinh(string, string, string, int, int, int, cDate, bool);

	bool getLaHoNgheo() const;
	void setLaHoNgheo(bool);

	void Nhap() override;
	void Xuat() const override;
	int TinhTienDien() override;
};

