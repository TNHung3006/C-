#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <ostream>

using namespace std;

		 
		// trình biên dịch sẽ biên dịch từ trên xuống dưới
		// nên đặt hàm main ở cuối chương trình
		
		// tiền khai báo và nguyên mẫu hàm trong c++
		// tiền khai báo giúp compiler biết được sự tồn tại của một định danh trước khi định nghĩa nó 

		// khai báo là giới thiệu sự tồn tại của một định danh và mô tả nó và có thể khai báo nhiều lần.
		// khai báo giúp compiler biết được sự tồn tại của một định danh trước khi định nghĩa nó. compiler không cần phải cấp vùng nhớ khi khai báo.

		// khai báo biến thì dùng từ khoá extern có thể khai báo nhiều lần
		// VD: extern int a;  khi đặt từ khoá extern ở phía trước thì trình biên dịch ko cần phải cấp vùng nhớ
		
		// khai báo hàm thì dùng từ khoá extern hoặc không đều được nó đều không cấp vùng nhớ khi khai báo
		// VD: extern double xyz(int a);	hoặc	double xyz(int a)  cả 2 đều giống nhau
		// 
		// khai báo lớp dùng từ khoá class
		
		// định nghĩa là trình bày rõ kiểu dữ liệu hoặc giá trị khởi tạo của biến (variables), 
		// cấu trúc và nội dung của hàm(functions), lớp(class). Compiler cần phải cấp vùng nhớ khi định nghĩa và chỉ định nghĩa 1 lần



#if 0		// vd khai báo hàm lỗi

int main() {
	
	printvalue(730);		// nếu đặt printvalue ở đay thì bộ nhớ chưa tháy được hàm printvalue ở đau nên chương trình sẽ lỗi

	return 0;
}
void printvalue(int a) {	// để khắc phục thì ta nên đặt hàm này lên trên hàm main 

	cout << a << '\n';
}
#endif

#if 0		// vd khai báo hàm bình thường

void printvalue(int a) {	

	cout << a << '\n';
}

int main() {

	printvalue(730);	// chương trình sẽ ko lỗi vì khi gọi hàm thì bộ nhớ đã tháy được hàm printvalue ở trên đàu chương trình

	return 0;
}
#endif

#if 0	// vd khai báo hàm lỗi

void yasuo() {
	cout << "yasir\n";

	yone();			// chương trình vẫn lỗi vì biên dịch từ trên xuống dưới và ko tháy hàm yone ở đau hết
}

void yone() {
	cout << "chac chan la nhu vay roi\n";

	yasuo();
}

int main() {		// hàm main đã nằm dưới thoả mãn điều kiện 
	yasuo();		
	return 0;
}

#endif

#if 0

void yone();	// nguyên mãu hàm giúp cho trình biên dịch biến được định danh chưa định nghĩa
void yasuo();	// nếu hàm yone hoặc yasuo có tham số thì mình cũng thêm tham số đó vào nguyên mẫu hàm

void yasuo() {
	cout << "yasir\n";

	yone();			
}

void yone() {
	cout << "chac chan la nhu vay roi\n";

	yasuo();
}

int main() {		
	yasuo();
	return 0;

#endif

#if 0

void printvalue(int x);	// tiền khai báo cho 2 hàm ở dưới
void printvalue(int x);	// có thể khai báo nhiều lần
int abc(int x, int y);	// có thể bỏ tên biến x, y

int main() {

	extern int a;		// có thể khai báo nhiều lần
	extern int a;

	int n = 1;	// đay là định nghĩa biến chỉ được định nghĩa 1 lần
	double d;	// đay là định nghĩa biến chỉ được định nghĩa 1 lần

	printvalue(abc(6, 7));
	return 0;
}

void  printvalue(int x) {	// cụm này là định nghĩa hàm
	cout << x << '\n';
}

int abc(int x, int y) {
	return x + y;
}

#endif