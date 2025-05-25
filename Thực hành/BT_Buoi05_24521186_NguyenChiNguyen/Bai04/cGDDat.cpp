// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGDDat.h"

cGDDat::cGDDat(string maGD, cDate ngayGD, float donGia, float dienTich, char loaiDat) : cGiaoDichBDS(maGD, ngayGD, donGia, dienTich)
{
	LoaiDat = loaiDat;
}

void cGDDat::Nhap()
{
	cGiaoDichBDS::Nhap();
	cout << "Nhap loai dat (A/B/C): ";
	cin >> LoaiDat;
}

void cGDDat::Xuat() const
{
	cGiaoDichBDS::Xuat();
	cout << " | Loai dat: " << LoaiDat;
	cout << endl;
}

float cGDDat::TinhThanhTien() const
{
	if (LoaiDat == 'A')
		return fDienTich * fDonGia * 1.5;
	return fDienTich * fDonGia;
}
