/*
 *Đoàn Hoàng Việt (Việt Gamer)
 *Date: 31/01/2026
 *Description: Chương trình tính toán phân số (OOP C++)
 *Features:
 * 	-Xây dựng Class: Đóng gói tử số và mẫu số, đảm bảo tính toàn vẹn dữ liệu.
 *	-Nạp chồng toán tử số học: Hỗ trợ +, -, *, / trực tiếp giữa các đối tượng phân số.
 *	-Nạp chồng Nhập/Xuất: Sử dụng cin và cout trực tiếp với đối tượng (cin >> ps1).
 *	-So sánh chính xác: Hỗ trợ >, <, == sử dụng quy đồng chéo (tránh sai số số thực).
 *	-Tự động tối giản: Phân số luôn được rút gọn tối giản và xử lý dấu âm ngay khi nhập hoặc tính toán.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <cmath>

using ll = long long;

using namespace std;

class PhanSo
{
	private:
		int tu, mau;
	public:
		PhanSo(int tu = 0, int mau = 1)
		{
			this->tu = tu;
			this->mau = mau;
		}
		friend istream& operator >> (istream &in, PhanSo &ps);
		friend ostream& operator << (ostream &out, PhanSo ps);
		friend void rutGon(PhanSo &ps);
		friend PhanSo operator + (PhanSo ps1, PhanSo ps2);
		friend PhanSo operator - (PhanSo ps1, PhanSo ps2);
		friend PhanSo operator * (PhanSo ps1, PhanSo ps2);
		friend PhanSo operator / (PhanSo ps1, PhanSo ps2);
		friend bool operator > (PhanSo ps1, PhanSo ps2);
		friend bool operator < (PhanSo ps1, PhanSo ps2);
		friend bool operator == (PhanSo ps1, PhanSo ps2);
};

void rutGon(PhanSo &ps)
{
	int ucln = gcd(abs(ps.tu), abs(ps.mau));
	ps.tu /= ucln;
	ps.mau /= ucln;
	if (ps.mau < 0)
	{
		ps.tu = -ps.tu;
		ps.mau = -ps.mau;
	}
}

istream& operator >> (istream &in, PhanSo &ps)
{
	cout << "Nhap tu so: "; in >> ps.tu;
	do {
		cout << "Nhap mau so: "; in >> ps.mau;
		if (ps.mau == 0) cout << "Nhap lai mau so: ";
	} while (ps.mau == 0);
	rutGon(ps);
	return in;
}

ostream& operator << (ostream &out, PhanSo ps)
{
	if (ps.mau == 1) out << ps.tu;
	else out << ps.tu << "/" << ps.mau;
	return out;
}

PhanSo operator + (PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	int ketqua_tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
	int ketqua_mau = ps1.mau * ps2.mau;
	ps.tu = ketqua_tu;
	ps.mau = ketqua_mau;
	rutGon(ps);
	return ps;
}

PhanSo operator - (PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	int ketqua_tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
	int ketqua_mau = ps1.mau * ps2.mau;
	ps.tu = ketqua_tu;
	ps.mau = ketqua_mau;
	rutGon(ps);
	return ps;
}

PhanSo operator * (PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	int ketqua_tu = ps1.tu * ps2.tu;
	int ketqua_mau = ps1.mau * ps2.mau;
	ps.tu = ketqua_tu;
	ps.mau = ketqua_mau;
	rutGon(ps);
	return ps;
}

PhanSo operator / (PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	int ketqua_tu = ps1.tu * ps2.mau;
	int ketqua_mau = ps1.mau * ps2.tu;
	ps.tu = ketqua_tu;
	ps.mau = ketqua_mau;
	rutGon(ps);
	return ps;
}

bool operator > (PhanSo ps1, PhanSo ps2)
{
	return (ll)ps1.tu * ps2.mau > (ll)ps2.tu * ps1.mau;
}

bool operator < (PhanSo ps1, PhanSo ps2)
{
	return (ll)ps1.tu * ps2.mau < (ll)ps2.tu * ps1.mau;
}

bool operator == (PhanSo ps1, PhanSo ps2)
{
	return (ll)ps1.tu * ps2.mau == (ll)ps2.tu * ps1.mau;
}

int main ()
{
	PhanSo ps1, ps2;
	cin >> ps1 >> ps2;
	cout << ps1 << " + " << ps2 << " = " << ps1 + ps2 << endl;
	cout << ps1 << " - " << ps2 << " = " << ps1 - ps2 << endl;
	cout << ps1 << " * " << ps2 << " = " << ps1 * ps2 << endl;
	cout << ps1 << " / " << ps2 << " = " << ps1 / ps2 << endl;
	if (ps1 > ps2) cout << ps1 << " lon hon " << ps2 << endl;
	else if (ps1 < ps2) cout << ps1 << " be hon " << ps2 << endl;
	else cout << "Hai phan so bang nhau" << endl;
	return 0;
}
