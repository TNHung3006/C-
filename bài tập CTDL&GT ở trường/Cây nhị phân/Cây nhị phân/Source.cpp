#include <iostream>
using namespace std;


struct Nut {
	int gtri;
	Nut *right, *left;
};
typedef struct Nut* nut;
nut root, root1;

//khởi tạo cây 
void Khoitaocay(nut& root) {
	root == NULL; // cây rỗng
}

//Tạo Cây
void mocnut(nut& root, int x) {
	if (root == NULL) {
		nut tmp = new Nut(); // khởi tạo 1 nut để thêm vào cây
		tmp->gtri = x;
		tmp->left = NULL;
		tmp->right = NULL;
		root = tmp;
	}
	else {
		//nếu phần tử thêm vào nhỏ hơn gốc thì thêm nó vào nut bên trái và ngược lại.
		if (root->gtri >= x) mocnut(root->left, x);
		else mocnut(root->right, x);
	}
}

void taocay(nut& root) {
	int tmp;
	do {
		cout << "nhap so nguyen, nhap so 0 de dung: ";
		cin >> tmp;
		if (tmp != 0) mocnut(root, tmp);
	} while (tmp != 0);
}

//Duyệt cây
//LNR
void duyetLNR(nut& root) {
	if (root != nullptr) {
		duyetLNR(root->left);
		cout << root->gtri << " ";
		duyetLNR(root->right);
	}
}
//LRN
void duyetLRN(nut& root) {
	if (root != nullptr) {
		duyetLRN(root->left);
		duyetLRN(root->right);
		cout << root->gtri << " ";
	}
}
//NRL
void duyetNRL(nut& root) {
	if (root != nullptr) {
		cout << root->gtri << " ";
		duyetNRL(root->right);
		duyetNRL(root->left);
	}
}

//Đếm số nút, tính tổng các nút.
int demsonut(nut &root) {
	if (root == nullptr) return 0;
	return 1 + demsonut(root->left) + demsonut(root->right);
}

int tinhtongnut(nut& root) {
	if (root == NULL) return 0;
	if (root->left == NULL && root->right == NULL) return root->gtri;
	return root->gtri + tinhtongnut(root->left) + tinhtongnut(root->right);
}

//Đếm số lá, in các giá trị lá, tính tổng lá
int demla(nut& root) {
	if (root == NULL) return 0;
	if (root->left == NULL && root->right == NULL) return 1;
	return demla(root->left) + demla(root->right);
}
void inla(nut& root) {
	if (root != NULL) {
		if (root->left == NULL && root->right == NULL) cout<< root->gtri << " ";
		else {
			inla(root->left);
			inla(root->right);
		}
	}
}
int tongLa(nut &root)
{
	if (root == NULL) return 0;
	if ((root->left == NULL) && (root->right == NULL)) return root->gtri;
	return tongLa(root->left) + tongLa(root->right);
}

//Đếm các nut chẵn
int demnutchan(nut& root) {
	if (root == NULL) return 0;
	if (root->gtri % 2 == 0) return 1 + demnutchan(root->left) + demnutchan(root->right);
	return demnutchan(root->left) + demnutchan(root->right);
}

//Tính chiều cao của cây
int max(int a, int b) {
	if (a >= b) return a;
	return b;
}
int chieucao(nut& root) {
	if (root == NULL) return 0;
	return 1 + max(chieucao(root->left), chieucao(root->right));
}

//Đếm số nút có tổng cây con trái lớn hơn tổng cây con phải.
int demnuttongtraiphai(nut& root) {
	if (root == NULL) return 0;
	if (tinhtongnut(root->left) > tinhtongnut(root->right));



	///...
}

//hàm nhập dữ liệu cây để duyệt
void menu(nut& root) {
	while (true) {
		system("cls");	// dùng để không in lặp lại các dòng lệnh
		cout << "\n============MENU============";
		cout << "\n1. nhap du lieu";
		cout << "\n2. xuat du lieu cay NRL";
		cout << "\n3. xuat du lieu cay LNR";
		cout << "\n4. xuat du lieu cay LRN";
		cout << "\n0. ket thuc";
		cout << "\n============================";

		int luachon;
		cout << "\nnhap lua chon: ";
		cin >> luachon;
		if (luachon < 1 || luachon > 4) {
			cout << "\nlua chon khong hop le";
			break;
		}
		else if (luachon == 1) {
			int x;
			cout << "\nnhap so nguyen x: ";
			cin >> x;
			mocnut(root, x);
		}
		else if (luachon == 2){
			cout << "\nduyet cay theo NRL\n";
			duyetNRL(root);
			system("pause");
			cout << endl;
		}
		else if (luachon == 3) {
			cout << "\nduyet cay theo lNR\n";
			duyetLNR(root);
			system("pause");
			cout << endl;
		}
		else if (luachon == 4) {
			cout << "\nduyet cay theo lRN\n";
			duyetLRN(root);
			system("pause");
			cout << endl;
		}
	}
}

int main() {
	Khoitaocay(root);
	menu(root);

	return 0;
}