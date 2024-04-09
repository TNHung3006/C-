#include <iostream>

using namespace std;

	// khi tạo 1 biến nào đó bản chất của biến đó được lưu trên thanh ram được khởi tạo 1 địa chỉ và sử dụng trên thanh ram
	// địa chỉ đó được truy vấn bằng cách thêm dấu & ở trước biến

#if 0

int main() {

	int x = 730;
	cout << x << '\n';	// in ra giá trị của biến x
	cout << &x << '\n'; // dấu & trong trường họp này là toán tử địa chỉ, in ra địa chỉ của biến x
	
	cout << *&x << '\n'; // in ra giá trị tại địa chỉ bộ nhớ của biến x

	*&x = 20;	// gán giá trị 20 cho giá trị tại địa chỉ của biến x

	cout << x << '\n'; // in ra giá trị của biến x

	return 0;
}
#endif

	// biến con trỏ được khai báo dóng như biến thông thường
	// được khai báo có dấu * giữa kiểu dữ liệu và tên biến
	// khi khai báo 1 biến con trỏ nên đặt dấu * cạnh tên biến
	// khi trả về 1 con trỏ từ hàm nên đặt dấu * cạnh kiểu dữ liệu

#if 0

int main() {

	int *i;	// con trỏ đến 1 địa chỉ chứa giá trị số nguyên
	double *d; // con trỏ đến 1 địa chỉ chứa giá trị số thực

	int *iptr1, *iptr2;

	int* dosomething();
}
#endif

#if 0

int main() {

	int value = 10;
	int* ptr = &value; // khởi tạo con trỏ ptr là địa chỉ của value

	cout << &value << '\n'; // print the address of varible value
	cout << ptr << '\n'; // print the address of varible value
	cout << *ptr << '\n'; // in ra giá trị của ptr bằng giá trị của value

	*ptr = 100; // thay đổi giá trị tại địa chỉ của biến 
	cout << value << '\n'; // khi in lại biến cũng sẽ thay đổi giá trị
}
#endif

#if 0

int main() {
	int Avalue = 5;
	double Bvalue = 7.0;

	int* Aptr = &Avalue;
	double* Bptr = &Bvalue;

	Aptr = &Bvalue; // sai vì con trỏ int không thể trỏ đến địa chỉ của biến double
	Bptr = &Avalue;	// sai vì con trỏ double không thể trỏ đến địa chỉ của biến int
}

#endif	

#if 1

void a(int &A) {
	A++;
}
void a1(int A) {
	A++;
}

int main() {
	int Avalue = 5;
	int Bvalue = 7;

	int* ptr;
	ptr = &Avalue;
	cout << *ptr << '\n';

	ptr = &Bvalue;
	cout << *ptr << '\n';

	a(Avalue);
	a1(Bvalue);

	cout << Avalue << "\t" << Bvalue;

	return 0;

}
#endif	