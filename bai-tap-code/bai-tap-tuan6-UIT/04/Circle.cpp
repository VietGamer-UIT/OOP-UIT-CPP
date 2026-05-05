#include "Circle.h"
#include <iostream>

using namespace std;

void Circle::Nhap() {
	cout << "Nhap toa do tam hinh tron (x, y): ";
	cin >> x >> y;
	cout << "Nhap do dai ban kinh: ";
	cin >> r1;
	r2 = r1;
}

void Circle::Xuat() {
	cout << "Toa do tam hinh tron (x, y): " << "(" << x << ", " << y << ")" << endl;
	cout << "Do dai ban kinh: " << r1 << endl;
}

void Circle::veHinh() {
	cout << "\n--- HINH ANH MO PHONG ---" << endl;

	// Ép kiểu r1 về số nguyên để vòng lặp chạy được
	int R = (int)r1;

	// Quét các điểm trên trục tọa độ từ -R đến R
	for (int i = -R; i <= R; i++) {

		// Dịch chuyển hình sang phải dựa theo tọa độ x (tùy chọn)
		for (int space = 0; space < x; space++) {
			cout << " ";
		}

		for (int j = -R; j <= R; j++) {
			// Áp dụng công thức đường tròn: i^2 + j^2 <= R^2
			// Cộng thêm một chút sai số (R) để viền hình tròn mượt hơn
			if (i * i + j * j <= R * R + R) {
				cout << "* "; // Thêm khoảng trắng để hình không bị méo (do ký tự cao hơn rộng)
			}
			else {
				cout << "  "; // In khoảng trắng nếu nằm ngoài hình tròn
			}
		}
		cout << endl; // Xuống dòng
	}
}