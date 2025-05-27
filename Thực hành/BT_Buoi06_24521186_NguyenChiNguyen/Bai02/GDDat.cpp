// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "GDDat.h"

GDDat::GDDat(string ma, cDate ngay, int dongia, int dientich, char loaidat) : GDBatDongSan(ma, ngay, dongia, dientich)
{
	loaiDat = loaidat;
	loai = DAT;
}

char GDDat::getLoaiDat() const
{
	return loaiDat;
}
void GDDat::setLoaiDat(char loaidat)
{
	loaiDat = loaidat;
}

void GDDat::Nhap()
{
	GDBatDongSan::Nhap();
	cout << "Nhap loai dat (A/B/C): ";
	cin >> loaiDat;
	while (loaiDat != 'A' && loaiDat != 'B' && loaiDat != 'C')
	{
		cout << "Khong hop le! Vui long nhap lai: ";
		cin >> loaiDat;
	}
	thanhTien = TinhThanhTien();
}

void GDDat::Xuat() const
{
	GDBatDongSan::Xuat();
	cout << " | Loai dat: " << loaiDat;
	cout << " | Thanh tien: " << thanhTien << endl;
}

int GDDat::TinhThanhTien() const
{
	if(loaiDat == 'A')
		return dienTich * donGia * 1.5; // Loại A có giá cao hơn
	return dienTich * donGia;
}