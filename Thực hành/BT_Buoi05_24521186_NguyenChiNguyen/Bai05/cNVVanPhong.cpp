// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cNVVanPhong.h"

cNVVanPhong::cNVVanPhong(string hoTen, cDate ngaySinh, int soNgayLam) : cNhanVien(hoTen, ngaySinh)
{
	iSoNgayLamViec = soNgayLam;
}

void cNVVanPhong::Nhap()
{
	cNhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> iSoNgayLamViec;
}

void cNVVanPhong::Xuat() const
{
	cNhanVien::Xuat();
	cout << " | So ngay lam viec: " << iSoNgayLamViec;
	cout << endl;
}

int cNVVanPhong::TinhLuong() const
{
	return iSoNgayLamViec * 100000;
}
