// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGiaoDichVang.h"

void cGiaoDichVang::Nhap()
{
	cGiaoDich::Nhap();
	cout << "Nhap loai vang: ";
	cin.ignore();
	getline(cin, sLoaiVang);
}

void cGiaoDichVang::Xuat() const
{
	cGiaoDich::Xuat();
	cout << " | Loai vang: " << sLoaiVang;
	cout << endl;
}

long long cGiaoDichVang::TinhThanhTien() const
{
	return iDonGia * iSoLuong;
}
