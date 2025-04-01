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

// Khoi tao cac ham can thiet
void NhapPhanSo(PhanSo&);
void XuatPhanSo(PhanSo);
int TimUocChungLonNhat(int, int);
void RutGonPhanSo(PhanSo&);
PhanSo TongHaiPhanSo(PhanSo, PhanSo);
PhanSo HieuHaiPhanSo(PhanSo, PhanSo);
PhanSo TichHaiPhanSo(PhanSo, PhanSo);
PhanSo ThuongHaiPhanSo(PhanSo, PhanSo);
void XuatTongHieuTichThuong(PhanSo, PhanSo);

// Ham main
int main()
{
    PhanSo A, B;
    cout << "Nhap phan so thu nhat: " << endl;
    NhapPhanSo(A);
    cout << "Nhap phan so thu hai: " << endl;
    NhapPhanSo(B);
    XuatTongHieuTichThuong(A, B);

    return 0;
}

// Dinh nghia cac ham ben tren
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

void XuatTongHieuTichThuong(PhanSo A, PhanSo B)
{
    cout << "Tong hai phan so la: ";
    XuatPhanSo(TongHaiPhanSo(A, B));
    cout << "\nHieu hai phan so la: ";
    XuatPhanSo(HieuHaiPhanSo(A, B));
    cout << "\nTich hai phan so la: ";
    XuatPhanSo(TichHaiPhanSo(A, B));
    cout << "\nThuong hai phan so la: ";
    XuatPhanSo(ThuongHaiPhanSo(A, B));
}

int TimUocChungLonNhat(int a, int b)
{
    if (a == 0)
        return b;
    return TimUocChungLonNhat(b % a, a);
}

void RutGonPhanSo(PhanSo& A)
{
    int UocChungLonNhat = TimUocChungLonNhat(A.iTuSo, A.iMauSo);
    A.iTuSo /= UocChungLonNhat;
    A.iMauSo /= UocChungLonNhat;
}

PhanSo TongHaiPhanSo(PhanSo A, PhanSo B)
{
    PhanSo KQ;
    KQ.iMauSo = A.iMauSo * B.iMauSo;
    KQ.iTuSo = (KQ.iMauSo / A.iMauSo) * A.iTuSo + (KQ.iMauSo / B.iMauSo) * B.iTuSo;
    RutGonPhanSo(KQ);
    return KQ;
}

PhanSo HieuHaiPhanSo(PhanSo A, PhanSo B)
{
    B.iTuSo = B.iTuSo * -1;
    return TongHaiPhanSo(A, B);
}

PhanSo TichHaiPhanSo(PhanSo A, PhanSo B)
{
    PhanSo KQ;
    KQ.iTuSo = A.iTuSo * B.iTuSo;
    KQ.iMauSo = A.iMauSo * B.iMauSo;
    RutGonPhanSo(KQ);
    return KQ;
}

PhanSo ThuongHaiPhanSo(PhanSo A, PhanSo B)
{
    int temp = B.iTuSo;
    B.iTuSo = B.iMauSo;
    B.iMauSo = temp;
    return TichHaiPhanSo(A, B);
}