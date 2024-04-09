#include <iostream>
//#include <iomanip>

using namespace std;
// toán tử trong toán học: +, -, *, /, %
// toán tử tăng giảm 1 đơn vị: ++, --
// ++a tăng trước, a++ tăng sau; --a trừ trước, a-- trừ sau
// toán tử so sánh: > , >= , <, <= , == (toán tử so sánh bằng 2 giá trị bằng nhau thì true, ngược lại false) , != (toán tử khác)
// toán tử logic: AND, OR, NOT
// kí hiệu:   AND: &&;   OR: ||;   NOT: !
int main() {
	/*
	int a = 36, b = 73, c = 71;
	int tong = a + b + c;// tong = 180
	int hieu = a - b - c;// hieu = -108
	int tich = a * b * c;// tich = 186588
	float thuong = (float)c / a;// thuong = 1,9722222 // ép float cho c hoặc a hoặc cả 2 đều được
	int du = b % c;// du = 2
	cout << fixed << setprecision(3) << tong << " " << hieu << " " << tich << " " << thuong << " " << du << endl;
	
	int a = 100, b = 200; 2 cách viết dóng nhau
	a = a + b;// a += b
	a = a - b;// a -= b
	a = a * b;// a *= b
	a = a / b;// a /= b
	a = a % b;// a %= b
	
	int a = 100;
	int b = a++; // gán b bằng 100 trước rồi mới cộng 1 đơn vị cho a => b=100, a=101
	cout << b << " " << a << endl;
	
	int a = 100, b = 200;
	bool yasuo = a > b; // so sánh => true, false
	cout << yasuo << endl;
	*/
	int a = 100, b = 200, c = 300, d = 400;
	int yone = !(a <= b) || (c <= d); // true
	cout << yone << endl;
	return 0;

}