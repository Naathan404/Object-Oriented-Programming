// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyHocVien.h"

int main()
{
	cQuanLyHocVien list;
	int n;
	cout << "Nhap so luong hoc vien can quan ly: ";
	cin >> n;
	list.NhapDanhSachHocVien(n);
	cout << "\nDanh sach cac hoc vien: \n";
	list.XuatDanhSachHocVien();
	cout << "\nTong hoc phi ma trung tam thu duoc: " << list.TinhTongHocPhi() << endl;
	list.TinhTongHocPhi();
	cout << "\nKhoa hoc co nhieu hoc vien dang ky nhat la: ";
	list.TimKhoaHocNhieuHocVienDangKyNhat();
	cout << "\nHoc vien nguoi di lam dong hoc phi nhieu nhat: \n";
	list.XuatHocVienNguoiDiLamDongHocPhiNhieuNhat();
}