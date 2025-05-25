#include "cHoaDon.h"

#include "cHoaDon.h"

cHoaDon::cHoaDon(string maKH, string tenKH, int chiSoCu, int chiSoMoi, int tienTT, cDate ngay)
{
	MaKH = maKH;
	TenKH = tenKH;
	fChiSoCu = chiSoCu;
	fChiSoMoi = chiSoMoi;
	iTienThanhToan = tienTT;
	cNgayPhatHanh = ngay;
	loai = MAC_DINH;
}

string cHoaDon::getMaKH() const
{
	return MaKH;
}

string cHoaDon::getTenKH() const
{
	return TenKH;
}

int cHoaDon::getChiSoCu() const
{
	return fChiSoCu;
}

int cHoaDon::getChiSoMoi() const
{
	return fChiSoMoi;
}

int cHoaDon::getTienThanhToan() const
{
	return iTienThanhToan;
}

cDate cHoaDon::getNgayPhatHanh() const
{
	return cNgayPhatHanh;
}

void cHoaDon::setMaKH(string maKH)
{
	MaKH = maKH;
}

void cHoaDon::setTenKH(string tenKH)
{
	TenKH = tenKH;
}

void cHoaDon::setChiSoCu(int chiSoCu)
{
	fChiSoCu = chiSoCu;
}

void cHoaDon::setChiSoMoi(int chiSoMoi)
{
	fChiSoMoi = chiSoMoi;
}

void cHoaDon::setTienThanhToan(int tienTT)
{
	iTienThanhToan = tienTT;
}	

void cHoaDon::setNgayPhatHanh(int d, int m, int y)
{
	cNgayPhatHanh.setNgay(d);
	cNgayPhatHanh.setThang(m);
	cNgayPhatHanh.setNam(y);
}

void cHoaDon::Nhap()
{
	cout << "Nhap ma khach hang: ";
	cin.ignore();
	getline(cin, MaKH);
	cout << "Nhap ten khach hang: ";
	getline(cin, TenKH);
	cout << "Nhap chi so dong ho nuoc ky truoc: ";
	cin >> fChiSoCu;
	while (fChiSoCu < 0)
	{
		cout << "Chi so khong hop le! Vui long nhap lai: ";
		cin >> fChiSoCu;
	}
	cout << "Nhap chi so dong ho nuoc hien tai: ";
	cin >> fChiSoMoi;
	while (fChiSoMoi < fChiSoCu)
	{
		cout << "Chi so khong hop le! Vui long nhap lai: ";
		cin >> fChiSoMoi;
	}
	cout << "Nhap ngay phat hanh hoa don (dd mm yyyy): ";
	cNgayPhatHanh.Nhap();
}

void cHoaDon::Xuat() const
{
	cout << "Ma KH: " << MaKH;
	cout << " | Ten KH: " << TenKH;
	cout << " | Chi so ky truoc: " << fChiSoCu;
	cout << " | Chi so hien tai: " << fChiSoMoi;
	cout << " | Ngay phat hanh: ";
	cNgayPhatHanh.Xuat();
}

int cHoaDon::TinhSoNuocSuDung() const
{
	return fChiSoMoi - fChiSoCu;
}
