#include "cArray.h"
#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	cArray arr1(n);
	cArray arr2(0);
	arr1.Xuat();
	//arr2.Xuat();

	cout << arr1.TimSoAmLonNhat() << endl;
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << arr1.DemSoLanXuatHienCuaGiaTri(x) << endl;
	if (arr1.KiemTraMangGiamDan())
		cout << "Mang giam!";
	else
		cout << "Khong phai mang giam!";
	cout << endl;

	arr1.SapXepTangDan();
	arr1.Xuat();
}