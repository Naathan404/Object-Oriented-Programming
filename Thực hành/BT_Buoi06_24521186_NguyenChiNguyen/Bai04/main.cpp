// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "QuanLyNhanVien.h"

int main()
{
	QuanLyNhanVien list;
	cout << "Nhap so nhan vien can quan ly: ";
	int n; cin >> n;
	list.NhapDS(n);
	cout << "\nDanh sach cac nhan vien cua cong ty: \n";
	list.XuatDS();
	cout << "\nDanh sach cac nhan vien co luong thap hon trung binh: \n";
	list.XuatDanhSachNhanVienLuongThapHonLuongTrungBinh();
	cout << "\nThong tin cac nhan vien co muc luong cao nhat: \n";
	list.XuatNhanVienCoLuongCaoNhat();
	cout << "\nThong tin cac nhan vien co muc luong thap nhat: \n";
	list.XuatNhanVienCoLuongThapNhat();
	cout << "\nThong tin lap trinh vien co luong cao nhat: \n";
	list.XuatLapTrinhVienCoLuongCaoNhat();
	cout << "\nThong tin kiem chung vien co luong thap nhat: \n";
	list.XuatKiemChungVienCoLuongThapNhat();
	return 0;
}