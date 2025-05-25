#include "HoaDonHoGiaDinh.h"

HoaDonHoGiaDinh::HoaDonHoGiaDinh(string ma, string ten, string diachi, int sokytruoc, int sohientai, int tientt, cDate ngay, bool hongheo)
{ 
	maKH = ma;
	tenKH = ten;
	diaChi = diachi;
	chiSoDienKyTruoc = sokytruoc;
	chiSoDienHienTai = sohientai;
	soTienThanhToan = tientt;
	laHoNgheo = hongheo;
	this->ngay = ngay;
	loai = HO_GIA_DINH;
}

bool HoaDonHoGiaDinh::getLaHoNgheo() const { return laHoNgheo; }
void HoaDonHoGiaDinh::setLaHoNgheo(bool hongheo) { laHoNgheo = hongheo; }

void HoaDonHoGiaDinh::Nhap()
{
	HoaDon::Nhap();
	cout << "Co la ho ngheo khong? (1: Co, 0: Khong): ";
	cin >> laHoNgheo;
	soTienThanhToan = TinhTienDien();
}

void HoaDonHoGiaDinh::Xuat() const
{
	HoaDon::Xuat();
	cout << " | Tinh trang ho ngheo: " << (laHoNgheo ? "Co" : "Khong");
	cout << " | So tien thanh toan: " << soTienThanhToan;
}

int HoaDonHoGiaDinh::TinhTienDien()
{
	int soTieuThu = TinhSoDienTieuThu();
	int tienDien = 0;
	if (soTieuThu > 100)
	{
		tienDien = 2500 * 50 + 3000 * 50 + (soTieuThu - 100) * 3500;
	}
	else if (soTieuThu > 50)
	{
		tienDien = 2500 * 50 + (soTieuThu - 50) * 3000;
	}
	else
	{
		tienDien = soTieuThu * 2500;
	}
	int tienThue = 0.1 * tienDien;
	int tienGiam = (laHoNgheo ? (0.1 * tienDien) : 0);
	return tienDien + tienThue - tienGiam;
}