#include <iostream>
#include <math.h>
using namespace std;
void Nhapmang(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}
void Xuatmang(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int LaSnt(int n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

void TachSnt(int a[], int b[], int na, int &nb){
    nb = 0;
    for(int i = 0; i < na; i++){
        if(LaSnt(a[i])){
            b[nb] = a[i]; nb++;
        }
    }
}

void TachSoDuong(int a[], int b[], int c[], int na, int &nb, int &nc){
    nb = 0;
    nc = 0;
    for(int i = 0; i < na; i++){
        if(a[i] > 0) b[nb++]= a[i];
        else c[nc++] = a[i];
    }
}

void Sapxepgiamdan(int a[], int na){
    for(int i = 0; i < na - 1; i++){
        for(int j = i+ 1; j < na; j++){
            if(a[i] < a[j]) swap(a[i], a[j]);
        }
    }
}

void Sapxepcacso(int arr[], int na){
    int a[na], b[na], c[na];
    int m = 0, k = 0, l = 0;

    //tách số dương số âm và số 0
    for(int i = 0; i < na; i++){
        if(arr[i] > 0) a[m++] = arr[i];
        else if(arr[i] < 0) b[k++] = arr[i];
        else c[l++] = arr[i];
    }

    //sắp xếp số dương giảm dần
    Sapxepgiamdan(a, m);
    // for(int i = 0; i < m - 1; i++){
    //     for(int j = i+ 1; j < m; j++){
    //         if(a[i] < a[j]) swap(a[i], a[j]);
    //     }
    // }
    //sắp xếp số âm tăng dần
    for(int i = 0; i < k - 1; i++){
        for(int j = i+ 1; j <k; j++){
            if(b[i] > b[j]) swap(b[i], b[j]);
        }
    }

    //nhóm số dương số âm số 0 thành 1 mảng
    int idx = 0;
    for(int i = 0; i < m; i++) arr[idx++] = a[i];
    for(int i = 0; i < k; i++) arr[idx++] = b[i];
    for(int i = 0; i < l; i++) arr[idx++] = c[i];
}

int main(){
    int a[1007], b[1007], c[1007], na, nb = 0, nc = 0;
    cout << "nhap so luong phan tu trong mang: ";
    cin >> na;

    //nhập mảng
    cout << "nhap cac gia tri phan tu trong mang: ";
    Nhapmang(a, na);
    cout << "mang ban dau la: ";
    Xuatmang(a, na);

    //tach mang toan snt.
    TachSnt(a, b, na, nb);
    cout << "\nmang b toan snt sau khi tach mang a: ";
    Xuatmang(b, nb);

    //tách 1 mảng thành 2 mảng, mảng a chứa số dương và b chứa số còn lại
    TachSoDuong(a, b, c, na, nb, nc);
    cout << "\nmang b toan so duong sau khi tach mang a: ";
    Xuatmang(b, nb);
    cout << "\nmang c chua cac so con lai cua mang a: ";
    Xuatmang(c, nc);

    //sắp xếp mảng giảm dần
    Sapxepgiamdan(a, na);
    cout << "\nsap xep mang giam dan: ";
    Xuatmang(a, na);

    //sắp xếp từ lớn đến bé các số dương ở đầu mảng, các số âm ở giữa và các số 0 ở cuối
    Sapxepcacso(a, na);
    cout  << "\nmang sau khi sap xep so duong, so am va so 0: ";
    Xuatmang(a, na);

    return 0;
}