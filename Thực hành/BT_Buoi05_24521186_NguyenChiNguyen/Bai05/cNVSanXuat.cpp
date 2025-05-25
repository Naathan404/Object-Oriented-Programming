// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cNVSanXuat.h"

cNVSanXuat::cNVSanXuat(string hoTen, cDate ngaySinh, int luongCB, int soSP) : cNhanVien(hoTen, ngaySinh)
{
	iLuongCB = luongCB;
	iSoSP = soSP;
}

void cNVSanXuat::Nhap()
{
	cNhanVien::Nhap();
	cout << "Nhap luong co ban: ";
	cin >> iLuongCB;
	cout << "Nhap so san pham: ";
	cin >> iSoSP;
}

void cNVSanXuat::Xuat() const
{
	cNhanVien::Xuat();
	cout << " | Luong co ban: " << iLuongCB << " VND";
	cout << " | So san pham: " << iSoSP;
	cout << endl;
}

int cNVSanXuat::TinhLuong() const
{
	return iLuongCB + iSoSP * 5000;
}