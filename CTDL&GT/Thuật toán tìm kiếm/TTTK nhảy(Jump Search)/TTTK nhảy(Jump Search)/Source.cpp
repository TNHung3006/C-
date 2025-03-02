#include <iostream>
#include <fstream>

using namespace std;

int JumpSearch(int arr[], int n, int k) {
	int d = 2; // d là bước nhảy và là số tự nhiên lớn hơn 1
	int i = 0;
	int j = i + d;
	while (j < n && arr[j] < k) {	// nhảy theo bước d
		j = j + d;
		i = i + d;
	}
	if (j >= n) {
		j = n-1; // tại bước nhảy cuối cùng đặt j bằng n-1.
	}
	while (arr[i] < k) {
		i = i + 1;
		if (i >= n || i > j) return -1;
	}
	if (arr[i] == k) return i;
	return -1;
}

int main() {
	int arr[1070], n = 0, k;
	fstream ht;
	ht.open("mang.txt");
	ht >> k;
	while (ht >> arr[n]) {
		n++;
	}
	cout << "cho k = " << k;
	cout << "\nmang ban dau co dang: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nvi tri cua k la: " << JumpSearch(arr, n, k);

	return 0;
}