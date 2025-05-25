#include "cHoaDonHoKinhDoanh.h"

cHoaDonHoKinhDoanh::cHoaDonHoKinhDoanh(string maKH, string tenKH, int chiSoCu, int chiSoMoi, int tienTT, cDate ngay, unsigned char linhVucKinhDoanh)
{
	MaKH = maKH;
	TenKH = tenKH;
	fChiSoCu = chiSoCu;
	fChiSoMoi = chiSoMoi;
	iTienThanhToan = tienTT;
	cNgayPhatHanh = ngay;
	LinhVucKinhDoanh = linhVucKinhDoanh;
	loai = HO_KINH_DOANH;
}

unsigned char cHoaDonHoKinhDoanh::getLinhVucKinhDoanh() const { return LinhVucKinhDoanh; }

void cHoaDonHoKinhDoanh::setLinhVucKinhDoanh(unsigned char linhVucKinhDoanh) { LinhVucKinhDoanh = linhVucKinhDoanh; }

void cHoaDonHoKinhDoanh::Nhap()
{
	cHoaDon::Nhap();
	cout << "Nhap linh vuc kinh doanh (0: Dich vu, 1: Tu nhan, 2: Nha nuoc): ";
	cin >> LinhVucKinhDoanh;
	while (LinhVucKinhDoanh < '0' || LinhVucKinhDoanh > '2')
	{
		cout << "Du lieu khong hop le! Vui long nhap lai (0: Dich vu, 1: Tu nhan, 2: Nha nuoc): ";
		cin >> LinhVucKinhDoanh;
	}
	iTienThanhToan = TinhTienThanhToan();
}

void cHoaDonHoKinhDoanh::Xuat() const
{
	cHoaDon::Xuat();
	cout << " | Linh vuc kinh doanh: ";
	switch (LinhVucKinhDoanh)
	{
	case '0':
		cout << "Dich vu";
		break;
	case '1':
		cout << "Tu nhan";
		break;
	case '2':
		cout << "Nha nuoc";
		break;
	default:
		cout << "Khong xac dinh";
		break;
	}
	cout << " | So tien can thanh toan: " << iTienThanhToan;
}

int cHoaDonHoKinhDoanh::TinhTienThanhToan()
{
	int iTienNuoc = (fChiSoMoi - fChiSoCu) * 20000;
	int iTienUuDai = LinhVucKinhDoanh == '2' ? (0.05 * iTienNuoc) : 0; // Nha nuoc duoc uu dai 5%
	int iTienThue = 0.05 * iTienNuoc; // Thue = 5% cua tien nuoc
	return iTienNuoc + iTienThue - iTienUuDai;
}