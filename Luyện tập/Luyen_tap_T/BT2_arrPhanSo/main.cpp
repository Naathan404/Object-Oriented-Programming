#include "arrPhanSo.h"
#include <iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	arrPhanSo arr(n);
	//arr.Nhap(3);
	arr.TaoMangNgauNhien(n);
	arr.Xuat();
	
	cPhanSo ans = arr.TimPhanSoLonNhat();
	ans.Xuat();
}