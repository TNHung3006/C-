#include <iostream>
#include <math.h>

using namespace std;

class phanso {
private:

public:
	int tuso, mauso;
	phanso tong(phanso);
	phanso hieu(phanso);
	phanso nhan(phanso);
	phanso chia(phanso);
	phanso(int, int);
	friend istream& operator >> (istream &in, phanso& l);
	friend ostream& operator << (ostream &out, phanso l);

	void rutgon();
};

istream& operator >> (istream& in, phanso& l) {
	in >> l.tuso >> l.mauso;
	return in;
}

ostream& operator << (ostream& out, phanso l) {
	if (l.tuso == 0) out << 0 << endl;
	else if (l.mauso == 0) out << "loi" << endl;
	else
		if (l.tuso == l.mauso) out << 1 << endl;
		else
		{
			l.rutgon();

			if (l.mauso == 1) out << l.tuso << endl;
			else
				if (l.tuso < 0 && l.mauso < 0)
					out << abs(l.tuso) << "/" << abs(l.mauso) << endl;
				else
					if (l.tuso > 0 && l.mauso < 0)
						out << -1 * l.tuso << "/" << abs(l.mauso) << endl;
					else
						out << l.tuso << "/" << l.mauso << endl;
		}
	return out;
}

phanso::phanso(int a = 0, int b = 1) {
	tuso = a;
	mauso = b;
}

phanso phanso::tong(phanso k) {
	phanso s;
	if (mauso == k.mauso) {
		s.tuso = k.tuso + tuso;
		s.mauso = mauso;
	}
	else
	{
		s.tuso = tuso * k.mauso + mauso * k.tuso;
		s.mauso = mauso * k.mauso;
	}
	return s;
}
phanso phanso::hieu(phanso k) {
	phanso s;
	if (mauso == k.mauso) {
		s.tuso = k.tuso - tuso;
		s.mauso = mauso;
	}
	else
	{
		s.tuso = tuso * k.mauso - mauso * k.tuso;
		s.mauso = mauso * k.mauso;
	}
	return s;
}

phanso phanso::nhan(phanso k) {
	phanso s;
	s.tuso = tuso * k.tuso;
	s.mauso = mauso * k.mauso;
	return s;
}

phanso phanso::chia(phanso k) {
	phanso s;
	s.tuso = tuso * k.mauso;
	s.mauso = mauso * k.tuso;
	return s;
}



int UCLN(int A, int B) {
	//Nếu A hoặc B = 0 thì UCLN = A+ B
	if (A == 0 || B == 0)
		return A + B;

	//Lặp cho tới khi A = B
	while (A != B) {
		//Lấy số lớn trừ số bé.
		if (A > B) {
			A -= B;
		}
		else {
			B -= A;
		}
	}
	return A;
}
void phanso::rutgon() {
	int a = UCLN(abs(tuso), abs(mauso));
	tuso = tuso / a;
	mauso = mauso / a;
}

int main() {
	phanso x;
	phanso y;
	phanso t, h;
	phanso n, c;
	cout << "nhap phan so x \n";
	cin >> x;
	cout << "phan so x la: ";
	cout << x;
	cout << "nhap phan so y \n";
	cin >> y;
	cout << "phan so y la: ";
	cout << y;
	t = x.tong(y);
	h = x.hieu(y);
	n = x.nhan(y);
	c = x.chia(y);
	cout << "tong 2 phan so la: ";
	cout << t;
	cout << "hieu 2 phan so la: ";
	cout << h;
	cout << "nhan 2 phan so la: ";
	cout << n;
	cout << "chia 2 phan so la: ";
	cout << c;

	return 0;
}