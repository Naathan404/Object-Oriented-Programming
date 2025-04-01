// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
using namespace std;

struct PhanSo
{
    int iTuSo, iMauSo;
};

// Khai bao nguyen mau cac ham
bool NhapDanhSachPhanSo(PhanSo*&, int&);
void TimPhanSoLonNhat(PhanSo*, int);
void XuatPhanSo(PhanSo);
void XuatDanhSachPhanSo(PhanSo*, int);
void XuatDanhSachTangDan(PhanSo*, int);
void XuatDanhSachGiamDan(PhanSo*, int);

// Ham main
int main()
{
    int n;
    PhanSo* DSPhanSo = NULL;
    if (NhapDanhSachPhanSo(DSPhanSo, n))
    {
        TimPhanSoLonNhat(DSPhanSo, n);
        XuatDanhSachTangDan(DSPhanSo, n);
        XuatDanhSachGiamDan(DSPhanSo, n);
    }

    delete[] DSPhanSo;
    DSPhanSo = NULL;
    return 0;
}

// Dinh nghia cac ham ben tren
bool NhapDanhSachPhanSo(PhanSo*& DSPhanSo, int& n)
{
    cout << "Nhap so luong phan so: ";
    cin >> n;
    DSPhanSo = new PhanSo[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Nhap phan so thu " << i + 1 << ": " << endl;
        cout << "Nhap tu so: ";
        cin >> DSPhanSo[i].iTuSo;
        cout << "Nhap mau so: ";
        cin >> DSPhanSo[i].iMauSo;
        if (DSPhanSo[i].iMauSo == 0)
            return false;
    }
    return true;
}

void XuatPhanSo(PhanSo A)
{
    if (A.iMauSo < 0)
        cout << A.iTuSo * -1 << "/" << A.iMauSo * -1;
    else
        cout << A.iTuSo << "/" << A.iMauSo;
}

void XuatDanhSachPhanSo(PhanSo* DSPhanSo, int n)
{
    for (int i = 0; i < n; ++i)
    {
        XuatPhanSo(DSPhanSo[i]);
        cout << " ";
    }
}

void TimPhanSoLonNhat(PhanSo* DSPhanSo, int n)
{
    PhanSo KQ = DSPhanSo[0];
    float maxValue = (float)DSPhanSo[0].iTuSo / DSPhanSo[0].iMauSo;
    for (int i = 1; i < n; ++i)
    {
        float temp = (float)DSPhanSo[i].iTuSo / DSPhanSo[i].iMauSo;
        if (temp > maxValue)
        {
            maxValue = temp;
            KQ = DSPhanSo[i];
        }
    }
    cout << "Phan so lon nhat la: ";
    XuatPhanSo(KQ);
}

void XuatDanhSachTangDan(PhanSo* DSPhanSo, int n)
{
    cout << "\nDanh sach phan so tang dan: ";
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (((float)DSPhanSo[i].iTuSo / DSPhanSo[i].iMauSo) > ((float)DSPhanSo[j].iTuSo / DSPhanSo[j].iMauSo))
            {
                swap(DSPhanSo[i], DSPhanSo[j]);
            }
        }
    }
    XuatDanhSachPhanSo(DSPhanSo, n);
}

void XuatDanhSachGiamDan(PhanSo* DSPhanSo, int n)
{
    cout << "\nDanh sach phan so giam dan: ";
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (((float)DSPhanSo[i].iTuSo / DSPhanSo[i].iMauSo) < ((float)DSPhanSo[j].iTuSo / DSPhanSo[j].iMauSo))
            {
                swap(DSPhanSo[i], DSPhanSo[j]);
            }
        }
    }
    XuatDanhSachPhanSo(DSPhanSo, n);
}