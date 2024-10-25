#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
#if 1
int main(){
	int a, b, c;
	cout << "nhap vao 3 so nguyen\n";
	cin >> a >> b >> c;
	float delta;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh vo so nghiem\n";
			}else
				cout << "phuong trinh vo nghiem\n";
		}else
			cout << "X = " << -c / b << endl;

	}
	else{
		delta = pow(b, 2) - 4 * a * c;
		if(delta > 0){
			cout << "phuong trinh co 2 nghiem phan biet\n";
			cout << "X1 =" << (-b + sqrt(delta)) / (2 * a) << endl;
			cout << "X2 =" << (-b - sqrt(delta)) / (2 * a) << endl;
		}else 
			if (delta == 0) {
				cout << "Phuong trinh co nghiem kep la: X = " << -b / (2 * a) << endl;
			}
			else
				cout << "phuong trinh vo nghiem";
	}
	return 0;
}
#endif

#if 0
bool nt(int n) {
	for (int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
		return n > 1;
	}
}

int main() {
	int n;
	cout << "nhap so luong: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		if(nt(i)){
			cout << "so nguyen to la: ";
			cout << i <<"\n";
		}
	}
}
#endif



