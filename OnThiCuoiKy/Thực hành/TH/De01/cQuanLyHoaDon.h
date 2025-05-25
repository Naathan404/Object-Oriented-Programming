#pragma once
#include "cHoaDon.h"
#include "cHoaDonHoGiaDinh.h"
#include "cHoaDonHoKinhDoanh.h"
#include <vector>

class cQuanLyHoaDon
{
private:
	vector<cHoaDon*> DSHoaDon;

public:
	cQuanLyHoaDon() = default;

	void themHoaDonHoGiaDinh();
	void themHoaDonHoKinhDoanh();
	void nhapDSHoaDon(int);
	void xuatDSHoaDon() const;
	int TinhTongSoTienNuoc() const;
	void xuatHoKinhDoanhDungNhieuNuocNhat() const;
};