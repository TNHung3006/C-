#include <iostream>

class MyClass {
private:
    int value;

public:
    void setValue(int value) {
        this->value = value; // Sử dụng con trỏ this để truy cập thành viên value của đối tượng hiện tại
    }

    void printValue() {
        std::cout << "Value: " << this->value << std::endl; // Sử dụng con trỏ this để truy cập thành viên value của đối tượng hiện tại
    }
};

int main() {
    MyClass obj;
    obj.setValue(42);
    obj.printValue();

    return 0;
}