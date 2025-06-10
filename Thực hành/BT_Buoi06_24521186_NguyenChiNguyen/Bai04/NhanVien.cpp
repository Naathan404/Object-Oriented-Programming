// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "NhanVien.h"

NhanVien::NhanVien(string ma, string ten, string em, int age, int sdt, int lcb)
{
	maNV = ma;
	hoTen = ten;
	email = em;
	tuoi = age;
	soDienThoai = sdt;
	luongCB = lcb;
	loai = LOAI::CODER;
	luong = 0;
}

void NhanVien::Nhap()
{
	cout << "Nhap ma nhan vien: ";
	cin >> maNV;
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap email: ";
	getline(cin, email);
	cout << "Nhap tuoi: ";
	cin >> tuoi;
	cout << "Nhap so dien thoai: ";
	cin >> soDienThoai;
	cout << "Nhap luong co ban: ";
	cin >> luongCB;
}

void NhanVien::Xuat() const
{
	cout << "Ma NV: " << maNV;
	cout << "\t| Ho ten: " << hoTen;
	cout << "\t| Email: " << email;
	cout << "\t| Tuoi: " << tuoi;
	cout << "\t| So dien thoai: " << soDienThoai;
	cout << "\t| Luong co ban: " << luongCB;
}
