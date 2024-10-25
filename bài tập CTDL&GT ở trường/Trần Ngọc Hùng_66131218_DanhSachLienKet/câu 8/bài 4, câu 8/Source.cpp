//8. Tạo danh sách liên kết đơn lưu trữ các ký tự.Cho biết thứ tự của phần tử cuối cùng mang ký tự 'A'.

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

void duyetDS(node& head) {
	node chay = head;
	cout << "gia tri cua tung node trong danh sach: \t";
	while (chay != NULL) {
		cout << chay->giatri << "\t";
		chay = chay->tiep;
	}
	cout << endl;
}

int ketqua(node& head, int& stt) {
	int a = 1;
	node chay = head;
	while (chay != NULL) {
		if (chay->giatri == 'A') {
			stt = a;
		}
		chay = chay->tiep;
		a++;
	}
	return stt;
}

int main() {
	int n, stt;
	char x;
	cout << "nhap so luong node trong danh sach: ";
	cin >> n;
	cout << "nhap gia tri tung node trong danh sach: ";
	for (int i = 0; i < n; i++) {
		cin >> x;
		themnodesau(head, x);
	}
	duyetDS(head);
	
	cout << "thu tu cuoi cung cua node co gia tri A la: " << ketqua(head, stt);

	return 0;
}