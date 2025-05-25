// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cListCandidate.h"

cListCandidate::cListCandidate(int size)
{
	List.resize(size);
}

void cListCandidate::Nhap()
{
	int size;
	cout << "Nhap so luong thi sinh: ";
	cin >> size;
	List.resize(size);
	for (int i = 0; i < List.size(); i++)
	{
		cout << "## Nhap thong tin thi sinh thu " << i + 1 << ": ";
		List[i].Nhap();
	}
}

void cListCandidate::Xuat() const
{
	for (int i = 0; i < List.size(); i++)
	{
		cout << i << ". ";
		List[i].Xuat();
		cout << "\n";
	}
	cout << endl;
}

void cListCandidate::XuatTongDiemLonHon15() const
{
	bool coThiSinhTongDiemLonHon15 = false;
	for (int i = 0; i < List.size(); i++)
	{
		if (List[i].TinhTongDiem() > 15)
		{
			coThiSinhTongDiemLonHon15 = true;
			cout << i << ". ";
			List[i].Xuat();
			cout << "\n";
		}
	}
	if (!coThiSinhTongDiemLonHon15)
	{
		cout << "\nKhong co thi sinh thoa man dieu kien tong diem lon hon 15!";
	}
	cout << endl;
}

cCandidate cListCandidate::TimTongDiemCaoNhat() const
{
	cCandidate KQ;
	if (List.size() == 0)
	{
		cout << "\nDanh sach rong!";
		return KQ;
	}
	KQ = List[0];
	float tongDiemMax = List[0].TinhTongDiem();
	for (int i = 1; i < List.size(); i++)
	{
		if (List[i].TinhTongDiem() > tongDiemMax)
		{
			tongDiemMax = List[i].TinhTongDiem();
			KQ = List[i];
		}
	}
	return KQ;
}

// Cai dat quicksort
int Partition(vector<cCandidate>& ds, int l, int r, bool tang)
{
	cCandidate pivot = ds[(l + r) / 2];
	int i = l, j = r;
	while (i <= j)
	{
		if (tang)
		{
			while (ds[i].TinhTongDiem() < pivot.TinhTongDiem())
				i++;
			while (ds[j].TinhTongDiem() > pivot.TinhTongDiem())
				j--;
		}
		else
		{
			while (ds[i].TinhTongDiem() > pivot.TinhTongDiem())
				i++;
			while (ds[j].TinhTongDiem() < pivot.TinhTongDiem())
				j--;
		}
		if (i <= j)
		{
			cCandidate temp = ds[i];
			ds[i] = ds[j];
			ds[j] = temp;
			i++;
			j--;
		}
	}
	return i;
}

void QuickSort(vector<cCandidate>& ds, int l, int r, bool tang)
{
	if (l >= r)
		return;
	int index = Partition(ds, l, r, tang);
	QuickSort(ds, l, index - 1, tang);
	QuickSort(ds, index, r, tang);
}

void cListCandidate::SapXepTheoTongDiem(bool SapXepTangDan)
{
	QuickSort(List, 0, List.size() - 1, SapXepTangDan);
}
