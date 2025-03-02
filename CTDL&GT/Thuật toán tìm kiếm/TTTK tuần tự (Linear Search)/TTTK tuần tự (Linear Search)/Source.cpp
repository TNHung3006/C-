#include <iostream>
#include <fstream>

using namespace std;

// cho mảng n giá trị và giá trị k tìm 1 số trong mảng sao cho bằng K, nếu không trả về -1;
// Tìm kiếm tuần tự
int LinearSearch(int arr[], int n, int k) {
	for (int i = 0;i < n; i++) {
		if (arr[i] == k) return i;
	}
	return -1;
}
//	Tìm kiếm tuần tự lính canh
int LinearSearch1(int arr[], int n, int k) {
	int i = 0;
	while (arr[i] != k) {
		i++;
	}
	if (i < n) return i;
	return -1;
}

int binarySearch(int arr[], int n, int k) {
	int left = 1, right = n;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == k) return mid;
		else if (arr[mid] < k) left = mid + 1;
		else right = mid - 1;
	}
	return -1;
}

int main() {
#if 0 // theo cách thông thường
	int arr[1007];
	int k = 5, n;
	cout << "nhap so luong gia tri trong mang: ";
	cin >> n;
	cout << "nhap tung gia tri trong mang: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << LinearSearch(arr, n, k);
#endif
	int arr[1070];
	int k;
	int n = 0;
	//theo cách đọc file
	fstream ht;
	ht.open("mangcacso.txt");

	ht >> k;
	//Đọc mảng các số
	while (ht >> arr[n]) {	//đọc từng giá trị của mảng
		n++;
	}
	cout << k << endl;
	//giá trị của mảng
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "vi tri cua K la: " << LinearSearch(arr, n, k);
	cout << "vi tri cua K la: " << LinearSearch1(arr, n, k);

	return 0;
}