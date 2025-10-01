#include<iostream>  // No space between #include and <iostream>
using namespace std;  // Added using directive

class Demo {
private:
    int value;

public:

    Demo() {
        cout << "Default constructor called.\n";
        value = 0;
    }

    Demo(int val) {
        cout << "Parameterized constructor called.\n";
        value = val;
    }


    ~Demo() {
        cout << "Destructor called for value = " << value << "\n";
    }
};

int main() {
    Demo obj1;
    Demo obj2(10);

    return 0;
}
