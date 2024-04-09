#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


// class : lop
// thuoc tinh: attribute
// phương thức: method, behavior
// object: doi tuong
// constructor: ham khoi tao
// destructor: ham huy
// get : láy các thuộc tính
// set : sửa các thuộc tính
//
// this pointer : con trỏ this
// setter getter
// -encapsulation: đóng gói
// -access modifiter:
// -private
// -public
// -protected

int a, b, c, d;


class dongvat {
private:
	float chieucao, cannang;
	string ten, mau;
	static int dem; // không thể gán dem = số bất kì mà khai báo giá trị
public:
	dongvat();	// hàm khởi tạo				// contructor
	dongvat(float, float, string, string);	// contructor
	void nhap();
	void xuat();
	void tangdem();
	int GetDem();
};

int dongvat::dem = 0; // gán biến dem trong static bằng cách này

dongvat::dongvat() {
	chieucao = cannang = 0;
	ten = mau = "";
}

void dongvat::tangdem() {
	++dem;
}

int dongvat::GetDem() {
	return this->dem;
}

dongvat::dongvat(float a, float b, string c, string d) {
	chieucao = a;
	cannang = b;
	ten = c;
	mau = d;
}
void dongvat::nhap() {
	cout << "nhap chieu cao: ";
	cin >> chieucao;
	cout << "nhap can nang: ";
	cin >> cannang;
	cout << "nhap ten: ";
	cin.ignore();				// nếu ở trên đã nhập số mà ở dưới cần dùng getline để nhập chuỗi thì phải có cin.ignore
	getline(cin, ten);
	cout << "nhap mau: ";
	getline(cin, mau);
}
void dongvat::xuat() {
	cout << "chieu cao la: " << chieucao << "\n";
	cout << "can nang la: " << cannang << endl;
	cout << "ten la: " << ten << endl;
	cout << "mau la: " << mau << endl;
}

#define N 17

int main() {
	dongvat x;
	int n;
	cout << "nhap vao so lan tang 1 don vi cua bien dem :";
	cin >> n;
	for (int i = 0; i < n; i++) {
		x.tangdem();
	}
	dongvat y;
	cout << y.GetDem() << endl;
	y.tangdem();
	dongvat z;
	cout << z.GetDem() << "\n" << y.GetDem() << "\n" << x.GetDem();

	return 0;
}