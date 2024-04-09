#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;
    float Denta;
    cout << "Nhap Lan Luot Cac He So : "; cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0) cout << "Phuong Trinh Vo So Nghiem !" << endl;
            else cout << "Phuong Trinh Vo Nghiem ! " << endl;
        }
        else cout << "Phuong Trinh Co Nghiem La : " << -c / b << endl;
    }
    else
    {
        Denta = pow(b, 2) - 4 * a * c;
        if (Denta > 0)
        {
            cout << "Phuong Trinh Co 2 Nghiem Phan Biet : " << endl;
            cout << "x1 = " << (-b + sqrt(Denta)) / (2 * a) << endl;
            cout << "x2 = " << (-b - sqrt(Denta)) / (2 * a) << endl;
        }
        else if (Denta == 0) cout << "Phuong Trinh Co Nghiem Duy Nhat : " << -b / (2 * a) << endl;
        else cout << "Phuong Trinh Vo Nghiem !" << endl;
    }
    return 0;
}