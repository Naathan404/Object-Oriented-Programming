// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cNVVanPhong.h"

cNVVanPhong::cNVVanPhong(string ht, cDate ns, int l, int sn) : cNhanVien(ht, ns, l)
{
	soNgayLam = sn;
	loai = VAN_PHONG;
}

int cNVVanPhong::getSoNgayLam() const
{
	return soNgayLam;
}
void cNVVanPhong::setSoNgayLam(int sn)
{
	soNgayLam = sn;
}

void cNVVanPhong::Nhap()
{
	cNhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> soNgayLam;
	luong = TinhLuong();
}

void cNVVanPhong::Xuat() const
{
	cNhanVien::Xuat();
	cout << " | So ngay lam: " << soNgayLam;
	cout << " | Luong: " << luong;
}

int cNVVanPhong::TinhLuong()
{
	return soNgayLam * 100000;
}
