//design a program using pointers to objects and arrays of objects to manage dynamic data structure


// #include <iostream>
// using namespace std;

// class Student {
//     int rollNo;
//     string name;
//     float marks;

// public:
//     void input() {
//         cout << "Enter Roll No: ";
//         cin >> rollNo;

//         cout << "Enter Name: ";
//         cin >> name;

//         cout << "Enter Marks: ";
//         cin >> marks;
//     }

//     void display() {
//         cout << "\nRoll No: " << rollNo;
//         cout << "\nName: " << name;
//         cout << "\nMarks: " << marks << endl;
//     }
// };

// int main() {
//     int n;

//     cout << "Enter number of students: ";
//     cin >> n;

//     // Dynamic array of objects
//     Student *students = new Student[n];

//     // Input using pointer to objects
//     Student *ptr = students;

//     for (int i = 0; i < n; i++) {
//         cout << "\nEnter details of Student " << i + 1 << ":\n";
//         (ptr + i)->input();
//     }

//     // Display records
//     cout << "\n----- Student Records -----\n";

//     for (int i = 0; i < n; i++) {
//         (ptr + i)->display();
//     }

//     // Free dynamically allocated memory
//     delete[] students;

//     return 0;
// }

//Inter-Chaining
// #include<bits/stdc++.h>
// using namespace std;
// class Parent{
//     public:
//     Parent(){
//         cout<<"1.Parent Default Constructor"<<endl;
//     }
//     Parent(int x){
//         cout<<"1.Parent Parameterized Constructor with value:"<<x<<endl;
//     }

// };
// class Child:public Parent{
//     public:
//     Child(int val):Parent(val){
//         cout<<"2.Child constructor"<<endl;
//     }

// };
// int main(){
//     Child obj(100);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Box{
//     private:
//     int weight;
// public:
//     Box(int w)
//     {
        
//         weight=w;
//     }

//   Box operator+(Box b){
//     return Box(weight+b.weight);
//   }
//   void display(){
//     cout<<"Total Weight="<<weight<<"kg";
//   }

// };
// int main(){
//     Box b1(10);
//     Box b2(207);
//     Box b3=b1+b2;
//     b3.display();
// }
#include<bits/stdc++.h>
using namespace std;
class Number{
    int x;
    public:
    Number(int n){
        x=n;

}
void operator-(){
    x=-x;
}
void display(){
    cout<<"Value of x="<<x;
}
};
int main(){
    Number n(10);
    cout<<"Before operator overloading"<<endl;
    n.display();
    -n;
    cout<<"\nAfter operator overloading"<<endl;
    n.display();
    return 0;
}