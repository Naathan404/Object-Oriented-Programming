#pragma once

#include <iostream>
#include <string>
#include "cDate.h"
using namespace std;

class cHoaDon
{
protected:
	string MaKH;
	string TenKH;
	int fChiSoCu, fChiSoMoi;
	int iTienThanhToan;
	cDate cNgayPhatHanh;

public:
	enum LoaiHoaDon
	{
		MAC_DINH,
		HO_GIA_DINH,
		HO_KINH_DOANH
	};

	LoaiHoaDon loai;

	// Constructors
	cHoaDon() = default;
	cHoaDon(string, string, int, int, int, cDate);

	// Getter/setter functions
	string getMaKH() const;
	string getTenKH() const;
	int getChiSoCu() const;
	int getChiSoMoi() const;
	int getTienThanhToan() const;
	cDate getNgayPhatHanh() const;
	void setMaKH(string);
	void setTenKH(string);
	void setChiSoCu(int);
	void setChiSoMoi(int);
	void setTienThanhToan(int);
	void setNgayPhatHanh(int, int, int);

	// Processing functions
	virtual void Nhap();
	virtual void Xuat() const;
	virtual int TinhTienThanhToan() = 0;
	int TinhSoNuocSuDung() const;
};