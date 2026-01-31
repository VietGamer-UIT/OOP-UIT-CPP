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
    //Hàm chuẩn hóa tên
    void chuanHoaTen() {
        string res = "";
        stringstream ss(ten);
        string temp;
        while (ss >> temp) {
            res += toupper(temp[0]);
            for (int i = 1; i < temp.length(); i++)
                res += tolower(temp[i]);
            res += " ";
        }
        if (!res.empty()) res.erase(res.length() - 1);
        ten = res;
    }
    //Hàm chuẩn hóa ngày sinh
    void chuanHoaNS() {
        if (ns[1] == '/') ns = "0" + ns;
        if (ns[4] == '/') ns.insert(3, "0");
    }
public:
    //Constructor mặc định
    SinhVien(string id = "", string ten = "", string ns = "", double gpa = 0)
    {
        this->id = id;
		this->ten = ten;
		this->ns = ns;
		this->gpa = gpa;
    }
    friend istream& operator >> (istream& in, SinhVien& a);
    friend ostream& operator << (ostream& out, const SinhVien& a);
    friend bool operator < (const SinhVien& a, const SinhVien& b);
};

//Khởi tạo biến tĩnh
int SinhVien::dem = 0;

//Nạp chồng nhập
istream& operator >> (istream& in, SinhVien& a) {
    SinhVien::dem++;
    string s = to_string(SinhVien::dem);
    while (s.length() < 3) s = "0" + s;
    a.id = "SV" + s;
    cout << "Nhap ten: ";
    getline(in, a.ten);
    a.chuanHoaTen();
    cout << "Nhap ngay sinh: ";
    in >> a.ns;
    a.chuanHoaNS();
    cout << "Nhap GPA: ";
    in >> a.gpa;
    in.ignore();
    return in;
}

//Nạp chồng xuất
ostream& operator << (ostream& out, const SinhVien& a) {
	out << a.id << " " << a.ten << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

//GPA giảm dần
bool operator < (const SinhVien& a, const SinhVien& b) {
    return a.gpa > b.gpa;
}

int main() {
    int n; cin >> n;
    cin.ignore();
    vector<SinhVien> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (const SinhVien& x : a) cout << x;
    return 0;
}
