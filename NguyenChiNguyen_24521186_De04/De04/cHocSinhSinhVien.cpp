// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cHocSinhSinhVien.h"

cHocSinhSinhVien::cHocSinhSinhVien(string ma, string ten, cDate ns, unsigned char khoa, int sobuoihoc, string truong) : cHocVien(ma, ten, ns, khoa, sobuoihoc)
{
	tenTruong = truong;
	loai = HS_SV;
}

string cHocSinhSinhVien::getTenTruong() const
{
	return tenTruong;
}
void cHocSinhSinhVien::setTenTruong(string truong)
{
	tenTruong = truong;
}

void cHocSinhSinhVien::Nhap()
{
	cHocVien::Nhap();
	cout << "Nhap ten truong: ";
	cin.ignore();
	getline(cin, tenTruong);
	hocPhi = TinhHocPhi();
}

void cHocSinhSinhVien::Xuat() const
{
	cHocVien::Xuat();
	cout << " | Ten truong: " << tenTruong;
	cout << " | Hoc phi: " << hocPhi << " VND";
}

int cHocSinhSinhVien::TinhHocPhi() const
{
	int hp = 0;
	if (khoaHoc == '1')
		hp += tongSoBuoiHoc * 80000;	
	else if (khoaHoc == '2')
		hp += tongSoBuoiHoc * 120000;
	else if (khoaHoc == '3')
		hp += tongSoBuoiHoc * 100000;
	return hp * 0.9;
}