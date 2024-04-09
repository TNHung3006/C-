#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

#define N 1003



class candidate {
private:
    float toan, van, anh;
    string ten, ma, ngaysinh;

public:
    friend void A();
    candidate(float, float, float, string, string, string);
    float tinh_tong_diem();
    void nhap();
    void xuat();
};

candidate::candidate(float toan = 0, float van = 0, float anh = 0, string ten = "", string ma = "", string ngaysinh = "") {

    toan = toan;
    van = van;
    anh = anh;
    ten = ten;
    ma = ma;
    ngaysinh = ngaysinh;
}
float candidate::tinh_tong_diem() {
    return toan + van + anh;
}
void candidate::nhap() {
    cout << "nhap diem toan: ";
    cin >> toan;
    cout << "nhap diem van: ";
    cin >> van;
    cout << "nhap diem anh: ";
    cin >> anh;
    cout << "nhap ma: ";
    cin >> ma;
    cin.ignore();
    cout << "nhap ho va ten: ";
    getline(cin, ten);
    cout << "nhap ngay sinh: ";
    cin >> ngaysinh;
}

void candidate::xuat() {
    cout << "diem toan la: " << toan << endl;
    cout << "diem van la:" << van << endl;
    cout << "diem anh la:" << anh << endl;
    cout << "ma la:" << ma << endl;
    cout << "ho va ten la:" << ten << endl;
    cout << "ngay sinh la:" << ngaysinh << endl;
}

class Testcandidate {
private:
    candidate a[N];
    int n;

public:
    void nhapdanhsachthisinh() {
        cout << "nhap vao so thi sinh: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << "thi sinh thu: " << i << endl;
            a[i].nhap();
            cout << endl;
        }
    }
    void in_ra_thi_sinh_co_tong_diem_lon_hon_15() {
        cout << "danh sach thi sinh co tong diem lon hon 15: \n";
        for (int i = 0; i < n; i++) {
            if (a[i].tinh_tong_diem() > 15) {
                cout << "thi sinh thu: " << i << endl;
                a[i].xuat();
                cout << endl;
            }
        }
    }
};
int main() {
    Testcandidate x;
    x.nhapdanhsachthisinh();
    x.in_ra_thi_sinh_co_tong_diem_lon_hon_15();
    return 0;
}