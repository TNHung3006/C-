//9. Tạo danh sách liên kết đơn lưu trữ chuỗi ký tự có độ dài tối đa là 20. Cho biết thứ tự của phần tử
//có chuỗi ký tự ngắn nhất(phần tử đầu tiên có thứ tự là 1).

#include <iostream>

using namespace std;

struct Node {
	string giatri;
	Node *tiep;
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

void DuyetDS(node& head) {
	if (head == NULL) cout << "khong co node trong danh sach";
	else {
		node chay = head;
		cout << "gia tri cac node trong danh sach: ";
		while (chay != NULL) {
			cout << chay->giatri << "\t";
			chay = chay->tiep;
		}
		cout << endl;
	}
}

string ketqua(node& head, int& stt) {
	int a = 20, b = 1;
	node chay = head;
	string x = "";
	while (chay != NULL) {					// kiểm tra độ dài của chuỗi kí tự từ node đàu đến node cuối
		if (a > chay->giatri.size()) {	
			a = chay->giatri.size();
			x = chay->giatri;
			stt = b;
		}
		chay = chay->tiep;
		b++;
	}
	return x;
}

int main() {
	int m, n, stt;
	string tam, minchuoi;
	cout << "nhap so luong node trong danh sach: ";
	cin >> n;
	cout << "nhap gia tri cac node trong danh sach: ";
	for (int i = 0; i < n; i++) {
		cin >> tam;
		m = tam.size();		// láy độ dài của chuỗi kí tự.
		if (m < 20) {
			themnodesau(head, tam);
		}
		else cout << "khong co gia tri thoa dieu kien de bai.";
	}
	DuyetDS(head);
	cout << "node co chuoi ki tu ngan nhat: " << ketqua(head, stt) << endl;
	cout << "thu tu cua chuoi ki tu ngan nhat: " << stt;

	return 0;
}