#include <bits/stdc++.h>
#include <iostream>

using namespace std;


// nhap vao 1 so nguyen bat ki kiem tra coi do co phai la so nguyen to hay khong

#if 0
int main() {
    int ht;
    cout << "nhap vao 1 so nguyen ht: ";
    cin >> ht;
    if (ht < 2) {
        cout << "khong phai la so nguyen to";
    }
    else
    {
        for (int i = 2; i <= sqrt(ht); i++) {
            if (ht % i == 0) {
                cout << "khong phai la so nguyen to";
                return 0;
            }
        }
        cout << "la so nguyen to";
    }
    return 0;
}

#endif

#if 1
bool nt(int t) {
    if (t < 2) {
        cout << "khong phai la so nguyen to";
    }
    else
        for (int i = 2; i <= sqrt(t); i++) {
            if (t % i == 0) {
                return false;
            }
        }
    return true;
}

int main() {
    int h;
    cout << "nhap vao so nguyen h: ";
    cin >> h;
    if (nt(h) == true) {
        cout << "la so nguyen to";
        return 0;
    }
    cout << "khong phai la so nguyen to";
    return 0;
}

#endif

#if 0

// xây dựng hàm kiểm tra số nguyên tố

bool nt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
int main() {
    for (int i = 1; i <= 100; i++) {
        if (nt(i)) {
            cout << i << '\n';
        }
    }
}

#endif