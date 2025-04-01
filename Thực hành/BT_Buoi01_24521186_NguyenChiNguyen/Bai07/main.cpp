// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include <iostream>
using namespace std;

struct Date
{
    int iNgay, iThang, iNam;
};

// Khai bao nguyen mau cac ham
void NhapNgay(Date&);
bool KiemTraNgayHopLe(Date);
bool KiemTraNamNhuan(int);
void XuatNgay(Date);
void InNgayKeTiep(Date&);

int main()
{
    Date NgayHienTai;
    NhapNgay(NgayHienTai);
    if (!KiemTraNgayHopLe(NgayHienTai))
        cout << "Thong tin khong hop le!";
    else
        InNgayKeTiep(NgayHienTai);

    return 0;
}

// Dinh nghia cac ham
void NhapNgay(Date& NgayHienTai)
{
    cout << "Nhap ngay: ";
    cin >> NgayHienTai.iNgay;
    cout << "Nhap thang: ";
    cin >> NgayHienTai.iThang;
    cout << "Nhap nam: ";
    cin >> NgayHienTai.iNam;
}

void XuatNgay(Date NgayHienTai)
{
    cout << NgayHienTai.iNgay << "/" << NgayHienTai.iThang << "/" << NgayHienTai.iNam;
}

bool KiemTraNamNhuan(int iNam)
{
    return (iNam % 400 == 0) || ((iNam % 4 == 0) && (iNam % 100 != 0));
}

// Kiem tra ngay co hop le hay khong, neu khong tra ve false
bool KiemTraNgayHopLe(Date NgayHienTai)
{
    if ((NgayHienTai.iNgay <= 0 || NgayHienTai.iNgay > 31) || (NgayHienTai.iThang <= 0 || NgayHienTai.iThang > 12) || NgayHienTai.iNam <= 0)
        return false;
    else if (NgayHienTai.iThang == 4 || NgayHienTai.iThang == 6 || NgayHienTai.iThang == 9 || NgayHienTai.iThang == 11)
    {
        if (NgayHienTai.iNgay > 30)
            return false;
    }
    else if (NgayHienTai.iThang == 2)
    {
        if ((KiemTraNamNhuan(NgayHienTai.iNam) && NgayHienTai.iNgay > 29) || (!KiemTraNamNhuan(NgayHienTai.iNam) && NgayHienTai.iNgay > 28))
            return false;
    }
    return true;
}

// Xu li tim và in ra ngay ke tiep
void InNgayKeTiep(Date& D)
{
    Date NgayKeTiep = D;
    NgayKeTiep.iNgay += 1;
    if (NgayKeTiep.iThang == 1 || NgayKeTiep.iThang == 3 || NgayKeTiep.iThang == 5
        || NgayKeTiep.iThang == 7 || NgayKeTiep.iThang == 8 || NgayKeTiep.iThang == 10
        || NgayKeTiep.iThang == 12)
    {
        if (NgayKeTiep.iNgay > 31)
        {
            NgayKeTiep.iNgay %= 31;
            NgayKeTiep.iThang++;
        }
    }
    else if (NgayKeTiep.iThang == 4 || NgayKeTiep.iThang == 6
        || NgayKeTiep.iThang == 9 || NgayKeTiep.iThang == 11)
    {
        if (NgayKeTiep.iNgay > 30)
        {
            NgayKeTiep.iNgay %= 30;
            NgayKeTiep.iThang++;
        }
    }
    else if (NgayKeTiep.iThang == 2)
    {
        if (KiemTraNamNhuan(NgayKeTiep.iNam) && NgayKeTiep.iNgay > 29)
        {
            NgayKeTiep.iNgay %= 29;
            NgayKeTiep.iThang++;
        }
        else if (!KiemTraNamNhuan(NgayKeTiep.iNam) && NgayKeTiep.iNgay > 28)
        {
            NgayKeTiep.iNgay %= 28;
            NgayKeTiep.iThang++;
        }
    }
    if (NgayKeTiep.iThang > 12)
    {
        NgayKeTiep.iThang %= 12;
        NgayKeTiep.iNam++;
    }
    cout << "Ngay tiep theo la: ";
    XuatNgay(NgayKeTiep);
}