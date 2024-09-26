#include<iostream>
using namespace std;
class stak {
    int arr[5];
    int top=-1;
    int count=0;

public:
    bool isEmpty() {
        if(top==-1)
            return true;
        else
            return false;
    }

    void push(int val) {
        if(top==4) {
            cout<<arr[count%5]<<" is replaced by "<<val<<endl;
            arr[count%5]=val;
            count++;
        }
        else {
            top++;
            arr[top]=val;
        }
    }
    void poop() {
        if (isEmpty())
            cout<<"Stack is Empty";

        else {
            cout<<"Popped "<<arr[top]<<endl;
            arr[top]=NULL;
            top--;
        }
    }

    void peek() {
        if(isEmpty())
            cout<<"The stake is empty"<<endl;

        else
            cout<<"Top value is "<<arr[top];
    }

    void display() {
        cout<<"The full stack is looking like  "<<endl;
        for(int i=0; i<=top; i++)
            cout<<arr[top-i]<<endl;
    }
};

int main() {
    int value,choice;
    stak s;
    do {
        cout<<endl<<endl<<"What do you want?"<<endl;
        cout<<"1. push()"<<endl;
        cout<<"2. poop()"<<endl;
        cout<<"3. peek()"<<endl;
        cout<<"4. Display full stake"<<endl;
        cout<<"5. Exit "<<endl;
        cout<<"Enter your choice ";

        cin>>choice;

        switch(choice) {
        case 1:
            cout<<"Enter the value ";
            cin>>value;
            s.push(value);
            break;

        case 2:
            s.poop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout<<"Thank you for seeing my code"<<endl;
            break;

        default:
            cout<<"Please enter proper option"<<endl;
        }
    } while(choice!=5);

    return 0;
}
