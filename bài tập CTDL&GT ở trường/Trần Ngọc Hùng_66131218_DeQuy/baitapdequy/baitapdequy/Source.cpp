#include <iostream>
#include <math.h>

using namespace std;

//chương trình fibonacy
long fibo(int n) {
	if (n == 0 || n == 1) return 1;
	else return fibo(n - 1) + fibo(n - 2);
}

//Bài 1
float S1(int n) {
	if (n == 1) return 1;
	else return S1(n - 1) + float(1) / n;
}

//Bài 2
int S2(int n) {
	if (n == 1) return 3;
	else return S2(n - 1) * (2 * n + 1);
}

//Bài 3
int S3(int n) {
	if (n == 1) return 1;
	else return S3(n - 1) + pow(-1, n + 1) * n;
}

//hàm giai thừa theo kiểu đệ quy
int giaithua1(int n) {
	if (n == 1) return 1;
	return n * giaithua(n - 1);
}

//hàm giai thừa thông thường
int giaithua(int n) {
	int S = 0;
	for (int i = 1; i <= n; i++) {
		S *= i;
	}
	return S;
}
//Bài 4
int S4(int n) {
	if (n == 1) return 1;
	else return S3(n - 1) + giaithua(n);
}

//int dem(int n) {
//	int count = 0;
//	while (n >= 10) {
//		n = n / 10;
//		count++;
//	}
//	return count;
//}

//Bài 5
int S5(int n) {
	if (n == 0) return 0;
	else return 1 + S5(n / 10);
}

// Bài 6
int USCLN(int a, int b) {
	if (b == 0) return a;
	else return USCLN(b, a % b);
}

int BSCNN(int a, int b) {
	if (b == 0) return a;
	else return (a * b) / USCLN(a, b);
}

// Bài 7
int S7(int X, int a, int b, int N) {
	if (N < 1) return X;
	else if (N % 10 == 0) return S7(X, a, b, N - 1) + a + b;
	else return S7(X, a, b, N - 1) + a;
}

//Bài 8
int S8(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	else return pow(S8(n - 1) + S8(n - 2), 2) + pow(S8(n - 1) - S8(n - 2), 2);
}

//Bài 9
int X(int n);
int Y(int n);

int X(int n) {
	if (n == 0) return 1;
	else return 2 * X(n - 1) + 3 * Y(n - 1);
}
int Y(int n) {
	if (n == 0) return 1;
	else return 3 * X(n - 1) - 2 * Y(n - 1);
}

//Bài 10
int S10(int n) {
	if (n == 0) return 1;
	else {
		int S = 0;
		for (int i = 0; i < n; i++) {
			S += giaithua1(n - i) * S10(i);
		}
		return S;
	}
}


int main() {
	int n;
	cout << "nhap n so nguyen: ";
	cin >> n;
	cout << "ket qua de quy la: " << S1(n);

	return 0;
}