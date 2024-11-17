#include <iostream>
#include <string>
using namespace std;

class complex{
    int a, b;
    public:
    void getdata(int x, int y){
        a = x;
        b = y;
    }
    complex add(complex s1, complex s2){
        complex temp;
        temp.a = s1.a+s2.a;
        temp.b = s1.b+s2.b;
        return temp;
    }
    complex add(int x , complex s){
        complex temp;
        temp.a = x + s.a;
        temp.b= s.b;
        return temp;
    }
    void display(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1;
    c1.getdata(5,6);
    complex c2;
    c2.getdata(6,7);
    complex c3;
    c3 = c3.add(c1,c2);
    int x;
    cout<<"Enter the number to add: ";
    cin>>x;
    complex c4;
    c4 = c4.add(x, c3);
    c3.display();
    c4.display();
}

//****C_POWER QUESTION
#include <iostream>
#include <cmath>
using namespace std;

class db; // Forward declaration

class dm {
    int m, cm; // Meters and centimeters

public:
    void getdata() {
        cout << "Enter meter and centimeter: ";
        cin >> m >> cm;
    }

    void display() const {
        cout << "Meters: " << m << ", Centimeters: " << cm << endl;
    }

    friend void add(db d1, dm d2);
};

class db {
    int ft, in; // Feet and inches

public:
    void getdata() {
        cout << "Enter feet and inches: ";
        cin >> ft >> in;
    }

    void display() const {
        cout << "Feet: " << ft << ", Inches: " << in << endl;
    }

    friend void add(db d1, dm d2);
};

void add(db d1, dm d2) {
    // Convert everything to centimeters
    int total_cm = (d2.m * 100 + d2.cm) + (d1.ft * 30.48) + (d1.in * 2.54);

    // Convert total centimeters back to meters and centimeters
    int meters = total_cm / 100;
    int centimeters = total_cm % 100;

    // Display the result
    cout << "Sum in meters and centimeters: " << meters << "m " << centimeters << "cm" << endl;
}

int main() {
    db d1;
    dm d2;

    // Get data for both objects
    d1.getdata();
    d2.getdata();

    // Display individual measurements
    d1.display();
    d2.display();

    // Perform addition
    cout << "Addition of the measurements: "<<endl;
    add(d1, d2);

    return 0;
}

#include <iostream>
using namespace std;

class Time {
    int hr, min;

    public:
    // Function to initialize time values
    void read(int a, int b) {
        hr = a;
        min = b;
    }

    // Function to display time in a formatted way
    void display() {
        cout << hr << " hours " << min << " mins" << endl;
    }

    // Add two time objects
    Time add(Time t1, Time t2) {
        Time temp;
        temp.min = t1.min + t2.min; // Add minutes
        temp.hr = t1.hr + t2.hr + (temp.min / 60); // Add hours and adjust for overflow
        temp.min = temp.min % 60; // Ensure minutes are within 0-59
        return temp;
    }

    // Add time and minutes
    Time add(Time t, int x) {
       Time temp;
        temp.min = t.min + x; // Add minutes
        temp.hr = t.hr + (temp.min / 60); // Adjust hours for overflow
        temp.min = temp.min % 60; // Ensure minutes are within 0-59
        return temp;
    }
};

int main() {
   Time t1, t2, t3, t4;
    t1.read(5, 7);  // Initialize t1
    t2.read(9, 6);  // Initialize t2
    int x = 12;     // Additional minutes to add

    // Add two time objects
    t3 = t3.add(t1, t2);

    // Add minutes to a time object
    t4 = t4.add(t1, x);

    // Display results
    t3.display();
    t4.display();

    return 0;
}
