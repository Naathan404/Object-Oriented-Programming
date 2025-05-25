// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGiaoDichTienTe.h"

void cGiaoDichTienTe::Nhap()
{
	cGiaoDich::Nhap();
	cout << "Nhap ti gia: ";
	cin >> fTiGia;
	cout << "Nhap loai tien (VND/USD/Euro): ";
	cin.ignore();
	getline(cin, sLoaiTien);
}

void cGiaoDichTienTe::Xuat() const
{
	cGiaoDich::Xuat();
	cout << " | Ti gia: " << fTiGia;
	cout << " | Loai tien: " << sLoaiTien;
	cout << endl;
}

long long cGiaoDichTienTe::TinhThanhTien() const
{
	if (sLoaiTien == "VND")
		return iSoLuong * iDonGia;
	return iSoLuong * iDonGia * fTiGia;
}
