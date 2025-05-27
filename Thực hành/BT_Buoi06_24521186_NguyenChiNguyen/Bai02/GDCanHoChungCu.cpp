// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "GDCanHoChungCu.h"

GDCanHoChungCu::GDCanHoChungCu(string ma, cDate ngay, int dg, int dt, string macan, int t) : GDBatDongSan(ma, ngay, dg, dt)
{
	maCan = macan;
	tang = t;
	loai = CAN_HO_CHUNG_CU;
}

string GDCanHoChungCu::getMaCan() const
{
	return maCan;
}
int GDCanHoChungCu::getTang() const
{
	return tang;
}
void GDCanHoChungCu::setMaCan(string macan)
{
	maCan = macan;
}
void GDCanHoChungCu::setTang(int t)
{
	tang = t;
}

void GDCanHoChungCu::Nhap()
{
	GDBatDongSan::Nhap();
	cin.ignore();
	cout << "Nhap ma can: ";
	getline(cin, maCan);
	cout << "Nhap tang: ";
	cin >> tang;
	thanhTien = TinhThanhTien();
}

void GDCanHoChungCu::Xuat() const
{
	GDBatDongSan::Xuat();
	cout << " | Ma can: " << maCan;
	cout << " | Tang: " << tang;
	cout << " | Thanh tien: " << thanhTien;
}

int GDCanHoChungCu::TinhThanhTien() const
{
	if (tang == 1)
		return dienTich * donGia * 2;
	if (tang >= 15)
		return dienTich * donGia * 1.2;
	return dienTich * donGia;
}