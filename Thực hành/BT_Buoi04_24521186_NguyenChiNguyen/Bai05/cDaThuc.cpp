// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2


#include "cDaThuc.h"

cDaThuc::cDaThuc(int heso)
{
	List.push_back(cDonThuc(heso, 1));
}

float cDaThuc::TinhGiaTri(float x) const
{
	float kq = 0;
	for (int i = 0; i < List.size(); i++)
	{
		kq += List[i].Tinh(x);
	}
	return kq;
}

istream& operator>>(istream& is, cDaThuc& dt)
{
	int bac, hesotamthoi;
	cout << "Nhap bac cua da thuc: ";
	is >> bac;
	dt.List.resize(bac + 1);
	for (int i = 0; i < dt.List.size(); i++)
	{
		cout << "Nhap he so bac " << dt.List.size() - i - 1 << ": ";
		is >> hesotamthoi;
		dt.List[i].setHeSo(hesotamthoi);
		dt.List[i].setSoMu(dt.List.size() - i - 1);
	}
	return is;
}

ostream& operator<<(ostream& os, cDaThuc dt)
{
	bool LaDonThucDauTien = true;
	for (cDonThuc donThuc : dt.List)
	{
		if (donThuc.getHeSo() == 0)
			continue;
		if (!LaDonThucDauTien)
		{
			if (donThuc.getHeSo() > 0)
				os << " + ";
			else
				os << " - ";
		}
		else
		{
			cout << donThuc;
			LaDonThucDauTien = false;
			continue;
		}
		cDonThuc temp = donThuc;
		temp.setHeSo(abs(donThuc.getHeSo()));
		cout << temp;
		if (LaDonThucDauTien)
			LaDonThucDauTien = false;
	}
	if (LaDonThucDauTien)
		os << 0;
	return os;
}

cDaThuc operator+(cDaThuc a, cDaThuc b)
{
	cDaThuc KQ;
	int i = 0, j = 0;
	while (i < a.List.size() && j < b.List.size())
	{
		int soMu1 = a.List[i].getSoMu();
		int soMu2 = b.List[j].getSoMu();
		if (soMu1 == soMu2)
		{
			KQ.List.push_back(cDonThuc(a.List[i].getHeSo() + b.List[j].getHeSo(), soMu1));
			i++;
			j++;
		}
		else if (soMu1 > soMu2)
		{
			KQ.List.push_back(a.List[i++]);
		}
		else
		{
			KQ.List.push_back(b.List[j++]);
		}
	}
	while (i < a.List.size())
	{
		KQ.List.push_back(a.List[i++]);
	}
	while (j < b.List.size())
	{
		KQ.List.push_back(b.List[j++]);
	}
	return KQ;
}

cDaThuc operator-(cDaThuc a, cDaThuc b)
{
	cDaThuc temp = b;
	for (int i = 0; i < temp.List.size(); i++)
	{
		temp.List[i].setHeSo(-1 * temp.List[i].getHeSo());
	}
	return a + temp;
}