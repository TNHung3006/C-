#include <iostream>
#include <iomanip>
#include <math.h>
#include <stack>
#include <string>
#include <vector>
#include <set>
#include <algorithm> // thư viện của sort
using namespace std;

        // sort sắp xếp

#if 0

// nhập 2 số nguyên và tính cộng trừ nhân chia
// nhập vào bán kính, tính chu vi và diện tích của hình tròn

int main() {

    int a, b;
    cout << "nhap 2 so nguyen: \n"; 
    cin >> a >> b;
    
    cout << "Bai 4: " << '\n';
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = (float)a / b;
    cout << "Tong la: " << tong << "\n" << "Hieu la: " << hieu << "\n" << "Tich la: " << tich << "\n" << "Thuong la: " << fixed << setprecision(1) << thuong << '\n';


    cout << "Bai 5: " << '\n';

    int r; cout << "nhap ban kinh: \n"; cin >> r;
    const double Pi(3.14);
    double chuvi = 2 * Pi * r;
    double dientich = Pi * r * r;
    cout << "Chu vi hinh tron la: " << chuvi << '\n';
    cout << "Dien tich hinh tron la: " << dientich << '\n';
    return 0;
}
#endif

#if 0

// Tọa độ của 2 điểm M(x1, y1) và N(x2, y2) là các số nguyên.( -106 ≤xi, yi ≤106). Tính khoảng cách giữa 2 điểm
// ct tính khoảng cách giữa 2 điểm là sqrt((x2-x1)^2 + (y2 - y1)^2) 

int main() {
    
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    cout << "Bai 6: " << '\n';
    float MN = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Khoang cach giua 2 diem la: " << MN << '\n';

    // Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không quá 10^6, thực hiện chuyển sang đơn vị đo độ F và in ra màn hình.
    int C; cin >> C;
    cout << "Bai 7: " << '\n';
    int F = (C * 9 / 5) + 32;
    cout << fixed << setprecision(2) << F << '\n';

    // Tính tổng S = 1 + 2 + 3 + 4 + ... + n
    cout << "Bai 8: " << '\n';
    int n; cin >> n;
    int S = 0;
    for (int i = 0; i < n; i++) {
        S += i;  
    }
    cout << "Tong La S =: " << S << '\n';
    
    return 0;
}

#endif

#if 0

int main() {
    // tính tổng S = 1^2 + 2^2 + 3^2 + ... + n^2

    cout << "Bai 9: " << '\n';
    int n; cin >> n;
    int S = 0;
    for (int i = 0; i <= n; i++) {
        S += i*i;
    }
    cout << "Tong La S =: " << S << '\n';
#endif

#if 0
    // Tính tổng 3 S = 1/(1∗2) + 1/(2∗3) + 1/(3∗4) + ..... + 1/n∗(n + 1)
int main(){
    cout << "Bai 10: " << '\n';
    int n; cin >> n;
    float S = 0;
    for (int i = 1; i <= n; i++) {
        S += 1.0/(i*(i+1));
    }
    cout << "Tong La S =: " << S << '\n';

    return 0;
}
#endif

#if 0
int main(){
    // Tính tổng S = 2 + 4 + 6 + 8 + ... + 2 * n
    cout << "Bai 11: " << '\n';
    int n; cin >> n;
    int S = 0;
    for (int i = 1; i <= n; i ++) {
        S += 2*i;
    }
    cout << "Tong La S =: " << S << '\n';

    return 0;
}
#endif

#if 0
    // Tính tổng S = -1 + 2 - 3 + 4 - 5 + 6 + .... + (-1)^n*n

int main() {
    cout << "Bài 12: " << '\n';
    int n; cin >> n;
    double S = 0;
    for (int i = 1;i <= n; i++) {
        S += pow((- 1), i) * i;
    }
    cout << "Tong la S = " << S << '\n';
     
    // Cho 2 số nguyên dương a và b. Tìm số chia hết cho b lớn nhất và không vượt qua a. Chú ý không dùng vòng lặp và các hàm có sẵn.
    // CT a / b * b , vd a/b = 3 thì ta láy 3 * b là ra số lớn nhất chia cho b vd: 17/3=5 láy 5*3=15 

    cout << "Bai 13: \n";
    int a, b; cin >> a >> b;
    cout << "so lon nhat chia het cho b va khong vuot qua a la: " << a / b * b << '\n';

    // Cho 2 số nguyên dương x và y. Tìm số chia hết cho y nhỏ nhất và lớn hơn hoặc bằng x.Chú ý không dùng vòng lặp và các hàm có sẵn.
    // CT (x + y - 1) / y * y vd: (19+4-1)/4 = 5 láy 5 * 4 = 20 số nhỏ nhất lớn hơn x = 19 và chia hết cho y = 4

    cout << "Bai 14: \n";
    int x, y; cin >> x >> y;
    cout << "so chia het cho b nho nhat va lon hon hoac bang a la: " << (x + y - 1) / y * y << '\n';

    return 0;
}
#endif

#if 0
int main() {

    // Kiểm tra số chia hết cho 3 và 5. In ra 1 nếu n chia hết cho cả 3 và 5, ngược lại in ra 0

    cout << "Bai 15: \n";
    int n; cin >> n;
    if ((n % 3 == 0) && (n % 5 == 0)) {
        cout << true << '\n';
    }
    else  cout << false << '\n';

    // Năm nhuận là năm chia hết cho 400 hoặc ( chia hết cho 4 và không chia hết cho 100). Năm là một số nguyên.
    // In ra INVALID nếu x là một số nguyên âm hoặc số 0. Nếu x là năm nhuận, in ra YES, ngược lại in ra NO.

    cout << "Bai 16: \n";
    int x; cin >> x;
    if (x <= 0) {
        cout << "INVALID \n";
    }
    else if ((x % 400 == 0) || ((x % 4 == 0) && (x % 100 != 0))) {
        cout << "YES \n";
    }
    else cout << "NO \n";
    return 0;
 }
#endif 

#if 0
int main() {

    //  In ra số ngày của tháng
    //  Input
    //  2 số nguyên t, n lần lượt là tháng và năm. (-106 ≤ t, n ≤ 106)
    //  Output
    //  Nếu tháng và năm nhập vào không hợp lệ(tháng, năm không phải là số dương,tháng không nằm trong các số từ 1 tới 12) in ra INVALID,
    //  ngược lại in ra số ngày trong năm.Chú ý tháng 2 của năm nhuận có 29 ngày.
    cout << "Bai 17: \n";
    int t, n;cout << "nhap vao thang thu: "; cin >> t >> n;
    if (t <= 0 || t > 12 || n <= 0) {
        cout << "INVALID \n";
    }
    else
        if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12) {
            cout << "31\n";
        }
        else
            if (t == 4 || t == 6 || t == 9 || t == 11) {
                cout << "30\n";
            }
            else
                if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0))) {
                    cout << "29\n";
                }
                else cout << "28\n";
    return 0;
}
#endif            

#if 0
int main() {

    // vd kiểm tra kí tự chữ in hoa in thường dùng mã ascii
    //    a-z : 97 - 122
    //    A - Z : 65 - 90
    //    0 - 9 : 48 - 57
    // DÙNG MÃ ASCII HOẶC DÙNG KÍ TỰ ĐỀU ĐƯỢC
    char a; cin >> a;
    if (a >= 'a' && a <= 'z') {
        cout << "YES\n";
    }
    else cout << "NO\n";
    // HOẶC 
    char x; cin >> x;
    if (x >= 97 && x <= 122) {
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}
#endif

#if 0

int main() {

 /*     kiểm tra kí tự
        a - z : 97 - 122
        A - Z : 65 - 90
        0 - 9 : 48 - 57      */

/*  Kiểm tra chữ in thường
    Input
    Kí tự cần kiểm tra
    Output
    In ra YES nếu kí tự nhập vào là chữ cái in thường, NO trong trường hợp ngược lại.
    Dùng mã ASCII
*/

    cout << "Bai 18: \n";
    char a; cin >> a;
    if (a >= '97' && a <= '122') {
        cout << "YES\n";
    }
    else cout << "NO\n";

/*  Kiểm tra chữ in hoa
        Input
        Kí tự cần kiểm tra
        Output
        In ra YES nếu kí tự nhập vào là chữ cái in hoa, NO trong trường hợp ngược lại.
        Dùng mã ASCII
*/

    cout << "Bai 19: \n";
    char x; cin >> x;
    if (x >= '65' && x <= '90') {
        cout << "YES\n";
    }
    else cout << "NO\n";


    return 0;
}
#endif

#if 0

int main() {

/*  Kiểm tra chữ cái
    Input
    Kí tự cần kiểm tra
    Output
    in ra YES nếu kí tự nhập vào là chữ cái, NO trong trường hợp ngược lại      */

    cout << "Bai 20: \n";
    char a; cin >> a;
    if ((a >= '97' && a <= '122') || (a >= '65' && a <= '90')) {
        cout << "YES\n";
    }
    else cout << "NO\n";

/*  Kiểm tra chữ số
        Input
        Kí tự cần kiểm tra
        Output
        In ra YES nếu kí tự nhập vào là chữ số, NO trong trường hợp ngược lại   */

    cout << "Bai 21: \n";
    char x; cin >> x;
    if (x >= '0' && x <= '9' ) {
        cout << "YES\n";
    }
    else cout << "NO\n";


    return 0;
}
#endif

#if 0

int main() {

/*  Chuyển ký tự hoa thành thường
        Input
        Kí tự cần chuyển
        Output
        Nếu kí tự nhập vào là chữ in hoa, in ra dạng in thường tương ứng của nó.Trong
        trường hợp kí tự nhập vào không phải là chữ in hoa thì không thay đổi kí tự ban
        đầu.    */
    //  a - z : 97 - 122
    //  A - Z : 65 - 90
    
    cout << "Bai 22: \n";
    char a; cin >> a;
    if (a >= 'A' && a <= 'Z') {
        a += 32;
    }
    cout << a << '\n';

/*  Chuyển kí tự thường thành kí tự hoa
        Input
        Kí tự cần chuyển
        Output
        Nếu kí tự nhập vào là chữ in thường, in ra dạng in hoa tương ứng của nó.Trong
        trường hợp kí tự nhập vào không phải là chữ in thường thì không thay đổi kí tự ban
        đầu.    */

    cout << "Bai 23: \n";
    char x; cin >> x;
    if (x >= 97 && x <= 122) {
        x -= 32;
    }
    cout << x << '\n';

    return 0;
}
#endif

#if 0
 
int main() {

    /*  Chữ cái kế tiếp
        Input
        Kí tự duy nhất
        Output
        Nếu kí tự nhập vào là chữ cái, tiến hành in ra chữ cái kế tiếp của nó trong bảng chữ
        cái ở dạng in thường, ta coi chữ cái kế tiếp của z là a.Nếu kí tự nhập vào không
        phải là chữ cái in ra INVALID.  */
    cout << "Bai 24: \n";
    char x; cin >> x;
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {
        if (x == 'z' || x == 'Z') {
            cout << "a\n";
        }
        else if (x >= 'A' && x <= 'Z') {
            x += 32;
        }
        ++x;
        cout << x << '\n';
    }
    else cout << "INVALID\n";
    
    return 0;
}
#endif

#if 1
    // VD viết chương trình xuất ra các số có 5 chữ số sao cho có đúng 1 cặp chữ số bằng nhau và các số còn lại khác nhau.

int main() {
    for (int num = 10000; num <= 69999; num++) {
        int a[10] = { 0 }; // Mảng đếm số lần xuất hiện của từng chữ số từ 0 đến 9
        int b = num;

        // Đếm số lần xuất hiện của từng chữ số trong số num
        while (b > 0) {         // cho b bằng 12321
            int digit = b % 10; // digit = 1, 2, 3, 2, 1
            a[digit]++;
            b /= 10;   // b= 1232,1; 123,21; 12,321; 1,2321; 0,12321        55123
        }

        // Kiểm tra có đúng 2 chữ số bằng nhau
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < 10; i++) {  
            if (a[i] == 2) {
                count++;
            }
            else if (a[i] = 1)
                count1++;
        }

        // Nếu có đúng 2 chữ số bằng nhau, xuất số num
        if (count == 1 && count1 == 1) {
            cout << num << endl;
        }
    }

    return 0;
}
#endif 

#if 0
    
        // SỐ lớn nhất, số nhỏ nhất 
        // nhập 3 số nguyên a b c  in ra số lớn nhất và nhỏ nhất trong 3 số.
int main() {

    int a, b, c; cin >> a >> b >> c;
    int max, min;
    if (a > b && a > c) {
        max = a;
    }
    else if (b > a && b > c) {
        max = b;
    }
    else
        max = c;
    if (a < b && a < c) {
        min = a;
    }
    else if (b < c && b < a) {
        min = b;
    }
    else min = c;
    cout << max << " " << min << '\n';

    // HOẶC

    int x, y, z; cin >> x >> y >> z;
    int max1 = x, min1 = x;
    if (x < y) max1 = y;
    if (y < z) max1 = z;
    if (x > y) min1 = y;
    if (y > z) min1 = z;
    cout << max1 << " " << min1 << '\n';

    return 0;
}
#endif

#if 0

int main() {

/*  Tam giác hợp lệ
        Input
        a, b, c là độ dài 3 cạnh của tam giác.a, b, c là các số nguyên(-10^6 ≤ a, b, c ≤ 10^6)
        Output
        In ra YES nếu tam giác nhập vào là hợp lệ, ngược lại in NO  */
    cout << "Bai 25: \n";
    int a, b, c; cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        cout << "YES\n";
    }
    else cout << "NO\n";

/*  Kiểm tra tam giác
        Input
        x, y, z là độ dài 3 cạnh của tam giác.x, y, z là các số nguyên(-10^6 ≤ a, b, c ≤ 10^6)
        Output
        In ra INVALID tam giác đã cho không hợp lệ
        In ra 1 nếu tam giác là tam giác đều
        In ra 2 nếu tam giác là tam giác cân
        In ra 3 nếu tam giác là tam giác vuông
        In ra 4 nếu tam giác là tam giác vuông cân
        In ra 5 nếu tam giác là tam giác thường.    */

    cout << "Bai 26: \n";
    int x, y, z; cin >> x >> y >> z;
    if (x > 0 && y > 0 && z > 0 && x + y > z && x + z > y && y + z > x) {
        if (x == y == z) {
            cout << "1 \n";
        }
        else if (x == y || y == z || x == z) {
            if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y) {
                cout << "4\n";
            }
            else cout << "2\n";
        }
        else if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y) {
            cout << "3\n";
        }
        else cout << "5\n";
    }
    else cout << "INVALID\n";
    
    return 0;
}
#endif

#if 0

int main() {

    /*  Chuyển đổi ngày sang tháng, năm, ngày
            Viết chương trình C cho phép nhập vào số ngày, thực hiện chuyển số ngày sang
            năm, tuần, ngày(Bỏ qua trường hợp năm nhuận)
            Input
            Số nguyên n không âm. (0 ≤ n ≤ 10^6)
            Output
            Chuyển số ngày đã cho xem số năm, số tháng, số ngày.    */

    cout << "Bai 27: \n";
    int n; cin >> n;
    int nam = n / 365;
    int sodu = n % 365;
    int thang, ngay;
    int sum = 0;
    int i;                          // int i ngoài for thì giá trị i vẫn giữ nguyên khi ra ngoài vòng lặp
    for (i = 1; i <= 12; i++)
    {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) sum += 31;
        else if (i == 4 || i == 6 || i == 9 || i == 11) sum += 30;
        else sum += 28;
        if (sum > sodu)
        {
            break;
        }
    }
    if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) sum -= 31;
    else if (i == 4 || i == 6 || i == 9 || i == 11) sum -= 30;
    else sum -= 28;
    thang = i - 1;
    ngay = sodu - sum;
    ngay -= int(nam / 4); // năm nhuận
    cout << nam << " Nam " << thang << " Thang " << ngay << " Ngay " << '\n';

    // vd n = 435
    // sodu = 70         i = 1 sum = 31
    //                   i = 2 sum = 31 + 28 = 59
    //                   i = 3 sum = 90 > sodu = 70 nên dừng vòng lặp
    // if ở dưới  trả sum về đúng với giá trị đúng sum = 90 - 31( vì i = 3 ) = 59
    // thang = i ko hợp lệ i = 3 - 1 = 2
    // ngay bằng sodu = 70 - sum = 59

    return 0;
}
#endif

#if 0

int main(){

/*   Phương trình bậc 2
        Phương trình bậc 2 là phương trình dạng ax^2 + bx + c = 0.
        Viết chương trình C cho phép nhập vào a, b, c và thực hiện giải phương trình bậc 2.
        Nếu vô nghiệm thì in ra dòng NO, nếu vô số nghiệm thì in ra INF
        Nếu có nghiệm thì in các nghiệm(luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)
        cách nhau một khoảng trắng. */

    cout << " Bai 28: \n";
    float a, b, c; cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "INF\n";
            }
            else cout << "NO\n";
        }
        else cout << "x = " << -c / b << "\n";
    }
    else {
        float delta = pow(b, 2) - 4 * a * c;
        if (delta > 0) {
            cout << "phuong trinh co 2 nghiem phan biet la: \n";
            cout << "x1 = " << (-b + sqrt(delta)) / (2 * a) << "\n";
            cout << "x2 = " << (-b - sqrt(delta)) / (2 * a) << "\n";
        }
        else if (delta == 0) {
            cout << "phuong trinh co nghiem kep x1 = x2 = " << -b / (2 * a) << "\n";
        }
        else cout << "NO\n";
    }
    
    return 0;
}
#endif

#if 0

            // sort sắp xếp
            // Yêu cầu : Cho một đoạn đại số a, b.Tính số lượng số nguyên trong đoạn[a, b] đó.
            // vd a = 2.1 b = 5,2   

int main() {
    
    cout << "Bai 29: \n";
    float a, b; cin >> a >> b;
    float tmp;

    tmp = a - int(a);
    if (tmp > 0) a = int(a);        // a = 2
    else {
        a = int(a) - 1;
        cout << int(b) - a << '\n'; // = 5 - 2 = 3 số nguyên trong đoạn [a,b]
    }

    // Phép chia Cho 3 số nguyên 64 bit a, b, c. In ra dấu / nếu a/b = c hoặc b/c = a hoặc c / a = b và in ra NOSOL nếu không thỏa mãn.

/*  cout << "Bai 30: \n";
    int a, b, c; cin >> a >> b >> c;
    if (a / b == c || b / c == a || c / a == b) cout << "/\n";
    else cout << "NOSOL\n"; */

    return 0;
}
#endif
#if 0
int main() {
        
        // sort sắp xếp
        // vd sort(b + 0, b + 5); sắp xếp 5 số theo thứ tự từ nhỏ đến lớn
        
        //làm tròn xuống b láy số nguyên lớn nhất bé hơn hoặc bằng b
        // vd 8.8 => 8 
        // vd 8 => 8
        //làm tròn lên a láy số nguyên bé nhất lớn hơn hoặc bằng a
        // 1.1 => 2
        // 1 => 1

        // Cho 5 số nguyên a, b, c, d, e 64 bit đôi một khác nhau.In ra số nhỏ thứ nhì.

    cout << "Bai 32: \n";
    int a[5];
    cout << "nhap mang: \n";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    int dem;
    for (int i = 0; i < 5; i++) {

        dem = 0;

        for (int j = 0; j < 5; j++) {       // for chạy từ trong ra ngoài

            if (a[i] > a[j]) dem++;

        }
        if (dem == 1) {
            cout << a[i] << '\n';
            break;
        }
        // Hoặc
        int b[5];
        cout << "nhap mang: \n";
        for (int t = 0; t < 5; t++) {
            cin >> b[t];
        }
        sort(b + 0, b + 5);
        cout << b[1] << '\n';


    }
    return 0;
}
#endif


