#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int BinarySearch(int arr[], int k, int n) {
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
	int arr[1070], n, k = 10;
	cout << "Nhap so luong gia tri trong mang: ";
	cin >> n;
	cout << "Nhap cac gia tri trong mang: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cout << "Mang sau khi sap xep co dang: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nVi tri cua k trong mang la: " << BinarySearch(arr, k, n);

	return 0;
}