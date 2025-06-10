// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "LapTrinhVien.h"

LapTrinhVien::LapTrinhVien(string ma, string ten, string em, int age, int sdt, int lcb, float sogio)
	: NhanVien(ma, ten, em, age, sdt, lcb), soGioOvertime(sogio)
{
	loai = LOAI::CODER;
}

void LapTrinhVien::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so gio overtime: ";
	cin >> soGioOvertime;
	luong = TinhLuong();
}

void LapTrinhVien::Xuat() const
{
	NhanVien::Xuat();
	cout << "\t| So gio overtime: " << soGioOvertime;
	cout << "\t| Luong: " << luong;
}

int LapTrinhVien::TinhLuong() const
{
	return luongCB + soGioOvertime * 200000;
}

