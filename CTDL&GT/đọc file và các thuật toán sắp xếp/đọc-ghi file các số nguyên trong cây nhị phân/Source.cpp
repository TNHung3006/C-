#include <iostream>
#include <fstream>
#include <istream>

using namespace std;

void selectionSort(int arr[], int n) {	// sắp xếp lựa chọn
	for (int i = 0; i < n - 1; i++) {
		int index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[index]) {		// key code
				index = j;		//VD cho dãy 2 5 1 3
			}
		}
		swap(arr[i], arr[index]);
	}
}
void insertionSort(int arr[], int n) {	// sắp xếp chèn
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] < key) {	//key code
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
void bubbleSort(int arr[], int n) {	// sắp xếp nổi bọt
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {			//key code
				swap(arr[j], arr[j + 1]);	//VD cho dãy 2 5 1 3
			}
		}
	}
}

int main() {
	fstream fs;
	fs.open("TEST.txt");

	//if (fs.is_open()) {
	//	cout << "Mo file thanh cong.\n";
	//}else cout << "mo file that bai.\n";

	////đọc tên và mssv
	//string name;
	//int MSSV;
	//fs >> name;
	//fs >> MSSV;
	//cout << "Name: " << name << endl;
	//cout << "MSSV: " << MSSV << endl;
	//Đọc mảng các số

	int arr[1070], n = 0;
	while (fs >> arr[n]) {
		n++;
	}
	cout << "mang ban dau: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	//selectionSort(arr, n);
	//insertionSort(arr, n);
	bubbleSort(arr, n);

	cout << "mang sau khi sap xep: ";
	for (int i = 0;i < n;i++) {
		cout << arr[i] << " ";
	}

	return 0;
}