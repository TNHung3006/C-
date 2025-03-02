#include <iostream>
#include <math.h>
using namespace std;

#define MAX 10007

void nhapmang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void xuatmang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

int KTMangtoanchan(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) return 0;
	}
	return 1;
}

int LaSnt(int n) {
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int KTSnt(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (LaSnt(arr[i]) == 0) return 0;
	}
	return 1;
}

int KTmangtangdan(int arr[], int n) {
	for (int i = 0; i < n-1; i++) {
		if (arr[i] > arr[i + 1]) return 0;
	}
	return 1;
}

int demso(int arr[], int n) {
	int dem = 0;
	for (int i = 0;i < n; i++) {
		if (arr[i] % 4 == 0 && arr[i] % 5 != 0) dem++;
	}
	return dem;
}

int TongSnt(int arr[], int n) {
	int S = 0;
	for(int i =0; i<n; i++){
		if (LaSnt(arr[i])) S += arr[i];
	}
	return S;
}
int main() {
	int arr[1000], n;
	cout << "nhap so luong phan tu trong mang: ";
	cin >> n;

	cout << "nhap gia tri cac phan tu trong mang: ";
	nhapmang(arr, n);
	cout << "mang co dang la: ";
	xuatmang(arr, n);

	//kiểm tra mảng toàn chẵn
	if (KTMangtoanchan(arr, n)) cout << "\nmang toan so chan ";
	else cout << "\nmang khong toan so chan ";

	//kiểm tra mảng toàn số nguyên tố
	if (KTSnt(arr, n)) cout << "\nmang toan so nguyen to ";
	else cout << "\nmang khong toan so nguyen to ";

	//kiểm tra mảng tăng dần
	if (KTmangtangdan(arr, n)) cout << "\nmang tang dan";
	else cout << "\nmang khong tang dan";

	//kiểm tra mảng có bao nhiêu số chia hết cho 4 và không chia hết cho 5
	cout << "\nso luong phan tu chia het cho 4 va khong chia het cho 5 trong mang la: " << demso(arr, n);

	//Tong cac songuyento
	cout << "\nTong cac so nguyen to la: " << TongSnt(arr, n);

	cout << endl;

	return 0;
}