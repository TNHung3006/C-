#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//cout : ostream
//cin : istream

class SinhVien {
private:
	string id, ten, ns;
	double gpa;
public:
	SinhVien();
	friend istream& operator >> (istream& in, SinhVien& a);
	friend ostream& operator << (ostream& out, SinhVien a);
	bool operator < (SinhVien a);
};

bool SinhVien::operator < (SinhVien a) {
	return this->gpa < a.gpa;;
}

SinhVien::SinhVien() {
	id = ten = ns = "";
	gpa = 0;
}

istream& operator >> (istream& in, SinhVien& a) {
	cout << "Nhap id: ";
	in >> a.id;
	cout << "Nhap ten: ";
	in.ignore();
	getline(in, a.ten);
	cout << "nhap ngay sinh: ";
	in >> a.ns;
	cout << "nhap diem: ";
	in >> a.gpa;
	return in;

}
ostream& operator << (ostream& out, SinhVien a) {
	cout << a.id << " " << a.ten << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

int main() {
	SinhVien x, y;
	cin >> x >> y;	// định nghĩa cho hàm istream

	if (x < y) cout << y;
	else
	cout << x;	// định nghĩa cho hàm ostream
}
