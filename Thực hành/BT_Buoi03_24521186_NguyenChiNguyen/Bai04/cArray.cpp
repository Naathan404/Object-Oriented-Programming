// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cArray.h"
#include <ctime>
#include <iostream>
using namespace std;

// Tao mang gom n so ngau nhien duoc truyen vao
template <class T>
cArray<T>::cArray(int n)
{
	size = n;
	if (n == 0)
	{
		arr = NULL;
	}
	else
	{
		arr = new T[size];
		if(is_same<T, int>::value)
		{
			srand(time(NULL));
			for (int i = 0; i < size; i++)
				arr[i] = rand() % 20 - 10;
		}
		if (is_same<T, float>::value || is_same<T, double>::value)
		{
			srand(time(NULL));
			for (int i = 0; i < size; i++)
				arr[i] = (rand() % 201 - 100) / 10.0;
		}
		if (is_same<T, char>::value)
		{
			srand(time(NULL));
			for (int i = 0; i < size; i++)
			{
				int loaiKyTu = rand() % 2;
				if (loaiKyTu == 0)
					arr[i] = 'a' + rand() % 26;
				else
					arr[i] = 'A' + rand() % 26;
			}
		}
	}
}

template <class T>
cArray<T>::~cArray()
{
	delete[] arr;
	arr = NULL;
}

// Xuat cac phan tu trong mang
template <class T>
void cArray<T>::Xuat()
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
}

// Tra ve so lan xuat hien cua gia tri x trong mang
template <class T>
int cArray<T>::DemSoLanXuatHien(T x)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if(arr[i] == x)
			count++;
	}
	return count;
}

// Tra ve <true> neu mang tang dan, <false> neu mang bien doi hay giam dan
template <class T>
bool cArray<T>::KiemTraMangTangDan()
{
	for (int i = 0; i < size; ++i)
		if (arr[i] > arr[i + 1])
			return false;
	return true;
}

// Tra ve phan tu co gia tri le nho nhat trong mang, tra ve 0 neu mang khong co so le
template <class T>
int cArray<T>::TimLeNhoNhat()
{
	if (!is_same<T, int>::value)
	{
		cout << "\nHam TimLeNhoNhat() chi ho tro kieu int.";
		return 0;
	}
	int minOdd = INT32_MAX;
	bool hadOdd = false;
	for (int i = 0; i < size; i++)
	{
		if ((int)arr[i] % 2 != 0 && arr[i] < minOdd)
		{
			minOdd = arr[i];
			hadOdd = true;
		}
	}
	return (hadOdd ? minOdd : 0);
}

// Kiem tra gia tri truyen vao co phai la so nguyen to hay khong
bool LaSoNguyenTo(int x)
{
	if (x < 2)
		return false;
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}

// Tra ve so nguyen to lon nhat trong mang, neu mang khong co so nguyen to tra ve 0;
template <class T>
int cArray<T>::TimSoNguyenoToLonNhat()
{
	if (!is_same<T, int>::value)
	{
		cout << "\nHàm TimSoNguyenToLonNhat() chi ho tro kieu int.";
		return 0;
	}
	int maxPrime = 0;
	for (int i = 0; i < size; i++)
	{
		if (LaSoNguyenTo(arr[i]) && arr[i] > maxPrime)
		{
			maxPrime = arr[i];
		}
	}
	return maxPrime;
}

// Phan hoach Quicksort
template <class T>
int Partition(T* arr, int left, int right, bool TangDan)
{
	T pivot = arr[(left + right) / 2];
	int i = left, j = right;
	while (i <= j)
	{
		if (TangDan)
		{
			while (arr[i] < pivot)
				i++;
			while (arr[j] > pivot)
				j--;
		}
		else
		{
			while (arr[i] > pivot)
				i++;
			while (arr[j] < pivot)
				j--;
		}
		if (i <= j)
		{
			T temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	return i;
}

// Xu ly quicksort
template <class T>
void QuickSort(T* arr, int left, int right, bool TangDan)
{
	if (left >= right)
		return;
	int index = Partition(arr, left, right, TangDan);
	QuickSort(arr, left, index - 1, TangDan);
	QuickSort(arr, index, right, TangDan);
}

template <class T>
void cArray<T>::SapXep(bool TangDan)
{
	QuickSort(arr, 0, size - 1, TangDan);
}


template class cArray<int>;
template class cArray<float>;
template class cArray<double>;
template class cArray<char>;