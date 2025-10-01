#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    int age;
    float salary;

public:
    // Function to take input
    void getDetails() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); // clear newline character
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display details
    void showDetails() {
        cout << "\nEmployee ID: " << id;
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nSalary: $" << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n]; // Array of Employee objects

    cout << "\n--- Enter Employee Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        emp[i].getDetails();
    }

    cout << "\n--- Employee Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << ":\n";
        emp[i].showDetails();
    }

    return 0;
}

