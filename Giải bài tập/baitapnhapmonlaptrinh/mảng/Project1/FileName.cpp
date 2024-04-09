#include <iostream>
#include <math.h>
using namespace std;
bool CheckSnt(int n)
{
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }
    return true; // 3 5 7
}

void DichTrai(int*& Array, int& n, int k)
{
    n--;
    for (int i = k; i < n; i++)
    {
        Array[i] = Array[i + 1];
    }
}

int CountChuoiSnt(int*& Array, int& n) // 1 3 5 7 8 n=5
{
    int index;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (CheckSnt(Array[i])) // i = 1 3 5 7 8
        {
            dem++; // dem 
            index = i;
            i++;
            while (CheckSnt(Array[i]))
            {
                Array[index] += Array[i];
                DichTrai(Array, n, i);
            }
        }
    }

    return dem;
}
int main()
{
    int n;
    cout << "Nhap So Phan Tu Cua Mang: ";
    cin >> n;

    int* Array = new int[n];
    cout << "Nhap Mang: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "array[" << i + 1 << "]: ";
        cin >> Array[i];
    }
    cout << "So Chuoi SNT La : " << CountChuoiSnt(Array, n) << endl; // vd array: 1 3 5 7 8 ; n = 5
    cout << "Mang Sau Khi Thuc Hien : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << Array[i] << " ";
    }
}