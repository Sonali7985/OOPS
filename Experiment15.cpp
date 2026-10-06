//design a program to illustrate function overriding in derived classes


// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {   // Function overriding
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void sound() {   // Function overriding
//         cout << "Cat meows" << endl;
//     }
// };

// int main() {
//     Animal a;
//     Dog d;
//     Cat c;

//     a.sound();
//     d.sound();
//     c.sound();

//     return 0;
// }
// develope a progremm using virtual functuion to demonstrate run time polymorfism with base class pointers.
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Animal *ptr;   // Base class pointer

    Dog d;
    Cat c;

    ptr = &d;
    ptr->sound();  // Calls Dog's sound()

    ptr = &c;
    ptr->sound();  // Calls Cat's sound()

    return 0;
}