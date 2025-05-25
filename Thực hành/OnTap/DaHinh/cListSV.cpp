#include "cListSV.h"

void cListSV::Nhap()
{
	int n, type;
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	listSV.resize(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap loai sinh vien: ";
		cin >> type;
		if (type == 1)
		{
			listSV[i] = new cSVCaoDang;
			listSV[i]->Nhap();
		}
		if (type == 2)
		{
			listSV[i] = new cSVDaiHoc;
			listSV[i]->Nhap();
		}
	}
}

void cListSV::Xuat() const
{
	for (int i = 0; i < listSV.size(); i++)
	{
		listSV[i]->Xuat();
	}
}

