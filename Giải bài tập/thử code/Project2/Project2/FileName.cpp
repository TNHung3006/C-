// Năm nhuận là năm chia hết cho 400 hoặc ( chia hết cho 4 và không chia hết cho 100). Năm là một số nguyên.
    // In ra INVALID nếu x là một số nguyên âm hoặc số 0. Nếu x là năm nhuận, in ra YES, ngược lại in ra NO.
#include <iostream>
#include <set>
#include <algorithm>
#include <iomanip>

using namespace std;


#if 0
int main() {
    int x;
    cout << "nhap vao so nam: ";
    cin >> x;
    if (x <= 0) {
        cout << "INVALID\n";
    }else 
        if ((x % 400 == 0) || ((x % 4 == 0) && (x % 100 != 0))) {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    return 0;
}

#endif

#if 0
//  In ra số ngày của tháng
//  Input
//  2 số nguyên t, n lần lượt là tháng và năm. (-106 ≤ t, n ≤ 106)
//  Output
//  Nếu tháng và năm nhập vào không hợp lệ(tháng, năm không phải là số dương,tháng không nằm trong các số từ 1 tới 12) in ra INVALID,
//  ngược lại in ra số ngày trong năm.Chú ý tháng 2 của năm nhuận có 29 ngày.


int main() {
    int t, n;
    cout << "nhap vao thang: ";
    cin >> t; cout << endl;
    cout << "nhap vao so ngay cua nam: ";
    cin >> n; cout << endl;

    if (t <= 0 || n <= 0 || t > 12) {
        cout << "INVALID\n";
    }
    else
        if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12) {
            cout << "thang co so ngay la: 31\n";
        }else
            if (t == 4 || t == 6 || t == 9 || t == 11) {
                cout << "thang co so ngay la: 30\n";
            }
            else
                if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0))) {
                    cout << "thang co so ngay la: 29\n";
                }
                else
                    cout << "thang co so ngay la: 28\n";

        return 0;
}
#endif

#if 0
// vd kiểm tra kí tự chữ in hoa in thường dùng mã ascii
//    a-z : 97 - 122
//    A - Z : 65 - 90
//    0 - 9 : 48 - 57
// DÙNG MÃ ASCII HOẶC DÙNG KÍ TỰ ĐỀU ĐƯỢC

int main() {

    char a; cin >> a;
    if (a >= 'a' && a <= 'z') {
        cout << "day la chu in thuong\n";
    }
    else
        if (a >= 65 && a <= 90) {
            cout << "day la chu in hoa\n";
        }
        else
            cout << "day ko phai chu\n";
    return 0;
}
#endif

#if 0
/*  Chuyển ký tự hoa thành thường
        Input
        Kí tự cần chuyển
        Output
        Nếu kí tự nhập vào là chữ in hoa, in ra dạng in thường tương ứng của nó.Trong
        trường hợp kí tự nhập vào không phải là chữ in hoa thì không thay đổi kí tự ban
        đầu.    */
        //  a - z : 97 - 122
        //  A - Z : 65 - 90
int main() {

    char x;
    cout << "ki tu ban dau la: ";
    cin >> x;
    char s = x;
    if (x >= 'A' && x <= 'Z') {
        s += 32;
        cout << "ki tu duoc thay doi: " << s << '\n';
    }
    else
        cout << "ki tu van giu nguyen la: " << x;

}
#endif

#if 0
/*  Chuyển đổi ngày sang tháng, năm, ngày
           Viết chương trình C cho phép nhập vào số ngày, thực hiện chuyển số ngày sang
           năm, tuần, ngày(Bỏ qua trường hợp năm nhuận)
           Input
           Số nguyên n không âm. (0 ≤ n ≤ 10^6)
           Output
           Chuyển số ngày đã cho xem số năm, số tháng, số ngày.    */


#endif

#if 1
      // Cho 5 số nguyên a, b, c, d, e 64 bit đôi một khác nhau.In ra số nhỏ thứ nhì.

int main() {
    int a[5];
    cout << "nhap mang: ";
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
    }
        return 0;
}



/*
int main() {
    int b[5];
    cout << "nhap mang: \n";
    for (int t = 0; t < 5; t++) {
        cin >> b[t];
    }
    sort(b + 0, b + 5);
    cout << b[1] << '\n';

return 0;
}
*/

#endif