#include <iostream>
#include <iomanip>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm> // thư viện của sort
using namespace std;

			
			// lệnh goto	// hạn chế sử dụng dễ gây rối
			// 
			// câu lệnh goto phải nằm trong 1 hàm
			// 
			// có 2 dạng goto 
			// 
			// goto tới trước và goto về sau
			// 
			// goto label;
			// ...
			// label:
		

#if 1	// kiểm tra số nguyên dương

int main() {

	int n;

	goto abcd;		// goto tới

yasir: // nhãn // có thể đặt tên nhãn bất kì

	cout << "nhap vao 1 so bat ki\n";
	cin >> n;

	if (n < 0) {
		goto yasir;	// dạng goto về sau	// tới đây nó sẽ quây lại yasir và tiếp tục nhập n đến khi nào có số nguyên dương thì nó sẽ dừng
	}
	cout << n << " la so nguyen duong\n";

abcd:
	cout << "xin chao\n";
}
#endif