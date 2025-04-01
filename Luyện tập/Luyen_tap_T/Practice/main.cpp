#include "temporary.h"

int main()
{
	Temporary T1, T2(2), T3(5, 5);
	T1.Xuat();
	T2.Xuat();
	T3.Xuat();
	T1.Nhap();
	T1.Xuat();

	return 0;
}