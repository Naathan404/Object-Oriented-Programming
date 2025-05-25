// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSach.h"

void cSach::Nhap()
{
	cout << "Nhap ma sach: ";
	cin >> sMaSach;
	cout << "Nhap ngay nhap: ";
	NgayNhap.Nhap();
	cout << "Nhap don gia: ";
	cin >> iDonGia;
	cout << "Nhap so luong: ";
	cin >> iSoLuong;
	cout << "Nhap ten nha xuat ban: ";
	cin.ignore();
	getline(cin, sNXB);
}

void cSach::Xuat() const
{
	cout << "Ma sach: " << sMaSach;
	cout << " | Ngay nhap: ";
	NgayNhap.Xuat();
	cout << " | Don gia: " << iDonGia;
	cout << " | So luong: " << iSoLuong;
	cout << " | NXB: " << sNXB;
}

