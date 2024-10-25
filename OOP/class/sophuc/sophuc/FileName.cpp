#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class sophuc
{
private:
    float a, b;
public:
    sophuc(float, float);
    void nhap();
    void xuat();

    sophuc tong(sophuc);
    sophuc hieu(sophuc);
    sophuc nhan(sophuc);
    sophuc chia(sophuc);
    float giatrituyetdoi();

};

sophuc::sophuc(float c = 0, float d = 0) {
    a = c;
    b = d;
}

void sophuc::nhap() {
    cout << "gia tri a: ";
    cin >> a;
    cout << "gia tri b: ";
    cin >> b;

}

void sophuc::xuat() {
    if (a == 0 && b == 0) {
        cout << 0 << endl;
    }else
        if (a == 0) {
            cout << b << "i\n";
        }else
            if (b == 0) {
                cout << a << endl;
            }else
                if (b < 0) {
                    cout << a << " " << b << "i\n";
                }else  
    cout << a << " + " << b << "i\n";

}

sophuc sophuc::tong(sophuc i) {
    sophuc S;
    S.a = a + i.a;
    S.b = b + i.b;
        return S;
}

sophuc sophuc::hieu(sophuc i) {
    sophuc S;
    S.a = a - i.a;
    S.b = b - i.b;
    return S;
}

sophuc sophuc::nhan(sophuc i) {
    sophuc S;
    S.a = a * i.a - b * i.b;
    S.b = a * i.b + b * i.a;
    return S;
}

sophuc sophuc::chia(sophuc i) {
    sophuc S;
    S.a = (a * i.a + b * i.b)/(pow(i.a, 2) + pow(i.b, 2));
    S.b = (b * i.a - a * i.b)/(pow(i.a, 2) + pow(i.b, 2));
    return S;
}

float sophuc::giatrituyetdoi() {
    float S;
    S = sqrt(a * a + b * b);  
    return S;
}

int main() {
    sophuc x;
    sophuc y;
    sophuc t, h, n, c;
    sophuc gttd;
    cout << "nhap vao cac gia tri cua so phuc x\n";
    x.nhap();
    cout << "so phuc x la: ";
    x.xuat();
    cout << "nhap vao cac gia tri cua so phuc y\n";
    y.nhap();
    cout << "so phuc y la: ";
    y.xuat();

    t = x.tong(y);
    t.xuat();

    h = x.hieu(y);
    h.xuat();

    n = x.nhan(y);
    n.xuat();

    c = x.chia(y);
    c.xuat();

    x.giatrituyetdoi();
    cout << "gia tri tuyet doi cua so phuc x la: " << x.giatrituyetdoi();
}