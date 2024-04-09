#include <iostream> 
using namespace std;
int sum(int a, int b = 20)
{
    int ketqua;
    ketqua = a + b;
    return (ketqua);
}
int main()
{
    // Khai bao bien cuc bo: 
    int a = 100;
    int b = 200;
    int ketqua;
    // goi ham de tinh tong hai so. 
    ketqua = sum(a, b);
    cout << "Tong gia tri la: " << ketqua << endl;
    // goi ham mot lan nua. 
    ketqua = sum(a);
    cout << "Tong gia tri la: " << ketqua << endl;
    return 0;
}