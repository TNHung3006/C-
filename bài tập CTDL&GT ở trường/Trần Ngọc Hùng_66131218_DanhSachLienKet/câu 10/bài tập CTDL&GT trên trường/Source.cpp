#include <iostream>

using namespace std;

//10. Tạo danh sách liên kết đơn lưu trữ chuỗi ký tự có độ dài tối đa là 20. In ra giá trị \\và số thứ tự// (chuỗi ký tự)
//của phần tử có chuỗi ký tự dài nhất(phần tử đầu tiên có thứ tự là 1)

struct Node {
	string giatri;
	Node* next;
};
typedef struct Node* node;

node taonode(string x) {
	node tmp = new Node();
	tmp->giatri = x;
	tmp->next = NULL;
	return tmp;
}

void themnodedau(node &head, string x) {
	node tam = taonode(x);
	if (head == NULL) {
		head = tam;
	}
	else {
		tam->next = head;	// phải cho node tạm trỏ tới địa chỉ của node head rồi mới gán node head bằng tạm.
		head = tam;
	}
}

//C1
void themnodesau(node& head, string x) {
	node tam = taonode(x);
	if (head == NULL) head = tam;
	else {
		node a = head;
		while (a->next != NULL) {	// kiểm tra node tiếp theo có phải null hay ko
			a = a->next;		// nếu thoả điều kiện thì gán node a bằng node tiếp theo
		}
		a->next = tam;
	}
}

////C2
//void themnodesau(node& head, node &end, string x) {
//	node tam = taonode(x);
//	if (head == NULL && end == NULL) {
//		head = tam;
//		end = tam;
//	}
//	else {
//		end->next = tam;
//		end = tam;
//	}
//}

void duyetDS(node &head) {
	node bienchay = head;
	while (bienchay != NULL) {
		cout << bienchay->giatri << "\t";	// in ra gia trị từ node đàu đến node cuối
		bienchay = bienchay->next;		
	}
	cout << endl;
}

//kiểm tra kí tự có độ dài dài nhất
string ingiatri(node& head, int &stt) {
	int b = 1;
	int a = 0;
	string x = "";
	node bienchay = head;
	while (bienchay != NULL) {
		if (a < bienchay->giatri.size()) {	// kiểm tra số lượng kí tự từ node đầu đến node cuối.
			a = bienchay->giatri.size();
			x = bienchay->giatri;
			stt = b;
		}
		bienchay = bienchay->next;
		b++;
	}
	return x;
}

int main() {
	node head = NULL;	// chứa địa chỉ node đàu
	//node end = NULL;	// chứa địa chỉ node cuối
	string tam, maxchuoi;
	int m, n, stt;
	cout << "nhap so luong node trong danh sach: ";
	cin >> n;
	cout << "nhap gia tri cua tung node trong danh sach: ";
	while (n) {
		cin >> tam;
		m = tam.size();	// láy độ dài của chuỗi tạm gán cho m.
		if (m <= 20) {	// kiểm tra độ dài của chuỗi kí tự nhỏ hơn 20 kí tự thì chạy
			themnodesau(head, tam);	
			n--;
		}else{
			cout << "chuoi khong hop le\n";
		}
	}
	duyetDS(head);
	maxchuoi = ingiatri(head, stt);
	cout << "chuoi co do dai dai nhat la: " << maxchuoi << endl;
	cout << "so thu tu :" << stt;
	return 0;
}