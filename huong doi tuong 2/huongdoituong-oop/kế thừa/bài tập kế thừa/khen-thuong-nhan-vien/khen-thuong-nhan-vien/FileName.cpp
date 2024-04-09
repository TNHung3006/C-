#include <iostream>
#include <string>

using namespace std;

#define X 10007

class NV {
private:
	string name, email;
	float id, age, phoneNb;
public:
	void nhap() {
		cout << "Name: ";
		cin >> name;
		cout << "Email: ";
		cin >> email;
		cout << "Id: ";
		cin >> id;
		cout << "Age: ";
		cin >> age;
		cout << "PhoneNb : ";
		cin >> phoneNb;
	}
	string GetName() {
		return name;
	}
	string GetEmail() {
		return email;
	}
	float GetId() {
		return id;
	}
	float GetAge() {
		return age;
	}
	float GetPhoneNb() {
		return phoneNb;
	}
	void setName() {
		this->name = name;
	}
	void setEmail() {
		this->email = email;
	}
	void setId() {
		this->id = id;
	}
	void setAge() {
		this->age = age;
	}
	void setPhoneNb() {
		this->phoneNb = phoneNb;
	}
	void xuat() {
		cout << name << "\n" << email << "\n" << endl;
		cout << id << "\n" << age << "\n" << phoneNb << endl;
	}
};
class NVBH : public NV {
private:
	string productSold;
public:
	void nhap() {
		cout << "ProductSold: ";
		cin >> productSold;
	}
	string GetProductSold() {
		return productSold;
	}
	void setProductSold() {
		this->productSold = productSold;
	}
	void xuat() {
		NV::xuat();
		cout << productSold << endl;
	}
};

class NVHC : public NV {
private:
	float overtime;
public:
	void nhap() {
		cout << "Overtime: ";
		cin >> overtime;
	}
	float GetOvertime() {
		return overtime;
	}
	void setOvertime() {
		this->overtime = overtime;
	}
	void xuat() {
		NV::xuat();
		cout << GetOvertime() << endl;
	}
};
int main() {
	NVHC a[X];
	int n;
	cout << "nhap so luong nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "nhap thong tin nhan vien: ";
		a[i].nhap();
	}
	for (int i = 0; i < n; i++) {
		cout << "nhan vien " << i << ": ";
		a[i].xuat();
	}
	return 0;
}