// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cListNhanVienSX.h"
#include <iostream>

cListNhanVienSX::cListNhanVienSX(int size)
{
	List.resize(size);
}

void cListNhanVienSX::Nhap()
{
	int n;
	cout << "Nhap so luong nhan vien san xuat: ";
	cin >> n;
	List.resize(n);
	for (int i = 0; i < List.size(); i++)
	{
		cout << "## Nhap thong tin nhan vien thu " << i + 1 << ": ";
		List[i].Nhap();
	}
}

void cListNhanVienSX::Xuat() const
{
	for (int i = 0; i < List.size(); i++)
	{
		cout << "\n" << i + 1 << ". ";
		List[i].Xuat();
	}
}

cNhanVienSX cListNhanVienSX::TimNVLuongThapNhat() const
{
	cNhanVienSX KQ;
	if (List.size() == 0)
	{
		cout << "\nDanh sach rong!";
		return KQ;
	}
	KQ = List[0];
	float luongMin = List[0].getLuong();
	for (int i = 1; i < List.size(); i++)
	{
		if (List[i].getLuong() < luongMin)
		{
			luongMin = List[i].getLuong();
			KQ = List[i];
		}
	}
	return KQ;
}

int cListNhanVienSX::TinhTongLuong() const
{
	int tongLuong = 0;
	for (int i = 0; i < List.size(); i++)
	{
		tongLuong += List[i].getLuong();
	}
	return tongLuong;
}

cNhanVienSX cListNhanVienSX::TimNVTuoiCaoNhat() const
{
	cNhanVienSX KQ;
	if (List.size() == 0)
	{
		cout << "\nDanh sach rong!";
		return KQ;
	}
	KQ = List[0];
	for (int i = 1; i < List.size(); i++)
	{
		if (List[i].getNamSinh() < KQ.getNamSinh())
		{
			KQ = List[i];
		}
		else if (List[i].getNamSinh() == KQ.getNamSinh())
		{
			if (List[i].getThangSinh() < KQ.getThangSinh())
			{
				KQ = List[i];
			}
			else if (List[i].getThangSinh() == KQ.getThangSinh())
			{
				if (List[i].getNgaySinh() < KQ.getNgaySinh())
				{
					KQ = List[i];
				}
			}
		}
	}
	return KQ;
}

// Cai dat quicksort
int Partition(vector<cNhanVienSX>& ds, int l, int r, bool tang)
{
	cNhanVienSX pivot = ds[(l + r) / 2];
	int i = l, j = r;
	while (i <= j)
	{
		if (tang)
		{
			while (ds[i].getLuong() < pivot.getLuong())
				i++;
			while (ds[j].getLuong() > pivot.getLuong())
				j--;
		}
		else
		{
			while (ds[i].getLuong() > pivot.getLuong())
				i++;
			while (ds[j].getLuong() < pivot.getLuong())
				j--;
		}
		if (i <= j)
		{
			cNhanVienSX temp = ds[i];
			ds[i] = ds[j];
			ds[j] = temp;
			i++;
			j--;
		}
	}
	return i;
}

void QuickSort(vector<cNhanVienSX>& ds, int l, int r, bool tang)
{
	if (l >= r)
		return;
	int index = Partition(ds, l, r, tang);
	QuickSort(ds, l, index - 1, tang);
	QuickSort(ds, index, r, tang);
}

void cListNhanVienSX::SapXepTheoLuong(bool SXTang)
{
	QuickSort(List, 0, List.size() - 1, SXTang);
}

