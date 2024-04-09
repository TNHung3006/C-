#include <iostream>
#include <string>

using namespace std;

#if 0

int main() {

	// khai báo 1 biến kiểu chuỗi ký tự
	std::string stringt;

	// khởi tạo chuỗi kí tự theo nhiều cách
	string stringt0("");					// khởi tạo chuỗi rỗng cho stringt0
	string stringt1("ABC");					// khởi tạo chuỗi "ABC" cho stringt1
	string stringt2{ "Free Education!" };	// khởi tạo chuỗi "Free Education!" cho stringt2
	string stringt3 = "DEF";				// khởi tạo chuỗi DEF cho stringt3
	string stringt4 = stringt1;				// gán giá trị stringt1 cho stringt4

	// khởi tạo chuỗi số
	string stringnumber = "730";

	// xuất chuỗi
	cout << stringt0 << endl;
	cout << stringt1 << endl;
	cout << stringt2 << endl;
	cout << stringt3 << endl;
	cout << stringt4 << endl;
	cout << stringnumber << endl;

}
#endif





	// khi nhập chuỗi bằng cin thì nó không cho phép nhập hết 1 chuối có các khoảng trắng
	// không nên nhập chuỗi bằng cin 
	// nên dùng getline để nhập chuỗi

#if 0

int main() { // nhập xuất chuỗi
	// vd cin
	cout << "nhap full name: ";
	string name;
	cin >> name;

	cout << "nhap age: ";
	string age;
	cin >> age;

	cout << "ten cua ban la: " << name << endl;
	cout << "tuoi cua ban la: " << age << endl;
}
#endif

#if 1
int main() { // nên dùng getline để nhập chuỗi

	cout << "nhap full name: ";
	string name;
	getline(cin, name);

	cout << "nhap age: ";
	string age;
	getline(cin, age);

	cout << "your name is: " << name << endl;
	cout << "your age is: " << age << endl;

}
#endif

#if 0 // khắc phục lỗi thì chúng ta nên xoá bộ nhớ đệm 

int main() {

	// vd nhập xuất chuỗi theo 2 kiểu khác nhau trong cùng 1 hàm
	// để khắc phục lỗi thì chúng ta nên xoá bộ nhớ đệm 
	// bộ nhớ đệm có 32767 kí tự,hoặc đến khi gặp ký tự '\n'

	cout << "nhap tuoi: ";
	string age1;
	cin >> age1;	/* đối với cin khi chạy chương trình nó sẽ lỗi vì khi nhập số tuổi và nhấn "enter"
					thì bộ nhớ đệm đã lưu vào 2 kí tự đó là tuổi và "enter" và xuất ra kí tự tuổi đàu tiên	*/

	std::cin.ignore(32767, '\n'); /* '\n' trong trường hợp này nó sẽ tìm đến kí tự đó và xoá bộ nhớ đệm
									và tự đó trở đi nó sẽ không xoá gì nữa nếu không để '\n' nó sẽ xoá hết bộ nhớ đệm */

	cout << "nhap ten: ";
	string name1;
	getline(cin, name1); // sau đó hàm getline sẽ láy hết toàn bộ trong bộ nhớ đệm ra là "enter" nên sẽ không nhập được tên mà nó kết thúc chương trình

	cout << "ten cua ban la: " << name1 << endl;
	cout << "tuoi cua ban la: " << age1 << endl;

}
#endif	

#if 0 // cách nhập thêm kí tự của hàm getline

int main() {
	cout << "nhap ki tu bat ki: ";
	string text;
	// getline(cin, text); // nó chỉ xuất ra đúng 1 kí tự và không cho mình nhập tiếp
	getline(cin, text, '_');	/* nó sẽ cho phép mình nhập vào nhiều kí tự cho đến khi mình nhập
								kí tự '_' và không in ra kí tự '_' (có thể thay _ bằng kí tự khác) */
	cout << "your text: " << text << endl;

}
#endif

#if 0	// nối chuỗi kí tự
int main() {

	string a("730");
	string b("730");
	string c("Hung ");
	string d("Pe vang");
	string h("anh");
	string e = a + b; // lưu ý chỉ nối lại chứ không cộng vào
	string f = c + d; // lưu ý chỉ nối lại chứ không cộng vào


	cout << e << endl;
	cout << f << endl;

	h += " long";
	cout << h;


}
#endif



