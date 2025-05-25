// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cPhanSo.h"


int main()
{
	cPhanSo a, b;
	cout << "Nhap phan so thu nhat: ";
	cin >> a;
	cout << "Nhap phan so thu hai: ";
	cin >> b;
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	if (a == b)
		cout << "Hai phan so bang nhau";
	else if (a > b)
		cout << "Phan so a lon hon phan so b";
	else
		cout << "Phan so a nho hon phan so b";

	return 0;
}