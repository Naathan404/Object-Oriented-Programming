#pragma once
#include "cHoaDon.h"

class cHoaDonHoKinhDoanh : public cHoaDon
{
private:
	unsigned char LinhVucKinhDoanh; // 0: Dich vu, 1: Tu nhan, 2: Nha nuoc

public:
	cHoaDonHoKinhDoanh() : cHoaDon(), LinhVucKinhDoanh(0) { loai = HO_KINH_DOANH; };
	cHoaDonHoKinhDoanh(string, string, int, int, int, cDate, unsigned char);
	unsigned char getLinhVucKinhDoanh() const;
	void setLinhVucKinhDoanh(unsigned char);

	void Nhap() override;
	void Xuat() const override;
	int TinhTienThanhToan() override;
};