#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cstdlib> // dùng chp hàm srand
#include <ctime> // dùng cho hàm time
#include <random> // thư viện dùng cho hàm random

// ngôn ngữ c++ cung cấp 2 hàm có chức năng phát sinh số ngẫu nhiên, 2 hàm này  thuộc thư viên cstdlib
// khởi tạo số ngẫu nhiên ta dùng hàm:
// srand() thuộc thư viện cstdlib
// void srand(unsigned int ...) // trả giá trị ngẫu nhiên từ 0 -> 32767
// hàm rand trả giá trị ngẫu nhiên từ 0 -> 32767


// ngoài rand thì còn hàm random nằm trong thư viện random (c++ 11)
// kiểu dữ liệu auto sẽ dò xem kiểu nào là phù hợp với giá trị đó
// nên sài phương pháp random vì nó sẽ tối ưu hơn

using namespace std;

#if 0   // rand
int main() {
    srand(time(NULL)); // số 0 hoặc chữ NULL    // không nên truyền vào 1 số ngẫu nhiên nào đó
    
    int a = rand() % 100 + 1; // trả giá trị ngẫu nhiên từ 0 -> 32767
    cout << a;
    return 0;
}
#endif

#if 0

int main() {
    srand(time(NULL)); // số 0 hoặc chữ NULL    // không nên truyền vào 1 số ngẫu nhiên nào đó
    // muốn giới hạn từ 1 -> 100
    int a = rand() % 100 + 1;
    cout << a;
    return 0;
}

#endif

#if 1 // vd đoán số ngẫu nhiên từ 1 đến 10

int main() {
    int a, b;

    srand(time(NULL));

    a = rand() % 10 + 1;
    do{
        cout << "doan so tu 1 den 10: ";

        cin >> b;

        if (a < b) 
            cout << "so bi mat thap hon\n";

        else if (a > b)
            cout << "so bi mat cao hon\n";

        cout << endl;

    } while (a != b);
}

#endif

#if 0

int main() {
    cout << "xuat ra 10 so ngau nhien tu 1 den 1000: \n";

    for (int i = 0; i <= 10; i++) {
       
        cout << rand() % 1000 + 1 << " ";
    }
    return 0;
}

#endif

#if 0 // random phương pháp này sẽ có số lớn hơn kiểu rand

int main() {
    random_device rd;
    mt19937 rng(rd()); // 19937 sẽ phát sinh ra các sỗ ngẫu nhiên và miền giới hạn trong 32bit, nếu muốn cao hơn nữa thì dùng mt19937_64

    //kiểu dữ liệu auto sẽ dò xem kiểu nào là phù hợp với giá trị đó
    auto n = rng();  // nếu dùng 1 kiểu dữ liệu bình thường(int, long long, float, ...) thì có thể gây ra tràng số nên trường hợp này nên dùng kiểu dữ liệu auto
    cout << n << "\n";
    
    return 0;
}

#endif

#if 0 // random     // nên sài phương pháp này

int main() {
    random_device rd;
    mt19937 rng(rd());

    // để trả về số ngẫu nhiên từ 1 đến 1000 ta dùng uniform_int_distribution<int> <tên>(min, max);
    
    uniform_int_distribution<int> abc(1, 1000);

    for (int i = 0; i < 10; i++){
    auto n = abc(rng);  
    cout << n << " \n";
    }
    return 0;
}

#endif
