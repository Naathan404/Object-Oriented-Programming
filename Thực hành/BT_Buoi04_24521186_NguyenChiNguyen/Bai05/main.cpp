// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDaThuc.h"


int main()
{
	cDaThuc dt1, dt2;
	cout << "Nhap da thuc thu nhat: \n";
	cin >> dt1;
	cout << "Nhap da thuc thu hai: \n";
	cin >> dt2;
	cout << "Hai da thuc vua nhap la: \n" << dt1 << "\n" << dt2;
	cout << "\nTong cua hai da thuc tren la: " << dt1 + dt2;
	cout << "\nHiey cua hai da thuc tren la: " << dt1 - dt2;
	return 0;
}