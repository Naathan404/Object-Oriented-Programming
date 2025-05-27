// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyNV.h"

int main()
{
	cQuanLyNV list;
	int n;
	cout << "Nhap so luong nhan vien can luu tru: ";
	cin >> n;
	list.Nhap(n);
	cout << "\nDanh sach cac nhan vien cua cong ty: \n";
	list.Xuat();
	cout << "\nTong luong ma cong ty phai tra la: " << list.TinhTongLuong() << endl;
	cout << "\nNhan vien san xuat co luong thap nhat: \n";
	list.XuatNVSanXuatLuongThapNhat();
	cout << "\nNhan vien van phong lon tuoi nhat: \n";
	list.XuatNVVanPhongLonTuoiNhat();

	return 0;
}