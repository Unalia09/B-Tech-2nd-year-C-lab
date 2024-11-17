#include <iostream>
using namespace std;

class student{
    int id;
    public:
    student(int studentID){
        id=studentID;
        cout<<"Constructor called for student"<<id<<endl;
    }
    ~student(){
        cout<<"Destructor called for student"<<id<<endl;
    }
};
int main(){
    cout<<"Creating students:"<<endl;
    student s1(1);
    student s2(2);
    return 0;
    
}

//Operator overloading question in this we dont use friend function so we cant do c4= 10+ c1
#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){}
    complex(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    complex operator+(complex c2){
        complex temp;
        temp.a=a+c2.a;
        temp.b=b+c2.b;
        return temp;
    }
    // Changed to handle int + complex as complex + int
    complex operator+(int y){
        complex temp;
        temp.a=a+y;
        temp.b=b;
        return temp;
    }
};
int main(){
    complex c1(6,9);
    complex c2(9,6);
    cout<<"Initial equation: ";
    c1.display();
    c2.display();
    int y=12;
    cout<<"After addition: ";
    complex c4,c3;
    c3=c1+c2;
    c4=c1+y;    // Changed from y+c1 to c1+y
    c3.display();
    c4.display();
    return 0;
}

//same question but with friend function enabling it to add c4=10+c1
#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(){}
    complex(int x, int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    // Made both operator+ as friend functions
    friend complex operator+(complex c1, complex c2){
        complex temp;
        temp.a=c1.a+c2.a;    // Now using c1.a instead of just a
        temp.b=c1.b+c2.b;    // Now using c1.b instead of just b
        return temp;
    }
    friend complex operator+(int y, complex c){
        complex temp;
        temp.a=c.a+y;
        temp.b=c.b;
        return temp;
    }
};
int main(){
    complex c1(6,9);
    complex c2(9,6);
    cout<<"Initial equation: ";
    c1.display();
    c2.display();
    int y=12;
    cout<<"After addition: ";
    complex c4,c3;
    c3=c1+c2;
    c4=y+c1;
    c3.display();
    c4.display();
    return 0;
}
