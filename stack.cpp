#include <iostream>
using namespace std;

const int Max=5;
class stack{
    int arr[Max];
    int top;
    public:
    stack(){
        top=-1;
    }
    void operator+(int ele){
        if(top==Max-1){
            cout<<"Overflow"<<endl;
        }else{
            top++;
            arr[top]=ele;
        }
    }
    void operator--(int){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }else{
            int p=arr[top];
            cout<<p<<"is the popped out element"<<endl;
            top--;
        }
    }
    void display(){
        cout<<"The elements are: "<<endl;
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    int choice, ele;
    stack s;
    do{
        cout<<"1.Push"<<"\t"<<"2.Pop"<<"\t"<<"3.Display"<<"\t"<<"4.Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<"Enter the element you wish to push: ";
            cin>>ele;
            s+(ele);
            break;
            case 2:
            s--;
            break;
            case 3:
            s.display();
            break;
            case 4:
            break;
            default:
            cout<<"Invalid choice"<<endl;
        }
    }
    while(choice!=4);
    return 0;
}
