#pragma once
#include "HoaDon.h"
class HoaDonDoanhNghiep : public HoaDon
{
private:
	unsigned char LinhVucKinhDoanh; // 0: nha hang ks, 1: tu nha, 2: nha nuoc

public:
	HoaDonDoanhNghiep() : HoaDon(), LinhVucKinhDoanh(0) { loai = DOANH_NGHIEP; }
	HoaDonDoanhNghiep(string, string, string, int, int, int, cDate, unsigned char);

	unsigned char getLinhVucKinhDoanh() const;
	void setLinhVucKinhDoanh(unsigned char);

	void Nhap() override;
	void Xuat() const override;
	int TinhTienDien() override;
};

