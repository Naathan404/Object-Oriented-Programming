// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cDate.h"

int main()
{
	cDate d1, d2;
	int n;
	cout << "Nhap ngay thu nhat (ngay thang nam): \n";
	cin >> d1;
	cout << "Nhap ngay thu hai (ngay thang nam): \n";
	cin >> d2;
	cout << "Khoang cach giua hai ngay vua nhap la " << d1 - d2 << " ngay.";
	cout << "\nNhap so ngay muon cong them vao ngay thu nhat: ";
	cin >> n;
	cout << "Ngay thu nhat sau khi cong them " << n << " ngay la: " << d1 + n;
	cout << "\nNhap so ngay muon ngay thu hai tru di: ";
	cin >> n;
	cout << "Ngay thu hai sau khi tru di " << n << " ngay la: " << d2 - n;

	return 0;
}