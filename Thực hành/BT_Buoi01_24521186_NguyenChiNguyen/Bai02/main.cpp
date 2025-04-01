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
void SoSanhHaiPhanSo(PhanSo, PhanSo);

int main()
{
    PhanSo A, B;
    cout << "Nhap phan so thu nhat: " << endl;
    NhapPhanSo(A);
    cout << "Nhap phan so thu hai: " << endl;
    NhapPhanSo(B);
    cout << "Phan so lon nhat la: ";
    SoSanhHaiPhanSo(A, B);
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
    if (A.iMauSo < 0)
        cout << A.iTuSo * -1 << "/" << A.iMauSo * -1;
    else
        cout << A.iTuSo << "/" << A.iMauSo;
}

void SoSanhHaiPhanSo(PhanSo A, PhanSo B)
{
    float GiaTri1 = (float)A.iTuSo / A.iMauSo;
    float GiaTri2 = (float)B.iTuSo / B.iMauSo;
    if (GiaTri1 == GiaTri2)
        cout << "Hai phan so bang nhau!";
    else if (GiaTri1 > GiaTri2)
        XuatPhanSo(A);
    else
        XuatPhanSo(B);
}