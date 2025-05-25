#include "cQuanLyHoaDon.h"

int main()
{
	cQuanLyHoaDon listHoaDon;
	cout << "Nhap so luong hoa don can luu tru: ";
	int n;
	cin >> n;
	listHoaDon.nhapDSHoaDon(n);
	cout << "\nDanh sach thong tin cac hoa don: " << endl;
	listHoaDon.xuatDSHoaDon();
	cout << "\nTong so tien nuoc cac ho da su dung trong thang vua roi: " << listHoaDon.TinhTongSoTienNuoc() << endl;
	cout << "\nHoa don ho kinh doanh dung nhieu nuoc nhat: " << endl;
	listHoaDon.xuatHoKinhDoanhDungNhieuNuocNhat();

	return 0;
}