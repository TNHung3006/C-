//#include <iostream>
//
//using namespace std;
//
//struct Node {
//	string giatri;
//	Node* tiep;
//};
//typedef struct Node* node;
//node head;
//
//node taonode(string x) {
//	node tmp = new Node();
//	tmp->giatri = x;
//	tmp->tiep = NULL;
//	return tmp;
//}
//
//void themnodedau(node& head, string x) {
//	node tam = taonode(x);
//	if (head == NULL) head = tam;
//	else {
//		tam = tam->tiep;
//		head = tam;
//	}
//}
//
//void themnodesau(node& head, string x) {
//	node tam = taonode(x);
//	if (head == NULL) head = tam;
//	else {
//		node chay = head;
//		while (chay->tiep != NULL) {
//			chay = chay->tiep;
//		}
//		chay->tiep = tam;
//	}
//}
//
//void DuyetDS(node& head) {
//	node chay = head;
//	cout << "gia tri cac node trong danh sach: ";
//	while (chay != NULL) {
//		cout << chay->giatri << " ";
//		chay = chay->tiep;
//	}
//	cout << endl;
//}
//
//int ketqua(node& head) {
//	node chay = head;
//	int a = 20, b = 1;
//	int stt = 0;
//	while (chay != NULL) {
//		if (a > chay->giatri.size()) {
//			a = chay->giatri.size();
//			stt = b;
//		}
//		chay = chay->tiep;
//		b++;
//	}
//	return stt;
//}
//
//int main() {
//	int m, n;
//	string x;
//	cout << "nhap so luong node trong danh sach: ";
//	cin >> m;
//	cout << "nhap gia tri tung node: ";
//	for (int i = 0; i < m;i++) {
//		cin >> x;
//		n = x.size();
//		if (n < 20) themnodesau(head, x);
//		else cout << "gia tri nhap vao khong hop le!";
//	}
//	DuyetDS(head);
//	cout << "ket qua la: " << ketqua(head);
//
//	return 0;
//}