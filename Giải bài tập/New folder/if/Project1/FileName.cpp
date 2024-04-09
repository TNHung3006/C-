#include <iostream>
using namespace std;
int max(int so1, int so2);
int main() {
	int a = 710;
	int b = 730;
	int ketqua;
	ketqua = max(a, b);
	cout << "so lon nhat la: " << ketqua << endl;
	return 0;
}
int max(int so1, int so2) {
	int i;
	if (so1 > so2)
		i = so1;
	else
		i = so2;
	return i;
}