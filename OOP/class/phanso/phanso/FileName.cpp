#include <iostream>
#include <math.h>

using namespace std;

class phanso{
private:
	
public:
	int tuso, mauso;
	phanso tong(phanso);
	phanso hieu(phanso);
	phanso nhan(phanso);
	phanso chia(phanso);
	phanso(int, int);
	void nhap();
	void xuat();
	void rutgon();
};

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

void phanso::nhap() {
	cout << "nhap tu so: ";
	cin >> tuso;
	cout << "nhap mau so: ";
	cin >> mauso;
}
void phanso::xuat() {
	if (tuso == 0) cout << 0 << endl;
	else if (mauso == 0) cout << "loi" << endl;
	else
		if (tuso == mauso) cout << 1 << endl;
		else
		{		
			this->rutgon();
			if (mauso == 1) cout << tuso << endl;
			else
				if (tuso < 0 && mauso < 0)
					cout << abs(tuso) << "/" << abs(mauso) << endl;
				else
					if (tuso > 0 && mauso < 0)
						cout << -1 * tuso << "/" << abs(mauso) << endl;
					else
			cout << tuso << "/" << mauso << endl;			
		}
	
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
	x.nhap();
	cout << "phan so x la: ";
	x.xuat();
	cout << "nhap phan so y \n";
	y.nhap();
	cout << "phan so y la: ";
	y.xuat();
		t = x.tong(y);
		h = x.hieu(y);
		n = x.nhan(y);
		c = x.chia(y);
		cout << "tong 2 phan so la: ";
		t.xuat();
		cout << "hieu 2 phan so la: ";
		h.xuat();
		cout << "nhan 2 phan so la: ";
		n.xuat();
		cout << "chia 2 phan so la: ";
		c.xuat();

	return 0;
}