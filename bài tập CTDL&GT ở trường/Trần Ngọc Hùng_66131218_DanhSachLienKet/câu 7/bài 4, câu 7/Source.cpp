
//7. Tạo danh sách liên kết đơn lưu trữ các ký tự.Đếm số ký tự 'A' có trong danh sách liên kết đơn đã tạo.
#include <iostream>

using namespace std;

struct Node {
	char giatri;
	Node* tiep;
};
typedef struct Node* node;
node head;

node taonode(char x) {
	node tmp = new Node();
	tmp->giatri = x;
	tmp->tiep = NULL;
	return tmp;
}

void themnodedau(node& head, char x) {
	node tam = taonode(x);
	if (head == NULL) head = tam;
	else {
		tam->tiep = head;
		head = tam;
	}
}

void themnodesau(node& head, char x) {
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
	cout << "gia tri cua cac node trong danh sach: \t";
	while (chay != NULL) {
		cout << chay->giatri << "\t";
		chay = chay->tiep;
	}
	cout << endl;
}

int ketqua(node head) {
	int S = 0;
	node chay = head;
	while (chay != NULL) {
		if (chay->giatri == 'A') {
			S++;
		}
		chay = chay->tiep;
	}
	return S;
}

int main() {
	int n;
	char m;
	cout << "nhap so luong node trong danh sach: ";
	cin >> n;
	cout << "nhap gia tri cua tung node trong danh sach: ";
	for (int i = 1; i <= n; i++) {
		cin >> m;
		themnodesau(head, m);
	}
	DuyetDS(head);
	cout << "so luong ki tu A co trong DS: " << ketqua(head);

	return 0;
}