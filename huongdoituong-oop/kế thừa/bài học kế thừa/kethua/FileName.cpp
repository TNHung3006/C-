﻿#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// 3 cách in giá trị trong kế thừa

#if 0

class Person {
private:
	string name;
	string address;
public:
	string getName() {
		return name;
	}
	string getAddress() {
		return address;
	}
	void setName(string name) {
		this->name = name;
	}
	void setAddress(string address) {
		this->address = address;
	}
	void xuat() {
		cout << name << "\n" << address << endl;
	}
};

class Student : public Person{
private:
	float gpa;
public:
	float getGpa() {
		return gpa;
	}
	void setGpa(float gpa) {
		this->gpa = gpa;
	}

	void xuat() {

		// cách in 1
		Person::xuat();
		cout << fixed << setprecision(2) << getGpa() << endl;

		// cách in 2
		cout << getName() << "\n" << getAddress() << "\n" << fixed << setprecision(2) << getGpa();
	}
};

int main() {
	Student x;
	x.setName("Tran Ngoc hung");
	x.setAddress("Khanh Hoa");
	x.setGpa(3.777);
	x.xuat();
	return 0;
}

#endif
#if 0
class Person {
private:
	string name;
	string address;
public:
	void nhap() {
		cout << "nhap ho ten: ";
		getline(cin, name);
		cout << "nhap dia chi: ";
		getline(cin, address);
	}
	//string getName() {
	//	return name;
	//}
	//string getAddress() {
	//	return address;
	//}
	//void setName(string name) {
	//	this->name = name;
	//}
	//void setAddress(string address) {
	//	this->address = address;
	//}
	void xuat() {
		cout << name << "\n" << address << endl;
	}
};

class Student : public Person {
private:
	float gpa;
public:
	void nhap() {
		Person::nhap();
		cout << "nhap diem:";
		cin >> gpa;
	}
	//float getGpa() {
	//	return gpa;
	//}
	//void setGpa(float gpa) {
	//	this->gpa = gpa;
	//}

	void xuat() {

		Person::xuat();
		cout << fixed << setprecision(2) << gpa << endl;
	}
};
int main() {
	Student x;
	x.nhap();
	x.xuat();
	return 0;
}
#endif
#if 1
class Person {
private:
	string name;
	string address;
public:
	Person(string name, string address) {
		this->name = name;
		this-> address = address;
	}
	string getName() {
		return name;
	}
	string getAddress() {
		return address;
	}
	void setName(string name) {
		this->name = name;
	}
	void setAddress(string address) {
		this->address = address;
	}
	void xuat() {
		cout << name << "\n" << address << endl;
	}
};

class Student : public Person {
private:
	float gpa;
public:
	Student(string name, string address, float gpa) : Person(name, address) {
		this->gpa = gpa;
	}
	float getGpa() {
		return gpa;
	}
	void setGpa(float gpa) {
		this->gpa = gpa;
	}

	void xuat() {

		Person::xuat();
		cout << fixed << setprecision(2) << getGpa() << endl;
	}
};
int main() {
	Student x("Tran Ngoc Hung", "Khanh Hoa", 3.5555);
	x.xuat();
	return 0;
}
#endif
#if 0 // kế thừa nhiều mức
	// hàm tạo từ trên xuống dưới, hàm huỷ từ dưới lên trên
class A {
public:
	A() {
		cout << "Contructor cua lop A\n";
	}
	~A() {
		cout << "Destructor cua lop A\n";
	}
	void xinchao() {	// nếu ở classB,A và ở đay ko có hàm xinchao thì nó sẽ báo lỗi vì chưa đc định nghĩa
		cout << "yasir chacchanlanhuvairoi\n";
	}
};

class B : public A {	
public:
	B() {
		cout << "Contructor cua lop B\n";
	}
	~B() {
		cout << "Destructor cua lop B\n";
	}
	void xinchao() {	// nếu ở đay ko có hàm xin chao thì nó sẽ nhảy lên lớp cha của nó là lớp A
		cout << "yasir chacchanlanhuvairoi\n";
	}
};

class C : public B {
public:
	C() {
		cout << "Contructor cua lop C\n";
	}
	~C() {
		cout << "Destructor cua lop C\n";
	}
	void xinchao() {	// nếu ở đay ko có hàm xin chao thì nó sẽ nhảy lên lớp cha của nó là lớp B
		cout << "yasir chacchanlanhuvairoi\n";
	}
};
int main() {
	C abc;
	abc.xinchao();
}
#endif
#if 0
class A {
public:
	A() {
		cout << "Contructor cua lop A\n";
	}
	~A() {
		cout << "Destructor cua lop A\n";
	}
	void xinchao() {	// nếu ở classB,A và ở đay ko có hàm xinchao thì nó sẽ báo lỗi vì chưa đc định nghĩa
		cout << "yasir chacchanlanhuvairoi\n";
	}
};

class B {	
public:
	B() {
		cout << "Contructor cua lop B\n";
	}
	~B() {
		cout << "Destructor cua lop B\n";
	}
	void xinchao() {
		cout << "yasir chacchanlanhuvairoi\n";
	}
};

class C : public A, public B {
public:
	C() {
		cout << "Contructor cua lop C\n";
	}
	~C() {
		cout << "Destructor cua lop C\n";
	}
};
int main() {
	C abc;
	abc.A::xinchao();
}
#endif