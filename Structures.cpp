#include <iostream>
using namespace std;

struct student{
    char name[10];
    int reg_no;
    float marks;
    
};

int main(){
    int n,i;
    struct student s[10];
    cout<<"Enter the number of students: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter student's marks: ";
        cin>>s[i].marks;
        cout<<"Enter student's name: ";
        cin>>s[i].name;
        cout<<"Enter student's registration number: ";
        cin>>s[i].reg_no;
    }
    for(i=0;i<n;i++){
        cout<<"The student details are: "<<s[i].marks<<""<<s[i].name<<""<<s[i].reg_no<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

struct student{
    char name[10];
    int reg_no;
    float marks;
    void read();
    void display();
    void sort(student array[],int size);
    
};
void student::read(){
     cout<<"Enter student's marks: ";
        cin>>marks;
        cout<<"Enter student's name: ";
        cin>>name;
        cout<<"Enter student's registration number: ";
        cin>>reg_no;
}
void student::display(){
    cout<<marks<<" "<<name<<" "<<reg_no<<endl;
}
void student::sort(student array[], int size){
    student temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j].marks>array[j+1].marks){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}
int main(){
    int n,i;
    struct student s[10];
    cout<<"Enter the number of students: ";
    cin>>n;
    for(i=0;i<n;i++){
        s[i].read();
    }
    s[0].sort(s,n);
    for(i=0;i<n;i++){
        s[i].display();
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
struct cricket{
    string tname;
    string pname;
    float bavg;
    void read() {
    cin.ignore(); // Clear any leftover input in the buffer
    cout << "Enter the team name: ";
    getline(cin, tname); // Use getline to read full team name
    cout << "Enter the player name: ";
    getline(cin, pname); // Use getline to read full player name
    cout << "Enter batting average: ";
    cin >> bavg; // Read batting average normally
}

    void display(){
        cout<<tname<<" "<<pname<<" "<<bavg<<endl;
    }
    
};
void sort(cricket array[], int size){
        cricket temp;
        int i,j;
        for(i=0;i<size-1;i++){
            for(j=0;j<size-i-1;j++){
                if(array[j].tname>array[j+1].tname){
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
    }
#structure for sorting using the tname
int main() {
    cricket c[10];
    int n;
    cout << "Enter the number of players you wish to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        c[i].read();
    }

    cout << "Player details before sorting:\n";
    for (int i = 0; i < n; i++) {
        c[i].display();
    }

    // Call the sort function
    sort(c, n);

    cout << "Player details after sorting by team name:\n";
    for (int i = 0; i < n; i++) {
        c[i].display();
    }

    return 0;
}
