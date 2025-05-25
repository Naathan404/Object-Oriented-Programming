// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cListNhanVienVP.h"
#include "iostream"


int main()
{
	cListNhanVienVP ds;
	ds.Nhap();
	cout << "DANH SACH NHAN VIEN VAN PHONG CUA CONG TY";
	ds.Xuat();
	cout << "\n## Nhan vien VP co luong cao nhat la: ";
	ds.TimNVLuongCaoNhat().Xuat();
	locale formatCu = cout.getloc();
	cout.imbue(locale(""));
	cout << "\n## Tong luong ma cong ty phai tra: " << ds.TinhTongLuong();
	cout.imbue(formatCu);
	cout << "\n## Nhan vien lon tuoi nhat la: ";
	ds.TimNVTuoiCaoNhat().Xuat();
	cout << "\nDANH SACH NHAN VIEN TANG DAN THEO LUONG";
	ds.SapXepTheoLuong(true);
	ds.Xuat();

	return 0;
}