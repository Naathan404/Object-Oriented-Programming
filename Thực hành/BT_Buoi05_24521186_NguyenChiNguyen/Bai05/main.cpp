// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyNV.h"

int main()
{
	cQuanLyNV list;
	int n, m;
	// Nhap
	cout << "Nhap so luong NV San Xuat: ";
	cin >> n;
	list.NhapDSNVSanXuat(n);
	cout << "Nhap so luong NV Van Phong: ";
	cin >> m;
	list.NhapDSNVVanPhong(m);

	// Xuat
	cout << "\nDanh sach NV San Xuat: " << endl;
	list.XuatDSNVSanXuat();
	cout << "\nDanh sach NV Van Phong: " << endl;
	list.XuatDSNVVanPhong();

	// Tinh tong luong cong ty phai tra cho tat ca nhan vien
	cout << "Tong luong cong ty phai tra cho tat ca nhan vien: " << list.TinhTongLuong() << " VND" << endl;

	return 0;
}
