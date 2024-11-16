#include <iostream>
using namespace std;

class circle{
    double radius;
    double area;
    const double pi=3.14;
    public:
    void getdata(){
        cout<<"Enter the radius of the circle: ";
        cin>>radius;
    }
    void calculatearea(){
        area = 2*pi*radius;
        cout<<"Area of the circle is: "<<area<<endl;
    }
};
int main(){
    circle c;
    c.getdata();
    c.calculatearea();
    return 0;
}

#include <iostream>
using namespace std;
#include<string>

class student{
    
    float avg;
    string name;
    int reg_no;
    float marks[3];
    public:
    void read(){
        
        cout<<"Enter the students regisration number: ";
        cin>>reg_no;
        cin.ignore();
        cout<<"Enter the students name: ";
        getline(cin,name);
        for(int i=0;i<3;i++){
            cout<<"Enter the marks of the student: ";
            cin>>marks[i];
        }
    } 
    void calculateavg(){
        avg=(marks[0]+marks[1]+marks[2])/3.0;
        cout<<"The average marks of the student is: "<<avg<<endl;
    }
};

int main(){
    student s;
    s.read();
    s.calculateavg();
    return 0;
}

//****function overloading
#include <iostream>
using namespace std;

class Area{
    public:
    double area(double radius){
        
         return 3.14*radius*radius;
    }
    
   int area(int side){
          return side*side;    
    }
};

int main(){
    Area b;
    cout<<"The cicle area is: "<<b.area(5.0)<<endl;
    cout<<"The square area is: "<<b.area(9);
    return 0;
}

//****
#include <iostream>
using namespace std;
#include <string>
class student{
    string USN;
    string name;
    int marks[3];
    float avg;
    public:
    void read(){
        
        cout<<"Enter the USN of the student: ";
        getline(cin,USN);
        
        cout<<"Enter the name of the student: ";
        getline(cin,name);
        for(int i=0;i<3;i++){
            cout<<"Enter the marks of the student: ";
            cin>>marks[i];
        }
    }
    void average(){
        float total = marks[0]+marks[1]+marks[2];
        float smallest = marks[0];
        for(int i=0;i<3;i++){
            if (smallest>marks[i]){
                smallest = marks[i];
            }
        }
        float min = total - smallest;
        avg = min/2;
        cout<<"The average of the two greatest marks is: "<<avg<<endl;
        
    }
};

int main(){
    student s;
    s.read();
    s.average();
    return 0;
}
