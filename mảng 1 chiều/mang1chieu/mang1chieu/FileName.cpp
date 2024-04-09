#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;


// 
// kieu_dulieu + tenmang[so luong phan tu cua mang]; 
// đối với mãng có n phần tử thì nó sẽ chạy từ 0 -> n-1
// tenmang[index]
// chỉ số bắt đàu từ 0 và cuối cùng là 99
// void khai báo mảng
// khai báo mảng trong đó tất cả các giá trị bằng 0 : int a[n] = {0};
// mảng có 10 giá trị nhưng chỉ khởi tạo 3 phần tử thì 7 phần tử sau đó sẽ bằng 0

//	*** Lưu ý ***
// 
// phải xác định < số phần tử > cụ thể (hằng số) khi khai báo.
// Nên sử dụng tiền xử lí #define để định nghĩa <số phần tử> mảng.
// bộ nhớ sử dụng = < tổng số phần tử > * sizeof(<kiểu cơ sở>).
//

#define abc 10007

#if 0

	//int a[100];  khai báo mãng có 100 phần tử
int main() {
	int a[7] = { 7, 6, 5, 4, 3, 2, 1 }; // khởi tạo 7 phần tử cho mãng b 
	cout << a[3] << endl;// in ra 4 ở thứ tự 3 theo thứ tự tăng dần từ 0 -> n(phần tử) - 1
}
#endif

#if 0
// vd cho mảng có 7 phần  tử và liệt kê 7 phần tử 1 2 3 4 5 6 7

int main() {
	int n; cin >> n;
	int* a = new int[n]; // c++ thì ghi int a[n] là được
	for (int i = 0; i < n; i++) {
		cin >> a[i]; // nhập giá trị cho phần tử o cho số i

	}
	for (int i = 0; i < n; i++) {	// for (int i = n - 1; i >= 0; i--){} duyệt mảng từ số cuối về đầu
		sort(a + 0, a + 7);	// sắp xếp lại các phần tử trong mảng
		cout << a[i] << " ";
	}
}

#endif

#if 0
// vd cho mảng có 7 phần  tử và liệt kê 7 phần tử 1 2 3 4 5 6 7 và tính tổng các phần tử này

int main() {
	int n; cin >> n;
	int* a = new int[n]; // c++ thì ghi int a[n] là được
	for (int i = 0; i < n; i++) {
		cin >> a[i]; // nhập giá trị cho phần tử o cho số i

	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << sum << '\n';
}

#endif

#if 0

#define a 10

int main() {
	int b[10];
	cout << a * sizeof(b);
}

#endif

#if 1
// vd kiểm tra các số nguyên tố trong mảng

bool nt(int n) {
	for (int i = 1; i < sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return n > 1;
}
int main() {
	int n; cin >> n;
	int a[abc];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (nt(a[i]))
			cout << a[i] << " ";
	}
	return 0;
}
#endif

// hoặc

#if 0

// for each ( nên dùng trường hợp trên)

bool nt(int n) {
	for (int i = 0; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return n > 1;
}
int main() {
	int n; cin >> n;
	int* a = new int[n];
	for (int& c : a) {
		cin >> c;
	}
	for (int b : a) {  // for each

		cout << b << " ";
	}
	return 0;
}
#endif