#include <iostream>
#include <iomanip>
using namespace std;
/*
Kiểu dữ liệu số;
số nguyên:
// int: 4 byte = 32bit : -2^31 -> 2^31 – 1
// long long: 8 byte = 64bit : -2^63 -> 2^63 – 1
Số thực:
// float: 4 byte
// double: 8 byte
Kí tự:
// char: 1byte : -256 ->255
//bool: true, false
*/
// \n dóng endl đều là in ra xong xuống dòng 
#if 1
int main() {
	
	//cin: nhập 
	//cout: xuất
	int a, b, c;
	cin >> a; // nhap gia tri cho a tu ban phim
	cin >> b >> c;// nhap gia tri cho b,c tu ban phim
	cout << a << " " << b << " " << c << endl;// in ra 
	
	float a = 1.234567891234;
	cout << fixed << setprecision(7) << a << endl; // fixed, setprecision nằm trong thư viện iomanip in ra độ chính xác số thập phân
	
	char kitu; // char kitu = 't'; gán  kitu = t 
	cin >> kitu; // nhập giá trị bằng kí tự
	cout << kitu << endl;
	
	bool oke = true; // bool lưu dữ liệu đúng sai, true = 1, false = 0
	cout << oke << endl;
	return 0;
}
#endif