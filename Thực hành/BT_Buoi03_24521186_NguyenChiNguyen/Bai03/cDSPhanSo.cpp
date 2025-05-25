// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cDSPhanSo.h"
#include "iostream"
#include "ctime"
using namespace std;

// Constructor tao n so ngau nhien, n duoc nguoi dung khoi tao
cDSPhanSo::cDSPhanSo(int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		cPhanSo temp;
		temp.setTuSo(rand() % 19 - 9);
		temp.setMauSo(rand() % 19 - 9);
		temp.RutGon();
		DSPhanSo.push_back(temp);
	}
}

// Ham nhap vao danh sach phan so
void cDSPhanSo::Nhap()
{
	int size;
	cout << "Nhap so luong phan so cua danh sach: ";
	cin >> size;
	DSPhanSo.resize(size);
	for (int i = 0; i < size; i++)
	{
		cout << "Nhap phan so thu " << i + 1 << ": ";
		DSPhanSo[i].Nhap();
		DSPhanSo[i].RutGon();
	}
}

// Ham xuat danh sach phan so
void cDSPhanSo::Xuat() const
{
	for (int i = 0; i < DSPhanSo.size(); i++)
	{
		DSPhanSo[i].Xuat();
		cout << " ";
	}
}

// Tra ve phan so ket qua la tong cua cac phan so trong danh sach
cPhanSo cDSPhanSo::TinhTongCacPhanSo() const
{
	cPhanSo KQ = DSPhanSo[0];
	for (int i = 1; i < DSPhanSo.size(); i++)
	{
		KQ = KQ.Cong(DSPhanSo[i]);
	}
	return KQ;
}

// Tra ve phan so lon nhat trong danh sach
cPhanSo cDSPhanSo::TimPhanSoLonNhat() const
{
	float giaTriMax = DSPhanSo[0].DinhGiaTri();
	cPhanSo phanSoMax = DSPhanSo[0];
	for (int i = 1; i < DSPhanSo.size(); i++)
	{
		if (DSPhanSo[i].DinhGiaTri() > giaTriMax)
		{
			giaTriMax = DSPhanSo[i].DinhGiaTri();
			phanSoMax = DSPhanSo[i];
		}
	}
	return phanSoMax;
}

// Tra ve phan so nho nhat trong danh sach
cPhanSo cDSPhanSo::TimPhanSoNhoNhat() const
{
	float giaTriMin = DSPhanSo[0].DinhGiaTri();
	cPhanSo phanSoMin = DSPhanSo[0];
	for (int i = 1; i < DSPhanSo.size(); i++)
	{
		if (DSPhanSo[i].DinhGiaTri() < giaTriMin)
		{
			giaTriMin = DSPhanSo[i].DinhGiaTri();
			phanSoMin = DSPhanSo[i];
		}
	}
	return phanSoMin;
}

// Kiem tra so nguyen to
bool LaSoNguyenTo(int val)
{
	if (val < 2)
		return false;
	for (int i = 2; i * i <= val; i++)
		if (val % i == 0)
			return false;
	return true;
}

// Tra ve phan so co tu so la so nguyen to lon nhat trong danh sach
cPhanSo cDSPhanSo::TimPhanSoCoTuNguyenToLonNhat() const
{
	int tuNguyenToMax = 2;
	cPhanSo KQ(-1);
	for (int i = 0; i < DSPhanSo.size(); i++)
	{
		if (LaSoNguyenTo(DSPhanSo[i].getTuSo()) && DSPhanSo[i].getTuSo() >= tuNguyenToMax && DSPhanSo[i].getTuSo() * DSPhanSo[i].getMauSo() > 0)
		{
			tuNguyenToMax = DSPhanSo[i].getTuSo();
			KQ = DSPhanSo[i];
		}
	}
	return KQ;
}

// Cac ham phuc vu viec sap xep danh sach phan so
int Partition(vector<cPhanSo>& ds, int left, int right, bool SapXepTang)
{
	cPhanSo pivot = ds[(left + right) / 2];
	int i = left, j = right;
	while (i <= j)
	{
		if(SapXepTang)
		{
			while (ds[i].DinhGiaTri() < pivot.DinhGiaTri())
				i++;
			while (ds[j].DinhGiaTri() > pivot.DinhGiaTri())
				j--;
		}
		else
		{
			while (ds[i].DinhGiaTri() > pivot.DinhGiaTri())
				i++;
			while (ds[j].DinhGiaTri() < pivot.DinhGiaTri())
				j--;
		}
		if (i <= j)
		{
			cPhanSo temp = ds[i];
			ds[i] = ds[j];
			ds[j] = temp;
			i++;
			j--;
		}
	}
	return i;
}

void QuickSort(vector<cPhanSo>& ds, int left, int right, bool SapXepTang)
{
	if (left >= right)
		return;
	int index = Partition(ds, left, right, SapXepTang);
	QuickSort(ds, left, index - 1, SapXepTang);
	QuickSort(ds, index, right, SapXepTang);
}

// Truyen vao <true> neu sap xep tang dan, <false> neu sap xep giam dan
void cDSPhanSo::SapXep(bool SapXepTangDan)
{
	QuickSort(DSPhanSo, 0, DSPhanSo.size() - 1, SapXepTangDan);
}