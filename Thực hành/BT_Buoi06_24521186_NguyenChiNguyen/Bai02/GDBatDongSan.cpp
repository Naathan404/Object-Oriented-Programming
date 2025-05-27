// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "GDBatDongSan.h"

GDBatDongSan::GDBatDongSan(string ma, cDate ngay, int dongia, int dt)
{
	maGD = ma;
	ngayGD = ngay;
	donGia = dongia;
	dienTich = dt;
	thanhTien = 0;
	loai = MAC_DINH;
}

string GDBatDongSan::getMaGD() const
{
	return maGD;
}
cDate GDBatDongSan::getNgayGD() const
{
	return ngayGD;
}
int GDBatDongSan::getDonGia() const
{
	return donGia;
}
int GDBatDongSan::getDienTich() const
{
	return dienTich;
}
int GDBatDongSan::getThanhTien() const
{
	return thanhTien;
}
void GDBatDongSan::setMaGD(string ma)
{
	maGD = ma;
}	
void GDBatDongSan::setNgayGD(cDate ngay)
{
	ngayGD = ngay;
}
void GDBatDongSan::setDonGia(int dongia)
{
	donGia = dongia;
}
void GDBatDongSan::setDienTich(int dt)
{
	dienTich = dt;
}
void GDBatDongSan::setThanhTien(int tt)
{
	thanhTien = tt;
}

void GDBatDongSan::Nhap()
{
	cout << "Nhap ma giao dich: ";
	cin >> maGD;
	cout << "Nhap ngay giao dich (dd mm yy): ";
	ngayGD.Nhap();
	cout << "Nhap don gia: ";
	cin >> donGia;
	cout << "Nhap dien tich: ";
	cin >> dienTich;
}

void GDBatDongSan::Xuat() const
{
	cout << "Ma giao dich: " << maGD;
	cout << " | Ngay giao dich: ";
	ngayGD.Xuat();
	cout << " | Don gia: " << donGia << " VND";
	cout << " | Dien tich: " << dienTich << " m2";
}