#include <iostream>

using namespace std;

//câu 1:
//int S1(int n) {}

//câu 7:
//int LaiSuat(int n, int a, int b, int X) {
//	if (n == 0) return X;
//	for (int i = 1; i <= n; i ++) {
//		X += a;
//		if (i % 10 == 0) {
//			X += b;
//		}
//	}
//	return X;
//}

int Y(int X, int N, int a, int b)
{
	if (N == 0) return X;
	if (N % 10 == 0) return Y(X, N - 1, a, b) + a + b;
	return Y(X, N - 1, a, b) + a;
}




////câu 8:
//int S8(int n) {
//	if (n == 0) return 0;
//	if (n == 1) return 1;
//	return pow((S8(n - 1) + (S8(n - 2))), 2) + pow((S8(n - 1) - (S8(n - 2))), 2);
//
//}
// 
////câu 9: hỗ tương 
//int Yn(int n);
//int Xn(int n);
//
//int Xn(int n) {
//	if (n == 0) return 1;
//	return 2 * Xn(n - 1) + 3 * Yn(n - 1);
//}
//int Yn(int n) {
//	if (n == 0) return 1;
//	return 3 * Xn(n - 1) - 2 * Yn(n - 1);
//}
//
//
////câu 10;
//int giaithua(int n) {
//	if (n == 1) return 1;
//	return n * giaithua(n - 1);
//}
//
//int X(int n)
//{
//	if (n == 0) return 1;
//	int Sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		Sum += giaithua(n - i) * X(i);
//	}
//	return Sum;
//}

int main() {
	int n;
	cout << "nhap n :";
	cin >> n;
	//cout << "Lai suat ngan hang: " << LaiSuat(n, 3, 5, 150);
	cout << "Lai suat ngan hang: " << Y(150, n, 3, 5);
	//cout << "S8 = " << S8(n) << endl;
	//cout << "S9 = " << Xn(n) << endl;
	//cout << "S10 = " << X(n) << endl;
	return 0;

}

