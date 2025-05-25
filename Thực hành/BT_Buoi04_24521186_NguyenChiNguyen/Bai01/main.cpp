// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cSoPhuc.h"

int main()
{
	cSoPhuc a(5), b;
	cout << "So phuc thu nhat la: " << a;
	cout << "\nNhap so phuc thu hai: ";
	cin >> b;
	cout << "(" << a << ") + (" << b << ") = " << a + b << endl;
	cout << "(" << a << ") - (" << b << ") = " << a - b << endl;
	cout << "(" << a << ") * (" << b << ") = " << a * b << endl;
	cout << "(" << a << ") / (" << b << ") = " << a / b << endl;
	cout << b + 7 << endl;
	cout << 7 + b << endl;
	if (a == b)
		cout << "Hai so phuc bang nhau";
	if (a != b)
		cout << "Hai so phuc khac nhau";

	return 0;
}