// #include<bits/stdc++.h>
// using namespace std;
// class Account{
//     private:
//     string holderName;
//     double balance;
//     public:
//     Account(){
//         holderName="Unknown";
//         balance=0.0;

//     }
//     Account(string name){
//         holderName=name;
//         balance=0.0;
//     }
//     Account(string name,double initialBalance){
//         holderName=name;
//         balance=initialBalance;
//     }
//     void display(){
//         cout<<"Holder:"<<holderName<<"Balance:$"<<balance<<endl;
//     }
// };
// int main(){
//     Account acc1;
//     Account acc2("Sonali");
//     Account acc3("Vivek",600.67);
//     acc1.display();
//       acc2.display();
//  acc3.display();

//  return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class Player{
    private:
    string name;
    int score;
    public:
    Player(string n,int s){
        name=n;
        score=s;
        cout<<"Main constructor called for"<<name<<endl;
cout<<"Single argument constructor finished"<<endl;
    }

};
int main(){
    
    Player p1("Sonali",100);
    return 0;
}


#include<iostream>
using namespace std;
class parent{
    private:
    int a=10;
    protected:
    int b=20;
    public:
    int c=30;
};
class child:public parent{
    public:
    void display(){
        cout<<"Value of a:"<<a<<endl;
        cout<<"Value of b:"<<b<<endl;
        cout<<"Value of c:"<<c<<endl;
    }   
};
int main(){
    child obj;
    obj.display();
    return 0;
}
#include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"Base constructor"<<endl;
    }
    ~base(){
        cout<<"Base destructor"<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"Derived constructor"<<endl;
    }
    ~derived(){
        cout<<"Derived destructor"<<endl;
    }
};
int main(){
    derived obj;
    return 0;
}