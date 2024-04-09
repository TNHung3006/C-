#include <iostream>
#include <iomanip>

using namespace std;

//int main() {
//	double a{7};
//	int b(7);		// 3 kiểu khai báo giống nhau
//	int c = 7;
//	char d('7');	// khởi tạo biến character với kí tự 7 ( mã ASCII 55 )
//	char e(7);		// khởi tạo  biến character với mã ASCII 7 ( tiếng )
//	cout << setprecision(10) << d << endl; 
//}

//int main() {
//	char a{ 75 }; // in ra kí tự K trong mã ASCII 
//	char b('K');  // in ra trực tiếp kí tự K // chỉ được khởi tạo 1 kí tự trong dấu nháy đơn 
//	cout << a << "\n" << b << endl;
//}

//int main() {  // static_cast ép kiểu
//	int n(75);
//	cout << static_cast<char>(n) << endl; // in kí tự K với mã ASCII 75
//	char a('K');
//	cout << static_cast<int>(a) << endl; // in ra mã ASCII với kí tự 'K'
//}

int main() {
	bool a = true;
	bool b = false; 
	bool c = 730; // in 1 ra màn hình // giá trị khác 0 thì sẽ mặt định là đúng 
	bool d = 0; // in 0 ra màn hình
	cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << !a << "\n" << !b << "\n";
}