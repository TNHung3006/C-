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


class dongvat {
private:
		float chieucao, cannang;
		string ten, mau;
public:
	dongvat();	// hàm khởi tạo				// contructor
	dongvat(float, float, string, string);	// contructor
	void nhap();
	void xuat();
	float getCanNang();
	//~dongvat(); // hàm huỷ					// destructor
};
dongvat::dongvat() {
	chieucao = cannang = 0;
	ten = mau = "";
}

dongvat::dongvat(float a, float b, string c, string d) {
	chieucao = a;
	cannang = b;
	ten = c;
	mau = d;
}
void dongvat::nhap(){
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
	cout << "can nang la: "  << cannang << endl;
	cout << "ten la: " << ten << endl;
	cout << "mau la: " << mau << endl;
}

float dongvat::getCanNang() {
	return this->cannang;
}

bool sosanhchiso(dongvat a, dongvat b) {
	return a.getCanNang() > b.getCanNang();
}

//dongvat::~dongvat() {
//	cout << "doi tuong duoc huy tai day !\n";
//}

#define N 17

int main() {
	/*dongvat A(700, 100, "huucaoco", "vang");
	A.nhap();
	A.xuat();*/

	int n, A;
	cout << "nhap so luong dong vat: ";
	cin >> n;
	dongvat a[N];
	for (int i = 0; i <= n; i++) {
		a[i].nhap();
	}
	sort(a, a + n, sosanhchiso);
	for (int i = 0; i <= n; i++) {
		a[i].xuat();
	}

	return 0;
} 