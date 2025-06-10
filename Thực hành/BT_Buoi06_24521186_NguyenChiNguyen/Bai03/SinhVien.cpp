// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "SinhVien.h"

SinhVien::SinhVien(int mssv, string ten, string dc, int soTC, float dtb)
{
	MSSV = mssv;
	hoTen = ten;
	diaChi = dc;
	tongTC = soTC;
	diemTB = dtb;
	loai = MAC_DINH;
}

void SinhVien::Nhap()
{
	cout << "Nhap MSSV: ";
	cin >> MSSV;
	cin.ignore();
	cout << "Nhap ho ten: ";
	getline(cin, hoTen);
	cout << "Nhap dia chi: ";
	getline(cin, diaChi);
	cout << "Nhap tong so tin chi: ";
	cin >> tongTC;
	cout << "Nhap diem trung binh: ";
	cin >> diemTB;
}

void SinhVien::Xuat() const
{
	cout << "MSSV: " << MSSV;
	cout << " | Ho ten: " << hoTen;
	cout << " | Dia chi: " << diaChi;
	cout << " | Tong so tin chi: " << tongTC;
	cout << " | Diem trung binh: " << diemTB;

}
