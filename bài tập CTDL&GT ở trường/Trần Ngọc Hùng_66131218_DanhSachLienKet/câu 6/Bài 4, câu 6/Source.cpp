//6. Tạo danh sách liên kết đơn lưu trữ các số nguyên.Tìm số chẵn cuối cùng có trong danh sách liên
//kết đơn đã tạo.

#include <iostream>

using namespace std;

struct Node {
	int giatri;
	Node* tiep;
};
typedef struct Node* node;
node head;

node taonode(int x) {
	node tam = new Node();
	tam->giatri = x;
	tam->tiep = NULL;
	return tam;
}

void themnodedau(node& head, int x) {
	node tam = taonode(x);
	if (head == NULL) head = tam;
	else {
		tam->tiep = head;
		head = tam;
	}
}

void themnodesau(node& head, int x) {
	node tam = taonode(x);
	if (head == NULL) head = tam;
	else {
		node chay = head;
		while (chay->tiep != NULL) {
			chay = chay->tiep;
		}
		chay->tiep = tam;
	}
}

void DuyetDS(node& head) {
	node chay = head;
	cout << "gia tri cua danh sach lien ket don: ";
	while (chay != NULL) {
		cout << chay->giatri << "\t";
		chay = chay->tiep;
	}
	cout << endl;
}

int inketqua(node& head) {
	node chay = head;
	int S;
	while (chay != NULL) {
		if (chay->giatri % 2 == 0) {
			S = chay->giatri;
		}
		chay = chay->tiep;
	}
	return S;
}

int main() {
	int n, giatri;
	cout << "nhap so luong node trong danh sach: ";
	cin >> n;
	cout << "nhap gia tri cua tung node: ";
	for (int i = 1; i <= n; i++) {
		cin >> giatri;
		themnodesau(head, giatri);
	}
	DuyetDS(head);
	cout << "so chan cuoi cung trong danh sach: " << inketqua(head);

	return 0;
}