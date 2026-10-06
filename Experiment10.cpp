// implement a program using smart pointers (unique_ptr and shared_ptr)to manage dynamic memory safely and avoid memory leakage.
#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    int rollNo;
    string name;

    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {

    // Using unique_ptr
    cout << "Using unique_ptr:" << endl;

    unique_ptr<Student> s1 = make_unique<Student>(101, "Sonali");
    s1->display();


    // Using shared_ptr
    cout << "\nUsing shared_ptr:" << endl;

    shared_ptr<Student> s2 = make_shared<Student>(102, "Rahul");
    shared_ptr<Student> s3 = s2;

    s2->display();

    cout << "Reference count: " << s2.use_count() << endl;

    return 0;
}