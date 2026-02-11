/*
 * Dự án: Hệ thống Quản lý Thư viện (Demo OOP)
 * Tác giả: Đoàn Hoàng Việt (Viet Gamer) - UIT K20
 * Ngày: 04/02/2026
 * Mô tả:
 * Ứng dụng Console C++ minh họa 4 tính chất cốt lõi của Lập trình hướng đối tượng (OOP):
 * - Tính Đóng gói (Encapsulation): Che giấu thuộc tính lớp (private/protected).
 * - Tính Kế thừa (Inheritance): Sách và Bài báo kế thừa từ lớp Tài liệu.
 * - Tính Đa hình (Polymorphism): Tính tiền phạt khác nhau cho từng loại tài liệu.
 * - Tính Trừu tượng (Abstraction): Sử dụng lớp cơ sở trừu tượng và hàm thuần ảo.
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;
using ll = long long;

//Class cha
class TaiLieu {
protected:
	string maTL, tenTL;
	int soNgayQuaHan;
public:
	//Construc mac dinh
	TaiLieu(string maTL = "", string tenTL = "", int soNgayQuaHan = 0) {
		this->maTL = maTL;
		this->tenTL = tenTL;
		this->soNgayQuaHan = soNgayQuaHan;
	}
	virtual void nhap() {
		cout << "Nhap ma tai lieu: ";
		cin >> maTL;
		cin.ignore();
		cout << "Nhap ten tai lieu: ";
		getline(cin, tenTL);
		cout << "Nhap so ngay qua han: ";
		cin >> soNgayQuaHan;
		cin.ignore();
	}
	virtual void xuat() {
		cout << "Ma tai lieu: " << maTL << endl;
		cout << "Ten tai lieu: " << tenTL << endl;
		cout << "So ngay qua han: " << soNgayQuaHan << endl;
	}
	virtual ll tinhTienPhat() = 0; //Ham thuan ao
	virtual ~TaiLieu() {} //Destructor
};

//Class con 1
class Sach : public TaiLieu {
private:
	string loaiSach;
public:
	void nhap() override {
		TaiLieu::nhap();
		cout << "Nhap loai sach: ";
		getline(cin, loaiSach);
	}
	void xuat() override {
		TaiLieu::xuat();
		cout << "Loai sach: " << loaiSach << endl;
		cout << "--> Tien phat: " << tinhTienPhat() << " VND" << endl;
		cout << "------------\n";
	}
	ll tinhTienPhat() override {
		return soNgayQuaHan * 5000;
	}
};

//Class con 2
class BaiBao : public TaiLieu {
private:
	string tenHoiNghi;
public:
	void nhap() override {
		TaiLieu::nhap();
		cout << "Nhap ten hoi nghi: ";
		getline(cin, tenHoiNghi);
	}
	void xuat() override {
		TaiLieu::xuat();
		cout << "Hoi nghi: " << tenHoiNghi << endl;
		cout << "--> Tien phat: " << tinhTienPhat() << " VND\n";
		cout << "------------\n";
	}
	ll tinhTienPhat() override {
		return soNgayQuaHan * 20000;
	}
};

//Class quan ly
class ThuVien {
private:
	vector<TaiLieu*> danhSach;
public:
	void themTaiLieu(TaiLieu* tl) {
		danhSach.push_back(tl);
	}
	void hienThiDanhSach() {
		cout << "\n------Danh sach tai lieu------\n";
		for (TaiLieu* tl : danhSach) {
			tl->xuat();
		}
	}
	ll tongTienPhat() {
		ll tong = 0;
		for (TaiLieu* tl : danhSach) {
			tong += tl->tinhTienPhat();
		}
		return tong;
	}
	//Destructor
	~ThuVien() {
		for (TaiLieu* tl : danhSach) {
			delete tl;
		}
		danhSach.clear();
	}
};

int main() {
	ThuVien thuVien;
	int chon;
	while (true) {
		cout << "1. Nhap sach (Phat 5k/ngay neu qua han)\n";
		cout << "2. Nhap bai bao (Phat 20k/ngay neu qua han)\n";
		cout << "3. Hien thi danh sach\n";
		cout << "4. Xem tong tien phat\n";
		cout << "0. Thoat\n";
		cout << "------------\n";
		cout << "Nhap lua chon: ";
		cin >> chon;
		if (chon == 0) break;
		switch (chon) {
		case 1: {
			Sach* s = new Sach();
			s->nhap();
			thuVien.themTaiLieu(s);
			cout << "------------\n";
			cout << "Da them sach thanh cong!\n";
			cout << "------------\n";
			break;
		}
		case 2: {
			BaiBao* bb = new BaiBao();
			bb->nhap();
			thuVien.themTaiLieu(bb);
			cout << "------------\n";
			cout << "Da them bai bao thanh cong!\n";
			cout << "------------\n";
			break;
		}
		case 3: {
			thuVien.hienThiDanhSach();
			break;
		}
		case 4: {
			cout << "Tong tien phat: " << thuVien.tongTienPhat() << " VND\n";
			cout << "------------\n";
			break;
		}
		default: {
			cout << "Lua chon khong hop le!\n";
			cout << "------------\n";
		}
		}
	}
	return 0;
}
