// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "cQuanLyNongTrai.h"

int main()
{
	cQuanLyNongTrai NongTrai;
	cout << "Nhap so luong gia suc moi loai: \n";
	NongTrai.NhapSoLuongGiaSuc();

	// a.
	cout << "\nChu nong trai di vang, tat ca gia suc deu doi, cac tieng keu nghe duoc trong nong trai:\n";
	NongTrai.PhatRaCacTiengKeu();

	// b.
	NongTrai.QuaMotLuaSinh();
	NongTrai.QuaMotLuocChoSua();
	cout << "\nThong ke so luong gia suc o moi loai sau mot lua sinh: \n";
	NongTrai.ThongKeSoLuongGiaSucMoiLoai();
	cout << "\nTong so sua thu duoc sau mot luoc cho sua cua tat ca gia suc: " << NongTrai.TongSoSuaThuDuoc() << endl;

	return 0;
}