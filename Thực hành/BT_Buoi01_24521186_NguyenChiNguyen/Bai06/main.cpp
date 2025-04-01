// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
#include <string>
using namespace std;

struct HocSinh
{
	string HoTen;
	float fDiemToan, fDiemVan;
};

void NhapDanhSachHocSinh(HocSinh*&, int&);
void XuatHocSinh(HocSinh);
void TimHocSinhDTBCaoNhat(HocSinh*, int);
void TimHocSinhDTBThapNhat(HocSinh*, int);

int main()
{
	int n;
	HocSinh* DSHocSinh = NULL;
	NhapDanhSachHocSinh(DSHocSinh, n);
	TimHocSinhDTBCaoNhat(DSHocSinh, n);
	TimHocSinhDTBThapNhat(DSHocSinh, n);

	delete[] DSHocSinh;
	DSHocSinh = NULL;
	return 0;
}

void NhapDanhSachHocSinh(HocSinh*& DSHocSinh, int& n)
{
	cout << "Nhap so hoc sinh: ";
	cin >> n;
	DSHocSinh = new HocSinh[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin hoc sinh thu " << i + 1 << " : " << endl;
		cin.ignore();
		cout << "Nhap ten: ";
		getline(cin, DSHocSinh[i].HoTen);
		cout << "Nhap diem Toan: ";
		cin >> DSHocSinh[i].fDiemToan;
		cout << "Nhap diem Van: ";
		cin >> DSHocSinh[i].fDiemVan;
	}
}

void XuatHocSinh(HocSinh A)
{
	cout << "\nTen hoc sinh: " << A.HoTen;
	cout << "\nDiem Toan: " << A.fDiemToan;
	cout << "\nDiem Van: " << A.fDiemVan;
	cout << "\nDiem trung binh: " << (A.fDiemToan + A.fDiemVan) / 2;
}

void TimHocSinhDTBCaoNhat(HocSinh* DSHocSinh, int n)
{
	HocSinh KQ = DSHocSinh[0];
	float DiemTBLonNhat = (DSHocSinh[0].fDiemToan + DSHocSinh[0].fDiemVan) / 2;
	for (int i = 1; i < n; ++i)
	{
		float Temp = (DSHocSinh[i].fDiemToan + DSHocSinh[i].fDiemVan) / 2;
		if (Temp > DiemTBLonNhat)
		{
			DiemTBLonNhat = Temp;
			KQ = DSHocSinh[i];
		}
	}
	cout << "\nHoc sinh co diem trung binh cao nhat:";
	XuatHocSinh(KQ);
}

void TimHocSinhDTBThapNhat(HocSinh* DSHocSinh, int n)
{
	HocSinh KQ = DSHocSinh[0];
	float DiemTBThapNhat = (DSHocSinh[0].fDiemToan + DSHocSinh[0].fDiemVan) / 2;
	for (int i = 1; i < n; ++i)
	{
		float Temp = (DSHocSinh[i].fDiemToan + DSHocSinh[i].fDiemVan) / 2;
		if (Temp < DiemTBThapNhat)
		{
			DiemTBThapNhat = Temp;
			KQ = DSHocSinh[i];
		}
	}
	cout << "\nHoc sinh co diem trung binh thap nhat:";
	XuatHocSinh(KQ);
}