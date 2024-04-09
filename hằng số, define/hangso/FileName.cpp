#include <iostream>
#include <iomanip>
using namespace std;

#if 0

// #if 1 là chỉ thị tiền sử lí if dùng để biên dịch 1 khối lệnh 
// #if 0 là chỉ thị tiền sử lí if dùng để comments lại giống //,/**/
// khai báo 1 hằng số để sử dụng ta sử dụng từ khoá const

int main() {
	const double Pi(3.14159);// khởi tạo hằng số 	//cách 1: cách này thông dụng hơn
	double const speed_of_sound(342.2);				//cách 2: cách này ít thông dụng
	cout << setprecision(3) << "PI = " << Pi << "\n";
}
#endif 

#if 0
int main() {
		const double Pi;			// sai vì hằng số phải được khởi tạo khi khai báo
		const double pi(3.14159);	// khởi tạo hằng số pi
		Pi = 3;						// sai vì hằng số không được thay đổi giá trị
}
#endif

#if 0
int main() {
	int nheight = 155;
	const int HEIGHT(nheight);	// đây cũng là 1 cách để khởi tạo hằng số
}
#endif

#if 0	// code lỗi 
	// hàm in năm sinh, với tham số  hằng year
	void PrintYearOfBirth(const int year) {				// tham số hằng không thể thay đổi khi chạy chương trình
		cout << "Year Of Birth: " << year << endl;		// hằng số không thể bị thay đổi trong hàm
	}
#endif 

	// Định nghĩa 1 hằng số sao cho hợp lí
	
#if 1	// code lỗi
const double PI(3.14159);	// định nghĩa hàm số phạm vi toàn cục

void printPi() {	// định nghĩa hàm print Pi
	cout << "PI = " << PI << endl;
}
int main() {
	cout << "PI = " << PI << endl;
	printPi();
	return 0;
}


#endif