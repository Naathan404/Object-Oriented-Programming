// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSachThamKhao.h"

void cSachThamKhao::Nhap()
{
	cSach::Nhap();
	cout << "Nhap thue: ";
	cin >> iThue;
}

void cSachThamKhao::Xuat() const
{
	cSach::Xuat();
	cout << " | Thue: " << iThue;
	cout << endl;
}

int cSachThamKhao::TinhThanhTien() const
{
	return iDonGia * iSoLuong + iThue;
}
