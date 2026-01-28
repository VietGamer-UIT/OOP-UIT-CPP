/*
 *Đoàn Hoàng Việt (Việt Gamer)
 *Date: 27/01/2026
 *Description: Chương trình quản lý sinh viên cơ bản (OOP C++)
 *Features:
 * 	-Tạo ID tự động (SV001, SV002,...)
 *	-Chuẩn hóa họ tên
 *	-Sắp xếp theo GPA giảm dần
 *	-Nạp chồng toán tử Input / Output
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <algorithm>

using namespace std;

class SinhVien
{
private:
	string id, ten, ns;
	double gpa;
	static int dem;
public:
	SinhVien();
	friend istream& operator >> (istream& in, SinhVien& a);
	friend ostream& operator << (ostream& out, SinhVien b);
	friend bool operator < (SinhVien a, SinhVien b);
	friend void chuanHoaTen(SinhVien&);
	friend void chuanHoaNS(string&);
};

//Hàm chuẩn hóa tên
void chuanHoaTen(SinhVien& a)
{
	string res = "";
	stringstream ss(a.ten);
	string temp;
	while (ss >> temp)
	{
		res += toupper(temp[0]);
		for (int i = 1; i < temp.length(); i++)
			res += tolower(temp[i]);
		res += " ";
	}
	if (!res.empty()) res.erase(res.length() - 1);
	a.ten = res;
}

//Hàm chuẩn hóa ngày sinh
void chuanHoaNS(string& ns)
{
	if (ns[1] == '/') ns = "0" + ns;
	if (ns[4] == '/') ns.insert(3, "0");
}

//Khởi tạo biến tĩnh
int SinhVien::dem = 0;

//Nạp chồng nhập
istream& operator >> (istream& in, SinhVien& a)
{
	SinhVien::dem++;
	string s = to_string(SinhVien::dem);
	while (s.length() < 3)
		s = "0" + s;
	a.id = "SV" + s;
	cout << "Nhap ten: "; in.ignore();
	getline(in, a.ten); chuanHoaTen(a);
	cout << "Nhap ngay sinh: "; in >> a.ns;
	chuanHoaNS(a.ns);
	cout << "Nhap GPA: "; in >> a.gpa;
	return in;
}

//Nạp chồng xuất
ostream& operator << (ostream& out, SinhVien a)
{
	out << a.id << " " << a.ten << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

//Constructor mặc định
SinhVien::SinhVien()
{
	id = ten = ns = "";
	gpa = 0;
}

//GPA giảm dần
bool operator < (SinhVien a, SinhVien b)
{
	return a.gpa > b.gpa;
}

int main()
{
	int n; cin >> n;
	vector<SinhVien> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	for (SinhVien x : a) cout << x;
	return 0;
}
