#include <iostream>

using namespace std;

#if 0

int main() {

	// VÒNG LẬP FOR
	// 
	// for( khởi đầu, điều kiện lập, bước nhảy){...} nếu đặt break ở cuối vòng lập for thì vòng lập chỉ thực hiện đúng 1 lần
	// Nếu gặp continue thì vòng lập sẽ bỏ những câu lệnh ở sau dòng continue và vòng lập lại những dòng ở trước đến khi đủ điều kiện.


	int i; cin >> i; // có thể bỏ dòng này và thay vào trong for: for(int i = 1; ....){
	for (i; i < 7; i++) {
		cout << " cho la ban khong phai toi \n";
	}
	// vd tìm các số chia hết cho 3
	int n = 40;
	for (int i = 0; i <= 40; i += 3) {
		cout << i << endl;
	}
	// HOẶC
	int n = 48;
	for (int i = n; i >= 0; i -= 3) {
		cout << i << endl;
	}
	// HOẶC
	int x = 60;
	for (int i = 1; i <= x; i++) {
		if (i % 3 == 0) {
			cout << i << endl;
			cout << "yone\n";
			break;
		}
	}
	return 0;
}

#endif

#if 0

int main() {

// ví dụ vòng lập for có continue;
	for (int i = 1; i <= 10; i++) {
		cout << "cho la ban khong phai toi\n";
		continue;
		cout << "may nhin cai choa gi\n";
	}
// ví dụ tính S = 1 + 2 + 3 + 4 + 5 + ... + n
// nếu tính s = 1*1 + 2*2 + 3*3 + 4*4 + ... n*n  thì thay dòng s += i; thành s += i*i;
	int n; cin >> n;
	int s = 0;
	for (int i = 1; i <= n; i++) {
		s += i;
		cout << s << endl;
	}
	return 0;
}
#endif

#if 0

int main() {

// ví dụ nhập vào giá trị n, tính tổng các số nguyên dương không vượt quá n chia hết cho 3
	int n; cin >> n;
	int s = 0;
	for (int i = 0; i <= n; i++) {
		if (i % 3 == 0)
			s += i;
			cout << s << endl;	
	}	*/
// HOẶC 
	int x; cin >> x;
	int a = 0;
	for (int i = 0; i <= x; i += 3) {
		a += i;
		cout << a << endl;
	}
	return 0;
}

#endif

#if 1
// VÒNG LẬP WHILE
// 
// while(){...}  nếu đặt break ở cuối vòng lập for thì vòng lập chỉ thực hiện đúng 1 lần     GIỐNG VÒNG LẬP FOR
// Nếu gặp continue thì vòng lập sẽ bỏ những câu lệnh ở sau dòng continue và vòng lập lại những dòng ở trước đến khi đủ điều kiện.     GIỐNG VÒNG LẬP FOR

int main() {

	int i = 0;
	while (i < 10) {
		cout << i << endl;
		i++; // ++i cũng được
	}
	cout << "gia tri ket thuc vong lap while la: " << i << endl;

// Ví dụ để có 1 vòng lập while vĩnh viễn thì:

	while(0){ // số trong ngoặc khác không là được
		cout << " ...... " << endl;
	}
	return 0;
}
#endif

#if 0 // vd xuất ra tam giác số bằng vòng lập while

int main() {
	
	int a(1);

	while (a <= 10) {
		int b(1);

		while (b <= a) {
			cout << b << " ";
			++b;
		}
		cout << endl;
		++a;
	}
	return 0;
}

#endif

#if 0

int main() {
	int a(0);
	while (a < 10) {

		int b(0);
		while (b < a) {
			cout <<" " << b << " ";
			++b;
		}
		cout << endl;
		++a;
	}
}


#endif

#if 0
int main() {

	int a(100);	// nếu khởi tạo biến lớn hơn điều kiện trong vòng lập while thì nó sẽ ko chạy vòng lập
	while (a <= 10);
	cout << a << '\n';
	return 0;
}
#endif

#if 0

int main() {

// ví dụ đếm số 5342379 có bao nhiêu chữ số
	int n = 5342379;
	int a = 0; // biến đếm chữ số
	while (n != 0) { // có thể Viết while (n) cũng được 
		++a; // đếm chữ số mỗi lần lặp
		n /= 10;
	}
	cout << a << endl;
	return 0;
}
#endif 

#if 0

int main() {

// ví dụ tính tổng các chử số trong 7 chữ số 5342379
	int n = 5342379;
	int s = 0; // tính tổng
	while (n != 0) { // có thể biết while (n) cũng được 
		s += n %= 10;// tính tổng các số mỗi lần lập
		n /= 10;  
	}
	cout << s << endl;
	return 0;
}
#endif

#if 0

// VÒNG LẬP do while  KHÁC while là thực hiện xong rồi mới kiểm tra điều kiện tiếp theo 
// do{ ...
//   } while(...);

int main() {

	int n = 0;
	do {
		cout << n << endl;
		++n;
	} while (0); // 0 là sai nên không lập nữa

	int x = 0;
	do {
		cout << x << endl;
		++x;
	} while (x <= 5);
	return 0;
}
#endif

#if 0

const string ID("abc");
const string Password("abcxyz");

int main() {
	string id;
	string password;

	do {
		system("cls");

		cout << "ID: ";
		getline(cin, id);

		cout << "Password: ";
		getline(cin, password);

	} while (id != ID || password != Password);
	cout << "Login succeed!" << endl;
}

#endif