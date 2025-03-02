#include <iostream>

using namespace std;

struct Node {
	string giatri;
	Node* tiep;
};
typedef struct Node* node;
node head;

node taonode(string x) {
	node tmp = new Node();
	tmp->giatri = x;
	tmp->tiep = NULL;
	return tmp;
}

void themnodedau(node& head, string x) {
	node tam = taonode(x);
	if (head == NULL) head = tam;
	else {
		tam->tiep = head;
		head = tam;
	}
}

void themnodesau(node& head, string x) {
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

void duyetds(node& head) {
	node chay = head;
	while (chay != NULL) {
		cout << chay->giatri << " ";
		chay = chay->tiep;
	}
	cout << endl;
}

string ketqua(node& head) {
	int a = 1;
	string x = "";
	node chay = head;
	while (chay != NULL) {
		if (a < chay->giatri.size()) {
			a = chay->giatri.size();
			x = chay->giatri;
		}
		chay = chay->tiep;
	}
	return x;
}

int main() {
	string gtri;
	int m, n;
	cout << "nhap so node trong danh sach: ";
	cin >> m;
	cout << "nhap gia tri tung node trong danh sach: ";
	for (int i = 0; i < m; i++) {
		cin >> gtri;
		n = gtri.size();
		if (n < 20) themnodesau(head, gtri);
		else cout << "gia tri node ko hop le!";
	}
	duyetds(head);
	cout << "ket qua la: " << ketqua(head);

	return 0;
}