// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cGiaoDichBDS.h"

cGiaoDichBDS::cGiaoDichBDS(string magd, cDate ngaygd, float dongia, float dienTich)
{
	sMaGD = magd;
	dNgayGD = ngaygd;
	fDonGia = dongia;
	fDienTich = dienTich;
}

void cGiaoDichBDS::Nhap()
{
	cout << "Nhap ma giao dich: ";
	cin >> sMaGD;
	cout << "Nhap ngay giao dich: \n";
	cin >> dNgayGD;
	cout << "Nhap don gia: ";
	cin >> fDonGia;
	cout << "Nhap dien tich: ";
	cin >> fDienTich;
}

void cGiaoDichBDS::Xuat() const
{
	cout << "Ma giao dich: " << sMaGD;
	cout << " | Ngay giao dich: " << dNgayGD;
	cout << " | Don gia: " << fDonGia << " VND";
	cout << " | Dien tich: " << fDienTich << " m2";
}