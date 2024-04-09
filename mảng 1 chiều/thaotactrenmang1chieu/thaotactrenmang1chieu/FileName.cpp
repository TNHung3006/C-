#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// lưu ý khi truyền mảng vào hàm:
// tham số kiểu mảng trong khai bá hàm giống như khai báo biến mảng
// vd: void nhapmang(int a[100]); có thể bỏ đi số lượng phần tử
// tham số kiểu mảng truyền cho hàm chính là địa chỉ của phần tử đàu tiên của mảng.

#define MAX 1000
//
//void nhapMang(int arr[], int& n);
//void xuatMang(int arr[], int n);
//void saochepmangmotchieu(int arrDest[], int arrSource[], int n);
//int timkiemPhanTuDauTien(int arr[], int n, int x);
//void hoanVi(int& a, int& b);
//void sapxepmang(int arr[], int n);
//void themMotPhanTuVaoMang(int a[], int& n, int idx, int x);
//void xoaMotPhanTuTrongMang(int a[], int &n, int idx);

#if 1
// hàm nhập mảng
void nhapMang(int arr[], int& n)
{
	// khởi tạo số ngẫu nhiên
	srand(time(NULL));

	cout << "Nhap so luong phan tu n : ";
	cin >> n;

	// khởi tạo ngẫu nhiên từng phần tử từ chỉ số 0 đến n – 1
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();	// trả về số ngẩu nhiên từ 0 -> 32767
	}
}

// hàm xuất mảng
void xuatMang(int arr[], int n)
{
	// xuất từng phần tử cho mảng từ chỉ số 0 đến n – 1
	for (int i = 0; i < n; i++)
	{
		cout << "array[" << i << "] = " << arr[i] << endl;
	}
}

#endif

#if 1
// sao chép mảng nguồn sang mảng đích
void saoChepMangMotChieu(int arrDest[], int arrSource[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arrDest[i] = arrSource[i];
	}
}

// tìm kiếm phần tử x đầu tiên trong mảng
int timKiemPhanTuDauTien(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			return i;
	}

	return -1;
}

#endif

#if 1
// hoán vị giá trị 2 biến số
void hoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

// sắp xếp mảng tăng dần bằng thuật toán interchange sort
void sapXepTang(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
				hoanVi(arr[i], arr[j]);
		}
	}
}

// thêm phần tử x vào mảng tại vị trí idx
void themMotPhanTuVaoMang(int a[], int& n, int idx, int x)
{
	if (idx >= 0 && idx <= n)
	{
		for (int i = n; i > idx; i--)
			a[i] = a[i - 1];
		a[idx] = x;
		n++;
	}
}

// xóa một phần tử trong mảng tại vị trí idx
void xoaMotPhanTuTrongMang(int a[], int& n, int idx)
{
	if (idx >= 0 && idx < n)
	{
		for (int i = idx; i < n - 1; i++)
			a[i] = a[i + 1];
		n--;
	}
}

#endif

int main()
{
	int myArray[MAX]; // mảng myArray có MAX phần tử
	int nSize; // nSize là số phần tử được sử dụng, do user nhập


	// nhập mảng myArray tự động
	nhapMang(myArray, nSize);


	// xuất mảng myArray
	cout << "myArray: " << endl;
	xuatMang(myArray, nSize);

	int myArray2[MAX];


	// sao chép mảng myArray sang myArray2
	cout << "sau khi sao chep: \n";
	saoChepMangMotChieu(myArray2, myArray, nSize);
	xuatMang(myArray2, nSize);

	int y;
	cout << "Nhap phan tu y can tim: ";
	cin >> y;

	// tìm kiếm phần tử x đầu tiên trong mảng
	int idx1 = timKiemPhanTuDauTien(myArray, nSize, y);
	if (idx1 != -1)
		cout << "y nam tai vi tri thu: " << idx1 << endl;
	else cout << "khong tim thay gia tri y \n";


	// sắp xếp mảng tăng
	cout << "sau khi sap xep xong: \n";
	sapXepTang(myArray, nSize);
	xuatMang(myArray, nSize);


	// thêm 1 phần tử vào mảng
	int idx;
	cout << "Nhap vi tri can them: ";
	cin >> idx;
	int x;
	cout << "Nhap gia tri can them: ";
	cin >> x;
	themMotPhanTuVaoMang(myArray, nSize, idx, x);
	// xuất mảng sau khi thêm
	cout << "myArray: " << endl;
	xuatMang(myArray, nSize);


	// xoá 1 phần tử vào mảng
	cout << "nhap vi tri can xoa: ";
	int idx2; cin >> idx2;
	xoaMotPhanTuTrongMang(myArray, nSize, idx2);
	// xuất mảng sau khi xóa
	cout << "sau khi xoa 1 phan tu trong mang: \n";
	cout << "myArray: " << endl;
	xuatMang(myArray, nSize);

	return 0;
}

