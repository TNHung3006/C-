#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <ostream>

using namespace std;

// hàm void kiểu trả về đối với hàm, ko có mục đích tính toán thì sử dụng void và ko có return giá trị
// các hàm có thể gọi chéo lẫn nhau
// khi gặp lệnh return thì hảm trả về giá trị ngay lập tức
// mọi dòng lệnh bên dưới return sẽ được bỏ qua
// không thể return được nhiều giá trị
// có thể gọi hàm nhiều lần

// tham chiếu là một loại biến hoạt động như 1 bí danh của biến
// khai báo tham chiếu bằng cách sử dụng kí hiệu & giữa kiểu dữ liệu và tên biến



#if 0	// ví dụ
void xinchao(int a) {
	cout << a << '\n';
}
int main() {
	int x(10);
	for (int i = 0; i < 20; i += 2) { // in ra 10 lần abc
		//xinchao();// gọi hàm thì hàm xinchao ở trên sẽ thực hiện 
	}
	xinchao(x);
	xinchao(50);
	xinchao(x + 50);
	return 0;
}	
#endif

#if 0	// truyền giá trị

void socogiatrila(int a) {	// int a là tham số
	a += 100;
	cout << a << '\n';
}

int main() {
	int b = 710;
	socogiatrila(b); // giá trị b là đối số và thực hiện gán giá trị 710 cho a
	return 0;
}
#endif

#if 1	// truyền tham chiếu

void ABC(int x) {

	cout << "x = " << x << '\n';

	x = 69;

	cout << "x = " << x << '\n';
}
int main() {
	int y(1);
	cout << "y = " << y << '\n';

	ABC(y);

	cout << "y = " << y << '\n';

	return 0;
}


#endif

#if 0
void tong(int a, int b, int c) { // các tham số có thể các kiểu và bao nhiêu cũng được
	cout << a + b + c << endl;
}
int main() {
	float n = 100, m = 200.0695, e = 300.324; // dù dưới đay là float nhưng mà trên ham tổng là int nên vẫn in ra số nguyên
	tong(n, m, e);// gọi hàm và gán giá trị theo thứ tự cho a b c, rồi thực hiện hàm tong ở trên
}
#endif


#if 0
void tang(int b) {
	b += 10;
	cout << b << endl; // nếu in b thì ra 210 còn nếu in a thì chỉ ra 200 vì nó chỉ gán b = a = 200 lúc này là a thì không thực hiện được câu lệnh b += 10;
}
int main() {
	int a = 200;
	tang(a);
	return 0;
}	
#endif

#if 0
// ví dụ tính S = 1 + 2 + 3 + 4 ... n
	int tong(int n) {
	return n * (n + 1) / 2; // công thức tính tổng các chữ số liên tiếp nhau từ 1 đến n						
	// muốn trả về 1 giá trị nào đó thì dùng câu lệnh return
	// sau khi gặp câu lệnh return  thì hàm sẽ kết thúc và trả về giá trị của câu lệnh return thực hiện.
}
int main() {
	int a; cin >> a; 
	int S = tong(a); // gọi hàm
	cout << S << endl;
	return 0;
}	
#endif

#if 0

	// xây dựng hàm kiểm tra số nguyên tố

bool nt(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
		return false;
	}
	return n > 1;
}
int main() {
	for (int i = 1; i <= 100; i++) {
		if (nt(i) == true) {
			cout << i << '\n';
		}
	}
}

#endif

#if 0
// ví dụ kiểm tra xem tong chu so cua 1 so co phai la so nguyen to hay khong?

// khai bao nguyen mau ham

// khi khai báo nguyên mãu hàm thì hàm ở dưới có thể thay đổi vị trí

bool nt(int);
bool check(int);	


bool nt(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return n > 1;
}

bool check(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}	cout << sum << endl;
	if (nt(sum))
		return true;
	else return false;
}
int main() {
	int n = 124;
	if (check(n))
		cout << 1 << endl;
	else cout << 0 << endl;
	return 0;
}	
#endif

#if 0

int tong(int n) {
	++n;
}
int main() {
	int a = 124;
	tong(a);
	cout << a << endl;
	return 0;
}	
#endif

#if 0

int tong(int a, int b) {
	return a + b;
}

float tong(float a, float b) {
	return a + b;
}

int main() {							
	int m = 100.3, n = 200.4;			//	nếu cùng tên hàm mà gọi hàm thì nó sẽ lựa chọn hàm phù hợp để tính (cùng kiểu dữ liệu)
	
	cout << tong(m, n) << '\n';

	return 0;
}

#endif

#if 0

int tong(int& n) {	// nếu thêm & vào trước giá trị n thì nó sẻ thay đổi giá trị cả biến a
	++n;
	return n;
}

int main() {
	int a = 124;
	tong(a);
	cout << a << endl;
	return 0;
}
#endif

#if 0
// tính tổng S = 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/n

float tong(int n) {
	float a = 0;
	for (int i = 1; i <= n; i++) {
		a += 1.0 / i;
		cout << a << endl;
	}
	return a;
}
int main() {
	int n; cin >> n;
	cout << tong(n) << '\n';
}
#endif

#if 0

int yasir(int a) {
	int b = 0;
	b = a + 1;
	return b;
}

int main() {
	int c = 730;
	
	cout << yasir(c) << '\n';
	return 0;
}
#endif

#if 0

bool kiemtrant(int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2;i * i <= n;i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main() {
	int b = 100;
	for (int i = 1; i < b; i++){
	cout << kiemtrant(b) << '\n';
	}
	return 0;
}
#endif

