#include <iostream>
#include <math.h>

using namespace std;

//1. Tạo danh sách liên kết đơn lưu trữ các số thực. Tìm số dương nhỏ nhất trong danh sách liên kết
//đơn đã tạo.

struct Node {
	int giatri;
	Node *tiep;
};
typedef struct Node* node;

node taonode(int x) {
	node tmp = new Node();
	tmp->giatri = x;
	tmp->tiep = NULL;
	return tmp;
}

void themnodedau(node& head, int x) {
	node tam = taonode(x);
	if (head == nullptr) head = tam;
	else
	{
		tam->tiep = head;
		head = tam;
	}
}
void themnodecuoi(node& head, int x) {
	node tam = taonode(x);
	if (head == nullptr) head = tam;
	else {
		node a = head;
		while (a->tiep != nullptr) {
			a = a->tiep;
		}
		a->tiep = tam;
	}
}

void duyetDS(node& head) {
	if (head == nullptr) cout << "khong co node trong danh sach";
	else {
		node bienchay = head;
		cout << "gia tri cua cac node trong danh sach: ";
		while (bienchay != nullptr) {
			cout << bienchay->giatri << "\t";
			bienchay = bienchay->tiep;
		}
		cout << endl;
	}
}

void inketqua(node& head) {
	int min = -1; // giả sử các giá trị trong node nhỏ hơn 0.
	node chay = head;
	while(chay != nullptr){
		if (chay->giatri > 0 && (min == -1 || chay->giatri < min)) { 
			min = chay->giatri;
		}
		chay = chay->tiep;
	}
	if (min == -1) cout << "khong co so duong trong danh sach" << endl;
	else cout << "so duong nho nhat trong danh sach la: " << min << endl;
}

int main() {
	node head = NULL;
	int n, tam;
	cout << "nhap so luong phan tu danh sach lien ket: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tam;
		themnodecuoi(head, tam);
	}
	duyetDS(head);
	inketqua(head);

	return 0;
}