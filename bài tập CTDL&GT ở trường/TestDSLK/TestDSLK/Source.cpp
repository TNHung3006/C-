#include <iostream>

using namespace std;

struct Node {
	int giatri;
	Node* tiep;
};
typedef struct Node* node;
node head;

node taonode(int x) {
	node tmp = new Node();
	tmp->giatri = x;
	tmp->tiep = NULL;
	return tmp;
}

void themnodedau(node& head, int x) {
	node tam = taonode(x);
	if (head == NULL) head = tam;
	else {
		tam = tam->tiep;
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
	cout << "gia tri cac node trong danh sach: ";
	while (chay != NULL) {
		cout << chay->giatri << " ";
		chay = chay->tiep;
	}
	cout << endl;
}

//bài 1
#if 0
int ketqua(node& head) {
	node chay = head;
	int min = -1; // gia su trong danh sach khong co so duong.
	while (chay != NULL) {
		if (chay->giatri < 0 && (min == -1 || chay->giatri > min)) {
			min = chay->giatri;
		}
		chay = chay->tiep;
	}
	return min;
}
//bài 2
int ketqua(node& head) {
	node chay = head;
	int max = 20; // gia su trong danh sach khong co so duong.
	while (chay != NULL) {
		if (chay->giatri < 0 && (max == 20 || chay->giatri > max)) {
			max = chay->giatri;
		}
		chay = chay->tiep;
	}
	return max;
}
#endif
#if 0
//bài 3
int ketqua(node& head) {
	node chay = head;
	int S = 0;
	while (chay != NULL) {
		if (chay->giatri > 0) {
			S += chay->giatri;
		}
		chay = chay->tiep;
	}
	return S;
}
//bài 4
int ketqua(node& head) {
	node chay = head;
	int S = 0;
	while (chay != NULL) {
		if (chay->giatri < 0) {
			S += chay->giatri;
		}
		chay = chay->tiep;
	}
	return S;
}
#endif
#if 0
//bài 5
int ketqua(node& head) {
	node chay = head;
	while (chay != NULL) {
		if (chay->giatri % 2 != 0) {
			return chay->giatri;
		}
		chay = chay->tiep;
	}
}
//bài 6
int ketqua(node& head) {
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
#endif
#if 0
//bài 7
int ketqua(node& head) {
	node chay = head;
	int S;
	while (chay != NULL) {
		if (chay->giatri == 'A') {
			S++;
		}
		chay = chay->tiep;
	}
	return S;
}
//bài 8
int ketqua(node& head) {
	node chay = head;
	int S = 1;
	int X;
	while (chay != NULL) {
		if (chay->giatri == 'A') {
			X = S;
		}
		chay = chay->tiep;
		S++;
	}
	return X;
}
#endif

int main() {
	int m, n;
	cout << "nhap so luong node trong danh sach: ";
	cin >> m;
	cout << "nhap gia tri tung node trong danh sach: ";
	for (int i = 0; i < m; i++) {
		cin >> n;
		themnodesau(head, n);
	}
	DuyetDS(head);
	cout << "ket qua la: " << ketqua(head);

	return 0;
}