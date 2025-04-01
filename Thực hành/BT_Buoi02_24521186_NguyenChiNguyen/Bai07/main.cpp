// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "Vehicle.h"

int main()
{
	Vehicle xe1("Nguyen Chi Nguyen", "WaveAlpha", 20000000, 110);
	Vehicle xe2("Nguyen Van A", "Honda SH", 100000000, 160);
	Vehicle xe3;
	xe3.Nhap();
	cout << "-> BANG KE KHAI THONG TIN CAC XE <-";
	xe1.Xuat();
	xe2.Xuat();
	xe3.Xuat();

	return 0;
}