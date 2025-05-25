// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGDCanHoChungCu.h"

cGDCanHoChungCu::cGDCanHoChungCu(string maGD, cDate ngayGD, float donGia, float dienTich, string maCan, int tang) : cGiaoDichBDS(maGD, ngayGD, donGia, dienTich)
{
	sMaCan = maCan;
	iTang = tang;
}

void cGDCanHoChungCu::Nhap()
{
	cGiaoDichBDS::Nhap();
	cout << "Nhap ma can: ";
	cin.ignore();
	getline(cin, sMaCan);
	cout << "Nhap tang: ";
	cin >> iTang;
}

void cGDCanHoChungCu::Xuat() const
{
	cGiaoDichBDS::Xuat();
	cout << " | Ma can: " << sMaCan;
	cout << " | Tang: " << iTang;
	cout << endl;
}

float cGDCanHoChungCu::TinhThanhTien() const
{
	if (iTang == 1)
		return fDienTich * fDonGia * 2;
	if (iTang >= 15)
		return fDienTich * fDonGia * 1.2;
	return fDienTich * fDonGia;
}
