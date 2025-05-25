// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cNhanVien.h"

cNhanVien::cNhanVien(string hoTen, cDate ngaySinh)
{
	sHoTen = hoTen;
	dNgaySinh = ngaySinh;
}

void cNhanVien::Nhap()
{
	cout << "Nhap ho ten: ";
	cin.ignore();
	getline(cin, sHoTen);
	cout << "Nhap ngay sinh: \n";
	cin >> dNgaySinh;
}

void cNhanVien::Xuat() const
{
	cout << "Ho ten: " << sHoTen;
	cout << " | Ngay sinh: " << dNgaySinh;
}