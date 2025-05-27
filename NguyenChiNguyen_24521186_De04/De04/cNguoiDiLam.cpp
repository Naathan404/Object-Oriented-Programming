// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cNguoiDiLam.h"

cNguoiDiLam::cNguoiDiLam(string ma, string ten, cDate ns, unsigned char khoa, int sobuoihoc, string noilam) : cHocVien(ma, ten, ns, khoa, sobuoihoc)
{
	noiLamViec = noilam;
	loai = NGUOI_DI_LAM;
}

string cNguoiDiLam::getNoiLamViec() const
{
	return noiLamViec;
}
void cNguoiDiLam::setNoiLamViec(string noilam)
{
	noiLamViec = noilam;
}

void cNguoiDiLam::Nhap()
{
	cHocVien::Nhap();
	cout << "Nhap noi lam viec: ";
	cin.ignore();
	getline(cin, noiLamViec);
	hocPhi = TinhHocPhi();
}

void cNguoiDiLam::Xuat() const
{
	cHocVien::Xuat();
	cout << " | Noi lam viec: " << noiLamViec;
	cout << " | Hoc phi: " << hocPhi << " VND";
}

int cNguoiDiLam::TinhHocPhi() const
{
	int hp = 0;
	if (khoaHoc == '1')
		hp += tongSoBuoiHoc * 80000;
	else if (khoaHoc == '2')
		hp += tongSoBuoiHoc * 120000;
	else if (khoaHoc == '3')
		hp += tongSoBuoiHoc * 100000;
	if (tongSoBuoiHoc > 100)
		return hp * 0.95;
	return hp;
}