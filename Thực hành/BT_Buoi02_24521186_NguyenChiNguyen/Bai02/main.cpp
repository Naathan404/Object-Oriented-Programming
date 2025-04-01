// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDiem.h"
#include <iostream>
using namespace std;

int main()
{
	cDiem A(1, 2), B;
	// Nhap
	B.Nhap();
	cout << "Toa do diem A la: ";

	// Xuat
	A.Xuat();
	cout << "Toa do diem B la: ";
	B.Xuat();

	// Cac ham set/get
	B.setHoangDo(9);
	B.setTungDo(9);
	cout << "Toa do diem B sau khi thay doi la: ";
	cout << B.getHoanhDo() << " " << B.getTungDo() << endl;

	// Tinh tien
	A.TinhTien(1, 1);
	cout << "Toa do diem A sau khi tinh tien moi truc +1 don vi la: ";
	A.Xuat();

	return 0;
}