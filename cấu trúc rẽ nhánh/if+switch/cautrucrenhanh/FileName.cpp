#include <iostream>
#include <iomanip>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm> // thư viện của sort
using namespace std;


		/*	Cấu trúc rẽ nhánh trong c++
		 abs(x): giá trị tuyệt đối
		 pow(a, b): tính a^b : trả về số double
		 sqrt(x): tính căn bậc 2 của x: trả về số double
		 round(x): làm tròn số lớn hơn 0.5 => 1 nhỏ hơn 0.5 => 0
  
		  TRONG C++ 0: false , khác 0: true
	
			Cấu trúc: if() { ĐÚNG } else { SAI }
	
			Cấu trúc: switch (x) {
			case x:
				cout << "...";
				break; // bắt buộc phải có break ở sau nếu không thì nó sẽ in ra tất cả các dòng ở sau nữa.
				}
		*/

		// hàm exit(0); nó sẽ làm chương trình dừng ngay lập tức
#if 0	
int main() {

	exit(0);	// giá trị 0 là giá trị trả về dóng như câu lệnh return

	cout << "abcde\n";

	return 0;

#endif

#if 0
int main() {

	int a = 100, b = -100, c = 2;
	float d = 2.789;
	int x = sqrt(a), y = abs(b), z = pow(a, c);
	int h = round(d); // làm tròn d=2.789 thành 3
	cout << x << " " << y << " " << z << " " << h << endl;
	return 0;
#endif

#if 0

int main() {
	bool a(false);
	if (!false)
		cout << "yasir\n";
	else
		cout << "ngu\n";
	return 0;
}
#endif

#if 0	// Ví Dụ

int main() {
	int a = 100, b = 200;
		if ((a % 2 == 0) && (a < b)) {
		cout << " dung \n";
	}
	return 0;
}
#endif

#if 0	// Ví Dụ

int main() {
	int n;
		cin >> n;
	if (n % 2 == 0) {
		cout << " n la so chan \n";
		cout << " yasuo \n";
		cout << " yasir chac chan la nhu vai roi \n";
	}
	else{
		cout << " n la so le \n";
		cout << "yone \n";
	}
	return 0;
}
#endif

#if 0	// Ví Dụ

int main() {
	int n = 3;
	if (n == 1) {
		cout << " ban la nhat\n";
	}
	else if (n == 2) {
		cout << "ban la nhi\n";
	}
	else if (n == 3) {
		cout << " ban la yasuo\n";
	}
	else if (n == 4) {
		cout << "cho la ban ko phai toi\n";
	}
	else {
		cout << " du lieu khong hop le\n";
	}
	return 0;
}
#endif

#if 0	// Ví DỤ tìm tháng có 30 ngày

int main() {
	int n;
	cin >> n;
	if ((n == 1) || (n == 3) || (n == 5) || (n == 7) || (n == 8) || (n == 10) || (n == 12)) {
		cout << " n la thang co 31 days\n";
	}
	else if ((n == 4) || (n == 6) || (n == 9) || (n == 11)) {
		cout << "n la thang co 30 days\n";
	}
	else {
		cout << " n la thang có 28 or 29 days \n";
	}
	return 0;
}
#endif

#if 0	// Ví Dụ switch:

int main() {
	int day = 4;
	switch (day) {
	case 1:
		cout << "Monday";
		break;				
	case 2:
		cout << "Tuesday";
		break;
	case 3:
		cout << "Wednesday";
		break;
	case 4:
		cout << "Thursday";
		break;
	case 5:
		cout << "Friday";
		break;
	case 6:
		cout << "Saturday";
		break;
	case 7:
		cout << "Sunday";
		break;
	default:			// nếu toàn bộ case ko phù hợp thì nó sẽ nhảy vào trường hợp default
		cout << "du lieu khong hop le\n";
	}
	return 0;
}
#endif

#if 0	// Ví Dụ switch tìm tháng có ... day

int main() {
	int n; cin >> n;
	switch (n) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << "31 days\n";
		break;
	case 4: case 6: case 9: case 11:
		cout << "30 days\n";
		break;
	case 2:
		cout << "28 or 29 days\n";
		break;
	default:
		cout << "du lieu khong hop le\n";
	}
	return 0;
}
#endif

#if 1

int main() {
	while(1){

	cout << "so a co gia tri là: " << '\n';
	int a; cin >> a;
	
	if (a == 0)
	
		break;
	}
}

#endif