#include <iostream>

using namespace std;

#if 0
class conculato {
public:
	int add(int a, int b) {
		return a + b;
	}
	float add(float a, float b) {
		return a + b;
	}
};

int main() {
	conculato x;
	int a = 2, b = 5;
	float c = 1.3, d = 1.5;
	cout << "a + b = " << x.add(a, b) << endl;
	cout << "a + b = " << x.add(c, d) << endl;
	return 0;

#endif


class Animal {

public:
	virtual void move(){

	cout << "Animal move" << endl;
	}
};

class Dog : public Animal{

public:
	void move() override
	{
		cout << "Dog move" << endl;
	}
	
};

int main() {
	Animal* x = new Dog;
	x->move();
}