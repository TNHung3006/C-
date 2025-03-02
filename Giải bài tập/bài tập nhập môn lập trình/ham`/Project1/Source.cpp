#include <iostream>
#include <math.h>

using namespace std;

char Kitu(char &n) {
	if (n >= 'A' && n <='Z') {
		n += 32;
	}
	return n;
}

void PhuongTrinhBac2(int a, int b, int c){
	int x;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "phuong trinh co vo so nghiem\n";
			}
			cout << "phuong trinh vo nghiem\n";
		}
		cout << "phuong trinh co nghiem duy nhat la x = " << -c / b << endl;
	}
	else{
		int delta = pow(b, 2) - 4 * a * c;
		if (delta > 0) {
			cout << "phuong trinh co 2 nghiem phan biet\n";
			cout << "x1 = " << (-b + sqrt(delta)) / 2 * b << endl;
			cout << "x2 = " << (-b - sqrt(delta)) / 2 * b << endl;
		}
		if (delta = 0) {
			cout << "phuong trinh co nghiem kep x = " << -b / (2 * a) << endl;
		}
		else
			cout << "phuong trinh vo nghiem\n";
	}
}

int SoNghichDao(int n) {
	int tmp = 0;
	while (n != 0) {
		int x = n % 10;
		tmp = tmp * 10 + x;
		n /= 10;
	}
	return tmp;
}

bool SoChinhPhuong(int n) {
	int tmp = sqrt(n);
	if (tmp * tmp == n) return 1;
	return 0;
}

bool SoNguyenTo(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int SoHoanHao(int n) {
	int S = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) S += i;
	}
	if(S == n) return 1;
	return 0;
}
//bool Sodoixung(int n) {
//	int tmp = 0;
//	int tmp1 = n;
//	while (n != 0) {
//		int x = n % 10;
//		tmp = tmp * 10 + x;
//		n /= 10;
//	}
//	return tmp == tmp1;
//}

int main() {
	int n;
	cout << "nhap vao so nguyen n: ";
	cin >> n;
	
	//chuyển kí tự hoa sang kí tự thường 
	 /* kiểm tra kí tự
		a - z : 97 - 122
		A - Z : 65 - 90
		0 - 9 : 48 - 57      */
	char x;
	cout << "nhap vao ki tu Hoa: ";
	cin >> x;
	cout << "ki tu thuong la: " << Kitu(x) << endl;

	//giải phương trình bậc 2
	int q, w, e;
	cout << "nhap gia tri cua 3 so nguyen:";
	cin >> q >> w >> e;
	PhuongTrinhBac2(q, w, e);

	// kiểm tra số đảo nghịch
	cout << "So nghich dao cua n la: " << SoNghichDao(n) << endl;

	// kiểm tra số đối xứng
	if (n == SoNghichDao(n)) {
		cout << "n la so doi xung" << endl;
	}
	else
		cout << "n khong phai la so doi xung" << endl;

	//kiểm tra số chính phương vd 4 = 2^2, 25 = 5^5.
	if (SoChinhPhuong(n)) {
		cout << "n la so chinh phuong" << endl;
	}
	else
		cout << "n khong phai la so chinh phuong" << endl;

	//kiểm tra số nguyên tố
	if (SoNguyenTo(n)) {
		cout << "n la so nguyen to" << endl;
	}
	else
		cout << "n khong phai la so nguyen to" << endl;

	//tong cac chu so nguyen to
	int S = 0;
	for (int i = 1; i <= n; i++) {
		if (SoNguyenTo(i)) {
			S += i;
		}
	}
	cout << "tong cac chu so nguyen to la: " << S << endl;

	//kiểm tra số hoàn hảo. Số hoàn hảo là số mà tổng các ước của nó bằng chính nó.
	if (SoHoanHao(n)) {
		cout << "n la so hoan hao\n";
	}
	cout << "n khong phai la so hoan hao\n";

	return 0;
}		