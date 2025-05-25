// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGDNhaPho.h"

cGDNhaPho::cGDNhaPho(string maGD, cDate ngayGD, float donGia, float dienTich, string loaiNha, string diaChi) : cGiaoDichBDS(maGD, ngayGD, donGia, dienTich)
{
	sLoaiNha = loaiNha;
	sDiaChi = diaChi;
}

void cGDNhaPho::Nhap()
{
	cGiaoDichBDS::Nhap();
	cout << "Nhap loai nha (cao cap/thuong): ";
	cin.ignore();
	getline(cin, sLoaiNha);
	cout << "Nhap dia chi: ";
	getline(cin, sDiaChi);
}

void cGDNhaPho::Xuat()
{
	cGiaoDichBDS::Xuat();
	cout << " | Loai nha: " << sLoaiNha;
	cout << " | Dia chi: " << sDiaChi;
	cout << endl;
}

float cGDNhaPho::TinhThanhTien() const
{
	if (sLoaiNha == "cao cap")
		return fDienTich * fDonGia;
	return fDienTich * fDonGia * 0.9;
}

