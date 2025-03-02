#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next;
};

typedef struct Node* node; //khi typedef thì node giống như con trỏ Node* 
//nếu không typedef kiểu Node* thành node thì ở dưới code rất bất tiện.
//VD nếu không dùng node khi cấp phát vùng nhớ
// Node* tmp = new Node(); 
// - Đối với các hàm chèn thêm hoặc xoá thì ta phải dùng kiểu tham chiếu.

//Cấp phát động 1 node mới với dữ liệu là số nguyên x.
node makeNode(int x) {
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL; //NULL = nullptr
	return tmp;
}

//hàm kiểm tra rỗng
bool empty(node a) {
	return a == NULL;
}

//kiểm tra số phần tử trong DSLK (duyệt danh sách)
int Size(node a) {
	int cnt = 0;
	while (a != NULL) {
		++cnt;
		a = a->next;	// gán địa chỉ của not tiếp theo cho node hiện tại.
						//cho node hiện tại nhảy sang not tiếp theo
	}
	return cnt;
}

//thêm 1 phần tử vào đàu DSLK có 2 cách, dùng cách tham chiếu sẽ dễ hơn.
void insertFirst(node &a, int x) {		//dùng kiểu tham chiếu đã typedef sẵn
	node tmp = makeNode(x); // xin cấp phát 1 Node mới
	if (a == NULL) {	//kiểm tra DSLK, nếu rỗng thì thêm phần tử vào đầu hay cuối đều như nhau cho a = tmp
		a = tmp;
	}
	else {
		tmp->next = a;
		a = tmp;
	}
}
//void insertFirst(node *a, int x) {	// dùng kiểu con trỏ
//	node tmp = makeNode(x); // xin cấp phát 1 Node mới
//	if (*a == NULL) {
//		*a = tmp;
//	}
//	else {
//		tmp->next = *a;
//		*a = tmp;
//	}
//}

//Thêm 1 phần tử vào giữa DSLK
void insertMiddle(node& a, int x, int pos) {
	node tmp = makeNode(x);	// xin cấp phát 1 node mới

}

//Thêm 1 phần tử vào cuối DSLK
void insertLast(node& a, int x) {
	node tmp = makeNode(x); // xin cấp phát 1 Node mới
	if (a == NULL) {	//kiểm tra DSLK, nếu rỗng thì thêm phần tử vào đầu hay cuối đều như nhau cho a = tmp
		a = tmp;
	}
	else {
		node p = a;	// thay a bằng 1 biến bất kì nếu để a thì a sẽ duyệt qua từng phần tử và sẽ mất các phần tử trước đó vì a nắm giữ phần tử đàu tiên.
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}



int main() {
	cout << sizeof(Node) << endl;
	return 0;
}