// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cMatrix.h"
#include "cVector.h"

int main()
{
	// Nhap hai ma tran
	int m, n, p, q;
	cout << "Nhap so hang va so cot cua ma tran thu nhat: ";
	cin >> m >> n;
	cMatrix m1(m, n);
	cout << "Nhap cac phan tu cho ma tran thu nhat: \n";
	cin >> m1;
	cout << "Nhap so hang va so cot cua ma tran thu hai: ";
	cin >> p >> q;
	cMatrix m2(p, q);
	cout << "Nhap cac phan tu cho ma tran thu hai: \n";
	cin >> m2;

	// Tich cua hai ma tran
	cout << "Tich cua hai ma tran la: \n";
	cout << m1* m2;

	// Nhap vector
	int k;
	cout << "\nNhap so chieu cua vector: ";
	cin >> k;
	cVector v(k);
	cout << "Nhap cac phan tu cua vector tren: ";
	cin >> v;

	// Nhan ma tran voi vector va nhan vector voi ma tran
	cout << "Tich cua ma tran thu nhat voi vector tren la: \n";
	cout << m1 * v;
	cout << "\nTich cua vector tren voi ma tran thu hai la: \n";
	cout << v * m2;

	return 0;
}