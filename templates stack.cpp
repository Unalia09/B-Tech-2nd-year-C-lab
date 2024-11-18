#include <iostream>
#include <string>
using namespace std;

template <class T>
class stack{
    static const int MAX = 100;
    int top;
    T array[100];
    public:
    stack(){
        top = -1;
    }
    
    void push(T item){
        if (top == MAX-1){
            cout << "Overflow" << endl;
        }else{
            top++;
            array[top] = item;
        }
    }
    
    T pop(){
        if(top == -1){
            cout << "Stack underflow" << endl;
            return T(); // Return default value of type T
        }else{
            T p = array[top];  // Changed int to T
            cout << "Popped out value is: " << p << endl;
            top--;
            return p;
        }
    }
    
    void display(){  // Added display function
        if(top == -1){
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements are: ";
        for(int i = top; i >= 0; i--){
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    stack <int> s1;
    stack <char> s2;
    stack <float> s3;
    int choice, datatype;
    
    do{
        cout << "\nChoose the data type of the stack" << endl;
        cout << "1.Integer stack" << endl;
        cout << "2.Character stack" << endl;
        cout << "3.Float stack" << endl;
        cout << "4.Exit" << endl;
        cin >> datatype;
        
        if(datatype == 4) break;
        
        cout << "\nChoose the stack operation: " << endl;
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.Display" << endl;
        cout << "4.Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice){
            case 1: 
                if(datatype == 1){
                    cout << "Enter element in int type: ";
                    int element;
                    cin >> element;
                    s1.push(element);
                }
                else if(datatype == 2){
                    cout << "Enter element in char type: ";
                    char element;
                    cin >> element;
                    s2.push(element);
                }
                else if(datatype == 3){
                    cout << "Enter element in float type: ";  // Fixed text
                    float element;
                    cin >> element;
                    s3.push(element);
                }
                break;
                
            case 2:
                if(datatype == 1){
                    s1.pop();
                }
                else if(datatype == 2){
                    s2.pop();
                }
                else if(datatype == 3){
                    s3.pop();
                }
                break;
                
            case 3:
                if(datatype == 1) s1.display();
                else if(datatype == 2) s2.display();
                else if(datatype == 3) s3.display();
                break;
                
            case 4:
                break;
                
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    } while (choice != 4);
    
    return 0;
}
