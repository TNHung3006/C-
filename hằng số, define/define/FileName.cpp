#include <iostream>
using namespace std;

#if 0
// định nghĩa 1 macro bằng chỉ thị tiền sử lí define, có thể sử dụng thay cho const (ko nên dùng)
// #define <tên của hằng số> <giá trị của hằng số>
// vd 
#define ABC 2004 // nên đặt tên bằng chữ in hoa, đối với tên nhièu từ thì dùng dấu _ thay cho khoảng trắng
// define có phạm vi toàn cục 
//

int main() {
	cout << "nam sinh la: " << ABC << '\n';
}
#endif

// lưu í khi sử dụng define làm hằng số vì nó có phạm vi toàn cục và có thể thay đổi giá trị trong quá trình chạy chương trình

#if 0

#define ABC 2004
void printABC();	// khai báo protobyte

int main() {
	cout << "nam sinh la: " << ABC << '\n';	

#define ABC 730 // định nghĩa marco trùng tên, nhưng ko nên
	
	printABC();
	return 0;
}
void printABC() {	// định nghĩa hàm
	cout << "nam sinh la: " << ABC << '\n';
}
#endif