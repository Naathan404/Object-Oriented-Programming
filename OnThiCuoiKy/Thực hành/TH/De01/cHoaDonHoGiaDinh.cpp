#include "cHoaDonHoGiaDinh.h"

cHoaDonHoGiaDinh::cHoaDonHoGiaDinh(string maKH, string tenKH, int chiSoCu, int chiSoMoi, int tienTT, cDate ngay, bool laHoNgheo)
{
	MaKH = maKH;
	TenKH = tenKH;
	fChiSoCu = chiSoCu;
	fChiSoMoi = chiSoMoi;
	iTienThanhToan = tienTT;
	cNgayPhatHanh = ngay;
	bLaHoNgheo = laHoNgheo;
	loai = HO_GIA_DINH;
}


bool cHoaDonHoGiaDinh::getLaHoNgheo() const
{
	return bLaHoNgheo;
}

void cHoaDonHoGiaDinh::setLaHoNgheo(bool laHoNgheo)
{
	bLaHoNgheo = laHoNgheo;
}

void cHoaDonHoGiaDinh::Nhap()
{
	cHoaDon::Nhap();
	cout << "Nhap trang thai ho ngheo (1: co, 0: khong): ";
	cin >> bLaHoNgheo;
	iTienThanhToan = TinhTienThanhToan();
}

void cHoaDonHoGiaDinh::Xuat() const
{
	cHoaDon::Xuat();
	cout << " | Trang thai ho ngheo: " << (bLaHoNgheo ? "Co" : "Khong");
	cout << " | So tien can thanh toan: " << iTienThanhToan;
}

int cHoaDonHoGiaDinh::TinhTienThanhToan()
{
	int iSoKhoiNuocTieuThu = fChiSoMoi - fChiSoCu;
	int iTienNuoc;
	// So nuoc tieu thu vuot muc 3
	if (iSoKhoiNuocTieuThu > 40)
	{
		iTienNuoc = 20 * 8000 + 20 * 12000 + (iSoKhoiNuocTieuThu - 40) * 18000;
	}
	// So nuoc tieu thi vuot muc 2
	else if (iSoKhoiNuocTieuThu >= 21)
	{
		iTienNuoc = 20 * 8000 + (iSoKhoiNuocTieuThu - 20) * 12000;
	}
	else
	{
		iTienNuoc = iSoKhoiNuocTieuThu * 8000;
	}
	int iTienGiam = bLaHoNgheo ? (0.1 * iTienNuoc) : 0;
	int iTienThue = 0.05 * iTienNuoc; // Thue = 5% cua tien nuoc
	return iTienNuoc + iTienThue - iTienGiam;
}
