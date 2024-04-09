#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


#define ROW 2
#define COL 3

// lưu í các thao tác liên quan đến mảng 2 chiều thường sẽ dùng 2 vòng lập

#if 0

int main() {	// cách xuất mảng 2 chiều

	// có nhiều cách khởi tạo

	int a[ROW][COL];	// cách 1

	int b[3][3] = {		// cách 2
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int c[][COL] = { {1, 2, 3}, {7, 8}, {9} };		// cách 3 // ko thể để trống cả 2 chỉ đc để 1

	// gán giá trị cho mảng 2 chiều

	b[0][1] = 69;
	b[0][2] = 96;
	b[1][0] = 67;
	b[2][1] = 76;

	// xuất mảng a
	cout << "mang a la: \n";
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

	// xuất mảng b
	cout << "mang b la: \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << b[i][j] << "\t";
		}
		cout << endl;
	}

	// xuất mảng c
	cout << "mang c la: \n";
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << c[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}

#endif

#if 0 // nhập phần tử cho mảng 2 chiều
int main() {

	int a[ROW][COL];

	srand(time(NULL));

	cout << "nhap gia tri cac phan tu vao mang: \n";
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
	cout << "Array: \n";
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
#endif

#if 1
int main() { // nhập hàng và cột của mảng 2 chiều, phần tử random

	int a[ROW][COL];

	srand(time(NULL));
	int row, col;
	cout << "nhap so hang: ";
	cin >> row;
	cout << "nhap so cot: ";
	cin >> col;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			a[i][j] = rand() % 1000 + 1;
		}
	}
	cout << "Array: \n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
#endif