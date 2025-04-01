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

void NhapPhanSo(PhanSo&);
void XuatPhanSo(PhanSo);
int TimUocChungLonNhat(int, int);
void RutGonPhanSo(PhanSo&);

int main()
{
    PhanSo A;
    NhapPhanSo(A);
    RutGonPhanSo(A);
    XuatPhanSo(A);

    return 0;
}

void NhapPhanSo(PhanSo& A)
{
    do
    {
        cout << "Nhap tu so: ";
        cin >> A.iTuSo;
        cout << "Nhap mau so: ";
        cin >> A.iMauSo;
    } while (A.iMauSo == 0);
}

void XuatPhanSo(PhanSo A)
{
    if (A.iTuSo % A.iMauSo == 0)
    {
        cout << A.iTuSo / A.iMauSo;
    }
    else
    {
        if (A.iMauSo < 0)
            cout << A.iTuSo * -1 << "/" << A.iMauSo * -1;
        else
            cout << A.iTuSo << "/" << A.iMauSo;
    }
}

int TimUocChungLonNhat(int a, int b)
{
    if (a == 0)
        return b;
    return TimUocChungLonNhat(b % a, a);
}

void RutGonPhanSo(PhanSo& A)
{
    int UocChung = TimUocChungLonNhat(A.iTuSo, A.iMauSo);
    A.iTuSo /= UocChung;
    A.iMauSo /= UocChung;
}