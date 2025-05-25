// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cNhanVienVP.h"
#include <iostream>
#include <locale>

cNhanVienVP::cNhanVienVP(string ma, string ten, int d, int m, int y, int luong) : ngaySinh(d, m, y)
{
	sMaNV = ma;
	sName = ten;
	iLuong = luong;
}

void cNhanVienVP::Nhap()
{
	cout << "\nNhap ma nhan vien (viet lien): ";
	cin >> sMaNV;
	cin.ignore();
	cout << "Nhap ten nhan vien: ";
	getline(cin, sName);
	cout << "Nhap ngay thang nam sinh (cach nhau 1 khoang trang): ";
	ngaySinh.Nhap();
	cout << "Nhap luong (VND): ";
	cin >> iLuong;
	while (iLuong < 0)
	{
		cout << "Luong khong hop le, vui long nhap lai (VND): ";
		cin >> iLuong;
	}
}

void cNhanVienVP::Xuat() const
{
	cout << "Ma NV: " << sMaNV;
	cout << " | Ho va ten NV: " << sName;
	cout << " | Ngay sinh: "; ngaySinh.Xuat();
	locale formatCu = cout.getloc();
	cout.imbue(locale(""));
	cout << " | Luong (VND): " << iLuong << " VND";
	cout.imbue(formatCu);
}