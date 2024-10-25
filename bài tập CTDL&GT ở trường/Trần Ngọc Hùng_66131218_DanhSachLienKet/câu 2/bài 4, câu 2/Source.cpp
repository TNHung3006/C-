#include <iostream>

using namespace std;

//2. Tạo danh sách liên kết đơn lưu trữ các số thực. Tìm số âm lớn nhất trong danh sách liên kết đơn
//đã tạo.
struct Node {
	int data;
	Node *next;
};
typedef struct Node* node;
node head;

node taonode(int x) {
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

node themNodedau(node& head, int x) {
	node tam = taonode(x);
	if (head == NULL) head = tam;
	else {
		tam->next = head;
		head = tam;
	}
	return tam;
}
node themnodesau(node& head, int x) {
	node tam = taonode(x);
	if (head == NULL) head = tam;
	else {
		node chay = head;
		while (chay->next != NULL) {
			chay = chay->next;
		}
		chay->next = tam;
	}
	return tam;
}

void duyetdanhsachnode(node& head) {
	if (head == NULL) cout << "không có node trong danh sách";
	else {
		node chay = head;
		cout << "gia tri cua cac node trong danh sach: ";
		while (chay != NULL) {
			cout << chay->data << "\t";
			chay = chay->next;
		}
		cout << endl;
	}
}

void timsoamlonnhat(node& head) {
	node chay = head;
	int max = 1; //gia su trong danh sách không có số âm
	while (chay != NULL) {
		if (chay->data < 0 && (max == 1 || chay->data > max)) { 
			max = chay->data;
		}
		chay = chay->next;
	}
	if (max == 1) cout << "khong co so am trong danh sach";
	else cout << "so am lon nhat trong danh sach la: " << max;
}

int main() {
	//node head = NULL;
	int n, chua;
	cout << "nhap so luong cac node trong danh sach: ";
	cin >> n;
	cout << "nhap gia tri cac node: ";
	for (int i = 1; i <= n; i++) {
		cin >> chua;
		themnodesau(head, chua);
	}
	duyetdanhsachnode(head);
	timsoamlonnhat(head);

	return 0;
}