#include<iostream>
using namespace std;
class Queue{
int top=-1;
int count=0;
int arr[5];
public:
bool isEmpty(){
if(top==-1)
return true;
else 
return false;
}

void enqueue(int val){
if(top==4){
cout<<arr[count%5]<<" is replaced by "<<val<<endl;
arr[count%5]=val;
count++;
}
else 
{
top++;
arr[top]=val;
}
}
void dequeue(){
if(isEmpty())
cout<<"The Queue is empty"<<endl;

else {
cout<<arr[0]<<" Dequeued"<<endl;
for(int i=0; i<=top; i++)
arr[i]=arr[i+1];
arr[top]=NULL;
top--;
}
}
void front(){
cout<<arr[top]<<" is at the front "<<endl;
}
void rear(){
cout<<arr[0]<<" is at the rear "<<endl;
}
void display(){
cout<<"The queue is looking like "<<endl;
for(int i=0; i<=top; i++)
cout<<arr[i]<<"\t";
}
};


int main(){
Queue q;
int value, choice;

do{
cout<<endl<<endl<<"What you want?"<<endl;
cout<<"1.enqueue()"<<endl;
cout<<"2.dequeue()"<<endl;
cout<<"3.front()"<<endl;
cout<<"4.rear()"<<endl;
cout<<"5.display()"<<endl;
cout<<"6.Exit"<<endl;
cout<<"Enter your choice ";
cin>>choice;
switch(choice){
case 1:
cout<<"Enter the enqueue value ";
cin>>value;
q.enqueue(value);
break;

case 2:
q.dequeue();
break;

case 3:
q.front();
break;

case 4:
q.rear();
break;

case 5:
q.display();
break;

case 6:
cout<<"Thank you for visiting my code";
break;

default:
cout<<"Please enter the correct option"<<endl;
}
}while(choice!=6);


return 0;
}
