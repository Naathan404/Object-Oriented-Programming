// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct HocSinh
{
    string HoTen;
    float fDiemToan, fDiemVan;
};

// Khai bao nguyen mau cac ham
void Nhap(HocSinh&);
void XuatDiemTrungBinh(HocSinh);

int main()
{
    HocSinh A;
    Nhap(A);
    XuatDiemTrungBinh(A);
    return 0;
}

// Dinh nghia cac ham
void Nhap(HocSinh& A)
{
    cout << "Nhap ho va ten: ";
    getline(cin, A.HoTen);
    cout << "Nhap diem Toan: ";
    cin >> A.fDiemToan;
    cout << "Nhap diem Van: ";
    cin >> A.fDiemVan;
}

void XuatDiemTrungBinh(HocSinh A)
{
    cout << "Diem trung binh cua " << A.HoTen << " la: " << setprecision(2) << (A.fDiemToan + A.fDiemVan) / 2;
}