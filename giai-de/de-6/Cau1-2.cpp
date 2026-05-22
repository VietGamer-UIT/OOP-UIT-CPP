//Câu 1. Phân biệt các kiểu kế thừa private, protected, public (2 điểm)
// -Kiểu kế thừa public (phổ biến nhất): giữ nguyên bản chất
// +public của cha thì vẫn là public của con.
// +protected của cha thì vẫn là protected của con.
// -Kiểu kế thừa protected: cả public và protected của cha đều biến thành protected ở lớp con, lớp bên ngoài không gọi được nhưng
// các lớp kế thừa thì gọi được.
// -Kiểu kế thừa private: cả public và protected của lớp cha đều biến thành private của con, lớp bên ngoài và lớp kề thừa không
// gọi được.
// -Ví dụ:
// class Nguoi {
// private:
//		float tienTietKiem;
// public:
//		int tuoi;
// protected:
//		string cccd;
// };
// 
// class SinhVien : public Nguoi {
//		//tuoi là public, cccd là protected
// };
// 
// class NhanVien : protected Nguoi {
//		//tuoi va cccd đều là protected
// };
// 
// class KhachHang : private Nguoi {
//		//tuoi va cccd đều biến thành private
// };
// 
//Câu 2. Xây dựng lớp đa thức bậc nhất để thể hiện các đa thức bậc nhất có dạng :
//F(x) = ax + b(a luôn khác 0)
//Xây dựng các phương thức : (3 điểm)
//a.Phương thức cho phép xác định giá trị của đa thức ứng với x = xo(tính F(xo))
//b.Phương thức trả về nghiệm đa thức bậc nhất(nghĩa là F(x) = 0)
//c.Phép toán cộng(operator +) để cộng hai đa thức bậc nhất
//#include <iostream>
//
//using namespace std;
//
//class DaThucBacNhat {
//private:
//	int a, b;
//public:
//	DaThucBacNhat(int _a = 1, int _b = 0) : a(_a), b(_b) {}
//	double giaTriDaThuc(float x0) {
//		return a * x0 + b;
//	}
//	double nghiemDaThuc(){
//		return -(b * 1.0) / a;
//	}
//	DaThucBacNhat operator+(const DaThucBacNhat& other) {
//		DaThucBacNhat res;
//		res.a = a + other.a;
//		res.b = b + other.b;
//		return res;
//	}
//};