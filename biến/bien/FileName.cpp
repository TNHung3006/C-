#include <iostream>

using namespace std;

		//biến cục bộ
		//biến được định nghĩa bên trong 1 khối lệnh là biến cục bộ và biến chỉ sử dụng bên trong khối lệnh này
		//không nên định nghĩa ra ngoài khối lệnh

		//biến toàn cục
		//khai báo biến bên ngoài khối lệnh là biến toàn cục
		//không nên sử dụng

		//
		// 
		//
#if 0

int yasir;

void yasuao() {

	yasir = 3;

	cout << yasir << "chắc chắn là như vại rồi\n";

}
int main() {

	yasir = 7;
	yasuao();
	if (yasir == 7) cout << "yasir chắc chắn là như vại rồi\n";
	else cout << "cho la ban ko phai toi\n";

	return 0;
}
#endif