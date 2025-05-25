// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSachGiaoKhoa.h"

void cSachGiaoKhoa::Nhap()
{
	cSach::Nhap();
	cout << "Nhap tinh trang: ";
	cin >> sTinhTrang;
}

void cSachGiaoKhoa::Xuat() const
{
	cSach::Xuat();
	cout << " | Tinh trang: " << sTinhTrang;
	cout << endl;
}

int cSachGiaoKhoa::TinhThanhTien() const
{
	if(sTinhTrang == "moi")
		return iDonGia * iSoLuong;
	return iDonGia * iSoLuong * 0.5;
}
