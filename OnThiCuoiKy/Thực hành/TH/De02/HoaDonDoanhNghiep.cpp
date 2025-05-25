#include "HoaDonDoanhNghiep.h"


HoaDonDoanhNghiep::HoaDonDoanhNghiep(string ma, string ten, string diachi, int sokytruoc, int sohientai, int tientt, cDate ngay, unsigned char linhvuc)
{
	maKH = ma;
	tenKH = ten;
	diaChi = diachi;
	chiSoDienKyTruoc = sokytruoc;
	chiSoDienHienTai = sohientai;
	soTienThanhToan = tientt;
	LinhVucKinhDoanh = linhvuc;
	this->ngay = ngay;
	loai = DOANH_NGHIEP;
}

unsigned char HoaDonDoanhNghiep::getLinhVucKinhDoanh() const { return LinhVucKinhDoanh; }
void HoaDonDoanhNghiep::setLinhVucKinhDoanh(unsigned char linhvuc) { LinhVucKinhDoanh = linhvuc; }

void HoaDonDoanhNghiep::Nhap()
{
	HoaDon::Nhap();
	cout << "Nhap linh vuc kinh doanh (0: Nha hang khach san, 1: Tu nhan, 2: Nha nuoc): ";
	cin >> LinhVucKinhDoanh;
	soTienThanhToan = TinhTienDien();
}

void HoaDonDoanhNghiep::Xuat() const
{
	HoaDon::Xuat();
	cout << " | Linh vuc kinh doanh: ";
	switch (LinhVucKinhDoanh)
	{
	case '0': cout << "Nha hang khach san"; break;
	case '1': cout << "Tu nhan"; break;
	case '2': cout << "Nha nuoc"; break;
	default: cout << "Khong xac dinh"; break;
	}
	cout << " | So tien thanh toan: " << soTienThanhToan;
}

int HoaDonDoanhNghiep::TinhTienDien()
{
	int tienDien = TinhSoDienTieuThu() * 3600;
	int tienThue = 0.1 * tienDien;
	int tienUuDai = (LinhVucKinhDoanh == '2' ? 0.05 * tienDien : 0);
	return tienDien + tienThue - tienUuDai;
}