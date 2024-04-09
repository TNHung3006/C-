#include <iostream>
using namespace std;


int main() {

	//FOR
	
// ví dụ tính S = 1 + 2 + 3 + 4 + 5 + ... + n
/*	int n; cin >> n;
	int s = 0;
	for (int i = 1;i <= n; i++) {
		s += i;
		cout << s << endl;
	}*/

// ví dụ nhập vào giá trị n, tính tổng các số nguyên dương không vượt quá n chia hết cho 3
/*	int n; cin >> n;
	int s = 0;
	for (int i = 0; i <= n; i+=3) {
			s += i;
			cout << s << endl;
	} 
		HOẶC 
	int n; cin >> n;
	int s = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0)
			s += i;
			
	} 
		cout << s << endl;*/
// ví dụ tính S = 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/n
	int n; cin >> n;
	float s = 0;
	for (int i = 1; i <= n;i++) {
		s += 1.0/i;
		cout << s << endl;
	}


	// WHILE

// ví dụ đếm số 5342379 có bao nhiêu chữ số
/*	int n = 5342379;
	int a = 0; // biến đếm chữ số
	while (n != 0) { // có thể Viết while (n) cũng được
		++a; // đếm chữ số mỗi lần lặp
		n /= 10;
	}
	cout << a << endl; */
	return 0;
}