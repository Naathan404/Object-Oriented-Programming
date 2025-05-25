// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cListCandidate.h"


int main()
{
	cListCandidate DSThiSinh;
	
	// Nhap danh sach thi sinh
	DSThiSinh.Nhap();
	// Xuat danh sach thi sinh
	cout << "Danh sach thong tin cac thi sinh: \n";
	DSThiSinh.Xuat();
	// Xuat danh sach thong tin thi sinh co tong diem lon hon 15
	cout << "Danh sach thong tin cac thi sinh co tong diem lon lon 15: \n";
	DSThiSinh.XuatTongDiemLonHon15();
	// Xuat thong tin thi sinh co tong diem cao nhat
	cout << "Thong tin thi sinh co tong diem cao nhat la: \n";
	DSThiSinh.TimTongDiemCaoNhat().Xuat();
	// Sap xep danh sach sinh vien giam dan theo tong diem
	cout << "\n\nDanh sach thong tin cac thi sinh da sap xep giam dan theo tong diem: \n";
	DSThiSinh.SapXepTheoTongDiem(false);
	DSThiSinh.Xuat();

	return 0;
}