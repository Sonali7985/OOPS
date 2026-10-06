
// #include<iostream>
// class Student{
//     public:
//     std::string name;
//     // defsult constructor
//     Student(){name = "No name";}
// };
// class Book{
//     public:
//     std::string title;
//     // default constructor
//     Book(std::string t):title(t){}
// };
// Book shelf[3] = {Book("C++ Programming"), Book("Java Programming"), Book("Python Programming")};
// int main(){
//     Student classroom[3];
//     classroom[0].name = "Sonali";
//     std::cout<<classroom[0].name<<std::endl;
//     Book book1("C++ Programming");
//     std::cout<<book1.title<<std::endl;
// }

#include <bits/stdc++.h>
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};
int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    head->next = second;
    second->next = third;
    Node* current = head;
    while(current != nullptr){
        std::cout<<current->data<<" ";
        current = current->next;
    }
    std::cout<<"nullptr"<<std::endl;
    delete head;
    delete second;
    delete third;
    return 0;
}

