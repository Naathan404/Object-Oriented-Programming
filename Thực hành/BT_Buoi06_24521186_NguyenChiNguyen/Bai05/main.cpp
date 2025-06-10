// Mã số sinh viên: 24521186
// Họ và tên sinh viên: Nguyễn Chí Nguyên
// Ngày sinh: 10/03/2006
// Lớp: IT002.P26.2

#include "QuanLyNongTrai.h"

/// <Uu diem cua cach dung lien ket dong>
/// - Dễ dàng mở rộng: Khi cần thêm loại gia súc mới, chỉ cần tạo lớp mới kế thừa từ lớp cơ sở `GiaSuc` mà không cần thay đổi mã nguồn hiện tại.
/// - Tính kế thừa: Các thuộc tính và phương thức chung của gia súc được định nghĩa trong lớp cơ sở, giúp giảm thiểu mã lặp lại.
/// - Tính đa hình: Cho phép gọi phương thức `Keu` và `SinhCon` một cách đồng nhất trên các đối tượng khác nhau của các lớp con, giúp dễ dàng quản lý và xử lý các loại gia súc khác nhau.
/// - Dễ dàng bảo trì: Mỗi loại gia súc có thể được quản lý và bảo trì riêng biệt mà không ảnh hưởng đến các loại khác.


int main()
{
	QuanLyNongTrai NongTrai;
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