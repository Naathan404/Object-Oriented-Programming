// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "GDNhaPho.h"

GDNhaPho::GDNhaPho(string ma, cDate nagy, int dongia, int dt, unsigned char loainha, string diachi) : GDBatDongSan(ma, nagy, dongia, dt)
{
	loaiNha = loainha;
	diaChi = diachi;
	loai = NHA_PHO;
}

unsigned char GDNhaPho::getLoaiNha() const
{
	return loaiNha;
}
void GDNhaPho::setLoaiNha(unsigned char loainha)
{
	loaiNha = loainha;
}
string GDNhaPho::getDiaChi() const
{
	return diaChi;
}
void GDNhaPho::setDiaChi(string diachi)
{
	diaChi = diachi;
}

void GDNhaPho::Nhap()
{
	GDBatDongSan::Nhap();
	cout << "Nhap loai nha (1: Thuong, 2: Cao cap): ";
	cin >> loaiNha;
	while (loaiNha < '1' || loaiNha > '2')
	{
		cout << "Khong hop le! Vui long nhap lai: ";
		cin >> loaiNha;
	}
	cin.ignore();
	cout << "Nhap dia chi: ";
	getline(cin, diaChi);
	thanhTien = TinhThanhTien();
}

void GDNhaPho::Xuat() const
{
	GDBatDongSan::Xuat();
	cout << " | Loai nha: " << (loaiNha == 1 ? "Thuong" : "Cao cap");
	cout << " | Dia chi: " << diaChi;
	cout << " | Thanh tien: " << thanhTien << endl;
}

int GDNhaPho::TinhThanhTien() const
{
	if (loaiNha == '2')
		return dienTich * donGia;
	return dienTich * donGia * 0.9;
}