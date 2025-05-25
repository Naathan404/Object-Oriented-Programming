// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cNhanVienSX.h"
#include <iostream>
#include <locale>

cNhanVienSX::cNhanVienSX(string ma, string ten, int d, int m, int y, int sosp, int dongia) : ngaySinh(d, m, y)
{
	sMaNV = ma;
	sName = ten;
	iSoSanPham = sosp;
	iDonGia = dongia;
	iLuong = sosp * dongia;
}

void cNhanVienSX::Nhap()
{
	cout << "\nNhap ma nhan vien (viet lien): ";
	cin >> sMaNV;
	cin.ignore();
	cout << "Nhap ten nhan vien: ";
	getline(cin, sName);
	cout << "Nhap ngay thang nam sinh (cach nhau 1 khoang trang): ";
	ngaySinh.Nhap();
	cout << "Nhap so san pham: ";
	cin >> iSoSanPham;
	while (iSoSanPham < 0)
	{
		cout << "So san pham khong hop le, vui long nhap lai: ";
		cin >> iSoSanPham;
	}
	cout << "Nhap don gia (VND): ";
	cin >> iDonGia;
	while (iDonGia < 0)
	{
		cout << "Don gia khong hop le, vui long nhap lai (VND): ";
		cin >> iDonGia;
	}
	TinhLuong();
}

void cNhanVienSX::Xuat() const
{
	cout << "Ma NV: " << sMaNV;
	cout << " | Ho va ten NV: " << sName;
	cout << " | Ngay sinh: "; ngaySinh.Xuat();
	cout << " | So san pham da gia cong: " << iSoSanPham;
	locale formatCu = cout.getloc();
	cout.imbue(locale(""));
	cout << " | Don gia mot san pham: " << iDonGia << " VND";
	cout << " | Luong (VND): " << iLuong << " VND";
	cout.imbue(formatCu);
}

void cNhanVienSX::TinhLuong()
{
	iLuong = iSoSanPham * iDonGia;
}
