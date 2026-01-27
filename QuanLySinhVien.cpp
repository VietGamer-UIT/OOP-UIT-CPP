/*
 *Doan Hoang Viet (Viet Gamer)
 *Date: 27/01/2026
 *Description: Chuong trinh quan ly sinh vien co ban (OOP C++)
 *Features:
 * 	-Tao ID tu dong (SV001, SV002,...)
 *	-Chuan hoa ho ten
 *	-Sap xep theo GPA giam dan
 *	-Nap chong toan tu Input / Output
 */
 
#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
	private:
		string id, ten, ns;
		double gpa;
		static int dem;
	public:
		SinhVien ();
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien b);
		friend bool operator < (SinhVien a, SinhVien b);
		friend void ChuanHoaTen(SinhVien&);
		friend void ChuanHoaNS(string&);
};

//Ham chuan hoa ten
void ChuanHoaTen(SinhVien &a)
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

//Ham chuan hoa ngay sinh
void ChuanHoaNS(string &ns)
{
	if (ns[1] == '/') ns = "0" + ns;
	if (ns[4] == '/') ns.insert(3, "0");
}

//Khoi tao bien tinh
int SinhVien::dem = 0;

//Nap chong nhap
istream& operator >> (istream &in, SinhVien &a)
{
	SinhVien::dem++;
	string s = to_string(SinhVien::dem);
	while (s.length() < 3)
		s = "0" + s;
	a.id = "SV" + s;
	cout << "Nhap ten: "; in.ignore();
	getline(in, a.ten); ChuanHoaTen(a);
	cout << "Nhap ngay sinh: "; in >> a.ns;
	ChuanHoaNS(a.ns);
	cout << "Nhap GPA: "; in >> a.gpa;
	return in;
}

//Nap chong xuat
ostream& operator << (ostream &out, SinhVien a)
{
	out << a.id << " " << a.ten << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

//Constructor mac dinh
SinhVien::SinhVien()
{
	id = ten = ns = "";
	gpa = 0;
}

//GPA giam dan
bool operator < (SinhVien a, SinhVien b)
{
	return a.gpa > b.gpa;
}

int main ()
{
	int n; cin >> n;
	vector<SinhVien> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	sort(a.begin(), a.end());
	for (SinhVien x : a) cout << x;
	return 0;
}
