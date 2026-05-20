// Câu 1.
// a.phân biệt khái niệm overload(tải chồng) và override(ghi đè) (1đ)
// -Overload: xảy ra trong cùng một lớp. cùng tên hàm nhưng khác danh sách tham
// số. Trình biên dịch sẽ quyết định gọi hàm nào khi biên dịch.
// -Override: xảy ra giữa lớp cha và lớp con. cùng tên hàm, cùng tham số, 
// và lớp cha bắt buộc phải có từ khóa "virtual". Quyết định gọi hàm nào diễn
// ra lúc chạy.
// b.phân biệt các kiểu kế thừa private, protected và public. (1đ)
// -(Vẽ bảng tầm ảnh hưởng kế thừa).
// -Thuộc tính private của lớp cha thì lớp con không bao giờ truy cập trực
// tiếp được.
// -Kế thừa public: giữ nguyên bản chất. Cha public -> Con public. Cha
// protected -> Con protected.
// -Kế thừa protecdted: kéo quyền xuống. Cha public hay protected thì đều biến
// thành protected trong lớp con.
// -Kế thừa private: giấu  hết. Cha public hay protected đều biến thành private
// trong lớp con.

// Câu 2.
// Xây dựng lớp thời gian(giờ, phút, giây) với các toán tử >> , << để nhập xuất và toán tử
// ++ để tăng thời gian thêm 1 giây(3đ)
//#include <iostream>
//
//using namespace std;
//
//class CTime {
//private:
//	int gio, phut, giay;
//	int tongGiay(int h, int m, int s) {
//		return h * 3600 + m * 60 + s;
//	}
//	void chuanHoa(int tongGiay) {
//		gio = (tongGiay / 3600) % 24;
//		phut = (tongGiay / 60) % 60;
//		giay = tongGiay % 60;
//	}
//public:
//	CTime(int h = 0, int m = 0, int s = 0) : gio(h), phut(m), giay(s) {
//		int tongGiay = h * 3600 + m * 60 + s;
//		chuanHoa(tongGiay);
//	}
//	friend istream& operator>>(istream& in, CTime& ct) {
//		cout << "Nhap gio: ";
//		in >> ct.gio;
//		cout << "Nhap phut: ";
//		in >> ct.phut;
//		cout << "Nhap giay: ";
//		in >> ct.giay;
//		ct.chuanHoa(ct.tongGiay(ct.gio, ct.phut, ct.giay));
//		return in;
//	}
//	friend ostream& operator<<(ostream& out, const CTime& ct) {
//		out << ct.gio << "h" << ct.phut << "m" << ct.giay << "s";
//		return out;
//	}
//	friend CTime& operator++(CTime& ct) {
//		int tong = ct.tongGiay(ct.gio, ct.phut, ct.giay) + 1;
//		ct.chuanHoa(tong);
//		return ct;
//	}
//};