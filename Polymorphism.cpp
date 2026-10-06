// #include <bits/stdc++.h>
// using namespace std;
// class Calculator {
// public:    
// int add(int a,int b)
// {
//     return a+b;
// }
// int add(int a,int b,int c)
// {
//         return a+b+c;

// }
// double add(double a,double b)
// {
//     return a+b;
// }
// };

// int main() {
// 	// your code goes here
// 	Calculator clac;
	
// 	cout<< clac.add(10,20,30)<<endl;
// 	cout<< clac.add(5.5,3.2)<< endl;
// 	return 0;

// }

#include <bits/stdc++.h>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout<<"Drawing a shape"<<endl;  
    }
    
    virtual~Shape(){}
    
};
class Circle: public Shape{
    public:
    void draw() override{
        cout<<"drawing sq"<<endl;
    }
};
class Square : public Shape{
    public:
    void draw() override{
        cout<<"Drawing a square"<<endl;
    }
};

int main() {
    Shape*shape1=new Circle();
    Shape*shape2=new Square();
	Shape*shape3=new Shape();
    shape1->draw();
    shape2->draw();
    shape3->draw();
    delete shape1;
     delete shape2;
     delete shape3;
     
     return 0;
}