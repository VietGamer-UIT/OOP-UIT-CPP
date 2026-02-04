# 🚀 OOP C++ Journey @ UIT

![C++](https://img.shields.io/badge/Language-C++17-blue.svg?logo=c%2B%2B)
![UIT](https://img.shields.io/badge/School-UIT-green.svg)
![Co-Pilot](https://img.shields.io/badge/AI_Partner-Gemini-orange.svg)

## 👋 Giới thiệu
Chào mừng đến với kho lưu trữ mã nguồn môn **Lập trình Hướng đối tượng (OOP)** của **Đoàn Hoàng Việt (Viet Gamer)** - Sinh viên K20, Khoa Hệ thống Thông tin, Trường Đại học Công nghệ Thông tin (UIT).
Repository này không chỉ là nơi lưu trữ bài tập, mà là hành trình tôi chinh phục tư duy OOP từ cơ bản đến nâng cao, với sự hỗ trợ đắc lực từ AI Thought Partner (Gemini).

---
## 🏆 Dự án đã hoàn thành (Completed Projects)

### 📚 1. Hệ thống Quản lý Thư viện (Library Management System)
* **Thời gian:** Tháng 2/2026
* **Mô tả:** Một ứng dụng Console mô phỏng quy trình quản lý tài liệu tại thư viện trường đại học. Hệ thống giải quyết bài toán tính phí phạt quá hạn cho các loại tài liệu khác nhau.
* **Tính năng chính:**
    * Quản lý hai loại tài liệu: **Sách** (Book) và **Bài báo khoa học** (Research Paper).
    * Nhập/Xuất thông tin chi tiết (Mã, Tên, Số trang, Tên hội nghị...).
    * **Tự động tính tiền phạt:**
        * Sách: 5.000 VNĐ/ngày.
        * Bài báo: 20.000 VNĐ/ngày (Do tính chất tài liệu quý).
    * Tính tổng doanh thu tiền phạt của thư viện.
* **Kỹ thuật OOP áp dụng:**
    * ✅ **Encapsulation:** Sử dụng `protected` và `private` để che giấu dữ liệu nhạy cảm.
    * ✅ **Inheritance:** Class `Sach` và `BaiBao` kế thừa từ Class cha `TaiLieu`.
    * ✅ **Polymorphism:** Sử dụng `vector<TaiLieu*>` và ghi đè hàm `tinhTienPhat()` để xử lý đa hình.
    * ✅ **Abstraction:** Class `TaiLieu` là lớp trừu tượng với hàm thuần ảo.

### 🎓 2. Hệ thống Quản lý Sinh viên (Student Management System)
* **Thời gian:** 27/01/2026
* **Mô tả:** Chương trình quản lý hồ sơ sinh viên cơ bản, tập trung vào việc xử lý và chuẩn hóa dữ liệu đầu vào.
* **Tính năng nổi bật:**
    * **Tự động sinh mã sinh viên:** Sử dụng biến tĩnh (`static variable`) để tạo ID tự động tăng theo định dạng `SV001`, `SV002`...
    * **Chuẩn hóa dữ liệu thông minh:**
        * Họ tên: Tự động chuyển đổi thành dạng Title Case (vd: `nguyen van a` -> `Nguyen Van A`).
        * Ngày sinh: Tự động định dạng chuẩn `dd/mm/yyyy`.
    * **Sắp xếp:** Tự động xếp loại sinh viên theo GPA giảm dần.
* **Kỹ thuật OOP áp dụng:**
    * ✅ **Operator Overloading:** Nạp chồng toán tử nhập (`>>`) và xuất (`<<`) để code trong hàm main ngắn gọn.
    * ✅ **Encapsulation:** Sử dụng `private` cho dữ liệu và các hàm chuẩn hóa nội bộ (`chuanHoaTen`, `chuanHoaNS`).
    * ✅ **Static Members:** Quản lý số lượng sinh viên chung cho toàn bộ lớp.
    * ✅ **Algorithm:** Sử dụng `sort` với `comparator` tùy biến.

---
## 🔮 Roadmap: Những dự án sắp tới (Upcoming)
---

## 🛠️ Công cụ & Môi trường
* **IDE:** Visual Studio 2022
* **Ngôn ngữ:** C++ (Standard 14/17)
* **Quản lý phiên bản:** Git & GitHub

## 🤝 Liên hệ
**Đoàn Hoàng Việt (Việt Gamer)**
* 📧 Email: skyvdygaming@gmail.com
* 🏫 UIT - VNUHCM

> *"Learning OOP is not just about code, it's about thinking in objects."*
