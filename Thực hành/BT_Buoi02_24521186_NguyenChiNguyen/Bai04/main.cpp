// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cThoiGian.h"
#include <iostream>
using namespace std;

int main()
{
	cThoiGian Time1(1, 45, 30), Time2;

	// Minh hoa cac ham get
	cout << "Thoi gian thu nhat la: ";
	cout << Time1.getGio() << " gio " << Time1.getPhut() << " phut " << Time1.getGiay() << " giay";

	// Minh hoa ham Nhap()
	cout << "\nNhap thoi gian thu hai: " << endl;
	Time2.Nhap();

	// Minh hoa ham Xuat()
	cout << "Thoi gian thu hai la: ";
	Time2.Xuat();

	// Minh hoa ham thay doi(tang/giam) gio/phut/giay
	// Doi so am thi giam, doi so duong thi tang
	Time2.ThayDoiGio(2);
	cout << "\nThoi gian thu hai sau khi tang them 2 gio la: ";
	Time2.Xuat();
	Time2.ThayDoiPhut(30);
	cout << "\nThoi gian thu hai sau khi tang them 30 phut la: ";
	Time2.Xuat();
	Time2.ThayDoiGiay(90);
	cout << "\nThoi gian thu hai sau khi tang 90 giay la: ";
	Time2.Xuat();
	Time2.ThayDoiGiay(-90);
	Time2.ThayDoiPhut(-30);
	Time2.ThayDoiGio(-2);
	cout << "\nThoi gian thu hai luc ban dau la: ";
	Time2.Xuat();

	// Minh hoa ham set
	Time2.setGio(1);
	Time2.setPhut(1);
	Time2.setGiay(1);
	cout << "\nThoi gian thu hai sau khi set lai la: ";
	Time2.Xuat();

	return 0;
}