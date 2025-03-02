#include <iostream>
#include <fstream>
using namespace std;

void selectionSort(int arr[], int n) {      // 5 2 6 1 
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}
void insertionSort(int arr[], int n) {     
    for (int i = 1; i < n; i++) {   
        int key = arr[i];       
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];       
            j--;
        }
        arr[j + 1] = key;   
    }
}
//void bubbleSort(int arr[], int n) {             
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(arr[j], arr[j + 1]);   
//            }
//        }
//    }
//}

void bubbleSort(int arr[], int n) {     //sắp xếp từ lớn tới nhỏ
    for (int i = n - 1; i > 0; i--) {
        for (int j = 1; j < i; j++) {
            if (arr[j] > arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
}

int main() {
    fstream fs;
    fs.open("TEST.txt");
    if (fs.is_open()) {
        cout << "Mo file thanh cong";
        cout << endl;
    }

    int arr[100], n = 0;
    while (fs >> arr[n]) {
        n++;
    }

    cout << "Mang ban dau: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //selectionSort(arr, n);
    insertionSort(arr, n);
    //bubbleSort(arr, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}