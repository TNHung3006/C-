#include <iostream>

using namespace std;

//3. Tạo danh sách liên kết đơn lưu trữ các số thực.
// Tính tổng các số dương trong danh sách liên kết đơn đã tạo.

struct Node{
	int giatri;
	Node *next;
};

typedef struct Node* node;
node head;

node taonode(int x) {
	node tam = new Node();
	tam->giatri = x;
	tam->next = NULL;
	return tam;
}

void themnodedau(node& head, int x) {
	node tam = taonode(x);
	if (head = NULL) head = tam;
	else {
		tam->next = head;
		head = tam;
	}
}

void themnodesau(node& head, int x) {
	node tam = taonode(x);
	if (head == NULL) head = tam;
	else {
		node chay = head;
		while (chay->next != NULL) {
			chay = chay->next;
		}
		chay->next = tam;
	}
}

void duyetDSnode(node& head) {
	if (head == NULL) cout << "khong co node trong danh sach\n";
	else {
		node chay = head;
		cout << "gia tri cac node trong danh sach: ";
		while (chay != NULL) {
			cout << chay->giatri << " ";
			chay = chay->next;
		}
		cout << endl;
	}	
}

int ketqua(node& head) {
	int sum = 0;
	node chay = head;
	while (chay != NULL) {
		if (chay->giatri > 0) {
			sum += chay->giatri;
		}
		chay = chay->next;
	}
	return sum;
}

int main() {
	int n, giatri;
	cout << "nhap so luong node trong danh sach: ";
	cin >> n;
	cout << "nhap gia tri moi node: ";
	for (int i = 1; i <= n; i++) {
		cin >> giatri;
		themnodesau(head, giatri);
	}
	duyetDSnode(head);
	cout << "tong cac so duong trong danh sach: " << ketqua(head);

	return 0;
}
