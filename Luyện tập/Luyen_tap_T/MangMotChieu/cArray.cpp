#include "cArray.h"
#include <ctime>
#include <iostream>
#include <algorithm>

using namespace std;


cArray::cArray(int n)
{
	size = n;
	arr = new int[size];
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 190 - 90;
	}
}

void cArray::Xuat()
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}

int cArray::TimSoAmLonNhat()
{
	int maxNegative = INT32_MIN;
	for (int i = 0; i < size; ++i)
		if (arr[i] < 0 && arr[i] > maxNegative)
			maxNegative = arr[i];
	return maxNegative != INT32_MIN ? maxNegative : 1;
}

int cArray::DemSoLanXuatHienCuaGiaTri(int x)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] == x)
			count++;
	return count;
}

bool cArray::KiemTraMangGiamDan()
{
	for (int i = 0; i < size; ++i)
		if (arr[i] < arr[i + 1])
			return false;
	return true;
}

void cArray::SapXepTangDan()
{
	sort(arr, arr + size);
}


cArray::~cArray()
{
	delete[] arr;
}