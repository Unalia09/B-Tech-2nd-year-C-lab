#include <iostream>
#include <string>
using namespace std;

class student {
protected:
    int usn, age;
    string name;

public:
    void data() {
        cout << "Enter the USN: ";
        cin >> usn;
        cin.ignore(); // Clear buffer after integer input
        cout << "Enter the name: ";
        getline(cin, name);
    }

    int getage() {
        cout << "Enter the age: ";
        cin >> age;
        return age;
    }

    void display() {
        cout << "USN: " << usn << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class ugstudent : public student {
    int sem;
    float fees, stipend;

public:
    void getdata() {
        cout << "Enter semester: ";
        cin >> sem;
        cout << "Enter fees: ";
        cin >> fees;
        cout << "Enter stipend: ";
        cin >> stipend;
    }

    void display_ug() {
        cout << "Semester: " << sem << ", Fees: " << fees << ", Stipend: " << stipend << endl;
    }
};

class pgstudent : public student {
    int sem;
    float fees, stipend;

public:
    void getdata() {
        cout << "Enter semester: ";
        cin >> sem;
        cout << "Enter fees: ";
        cin >> fees;
        cout << "Enter stipend: ";
        cin >> stipend;
    }

    void display_pg() {
        cout << "Semester: " << sem << ", Fees: " << fees << ", Stipend: " << stipend << endl;
    }
};

int main() {
    ugstudent obj1[4];
    pgstudent obj2[4];
    int sum_ug = 0, sum_pg = 0;
    float avg_ug, avg_pg;

    // Input UG Student Data
    for (int i = 0; i < 4; i++) {
        cout << "Enter the details for UG student " << i + 1 << ": " << endl;
        obj1[i].data();
        obj1[i].getdata();
        sum_ug += obj1[i].getage();
    }

    // Display UG Student Data
    cout << "\nDetails of UG students: " << endl;
    for (int i = 0; i < 4; i++) {
        obj1[i].display();
        obj1[i].display_ug();
    }

    // Input PG Student Data
    for (int i = 0; i < 4; i++) {
        cout << "\nEnter the details for PG student " << i + 1 << ": " << endl;
        obj2[i].data();
        obj2[i].getdata();
        sum_pg += obj2[i].getage();
    }

    // Display PG Student Data
    cout << "\nDetails of PG students: " << endl;
    for (int i = 0; i < 4; i++) {
        obj2[i].display();
        obj2[i].display_pg();
    }

    // Calculate and Display Averages
    avg_ug = sum_ug / 4.0;
    avg_pg = sum_pg / 4.0;
    cout << "\nAverage age of UG students is: " << avg_ug << endl;
    cout << "Average age of PG students is: " << avg_pg << endl;

    return 0;
}
