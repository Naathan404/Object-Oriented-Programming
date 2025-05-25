//Mã số sinh viên: 24521186
//Họ và tên: Nguyễn Chí Nguyên
//Ngày sinh: 10/03/2006
//Lớp: IT002.P26.2

#include "cListSinhVien.h"

int main()
{
	cListSinhVien listSV;

	// Minh hoa ham nhap/xuat
	listSV.Nhap();
	listSV.Xuat();
	
	// Minh hoa ham dem so sinh vien du dieu kien tot nghiep
	cout << "\nSo sinh vien du dieu kien tot nghiep la: " << listSV.DemSoSVDuDieuKienTotNghiep();

	// Minh hoa ham tim sinh vien dai hoc co diem trung binh cao nhat
	cSVDaiHoc svDH = listSV.TimSVDaiHocDTBCaoNhat();
	cout << "\nThong tin sinh vien dai hoc co diem trung binh cao nhat: \n";
	svDH.Xuat();

	return 0;
}