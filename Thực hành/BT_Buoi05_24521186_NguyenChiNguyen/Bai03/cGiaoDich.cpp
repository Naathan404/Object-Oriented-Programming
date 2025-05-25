// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGiaoDich.h"

void cGiaoDich::Nhap()
{
	cout << "Nhap ma giao dich: ";
	cin >> sMaGD;
	getline(cin, sMaGD);
	cout << "Nhap ngay giao dich: ";
	NgayGD.Nhap();
	cout << "Nhap don gia: ";
	cin >> iDonGia;
	cout << "Nhap so luong: ";
	cin >> iSoLuong;
}

void cGiaoDich::Xuat() const
{
	cout << "Ma giao dich: " << sMaGD;
	cout << " | Ngay giao dich: ";
	NgayGD.Xuat();
	cout << " | Don gia: " << iDonGia;
	cout << " | So luong: " << iSoLuong;
}