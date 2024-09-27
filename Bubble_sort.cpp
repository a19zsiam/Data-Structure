//Bubble sort
#include<iostream>
using namespace std;
int main(){
int count=0, temp,n;
cout<<"How many value do you want to input ";
cin>>n;
int arr[n];

cout<<"Enter your value "<<endl;
for(int i=0; i<n; i++)
cin>>arr[i];

for(int i=0; i<n-1; i++){
for(int j=0; j<n-1-i; j++){
if(arr[j]<arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
count++;
}
}
}

cout<<"The sorted array is "<<endl;
for(int i=0; i<n; i++)
cout<<arr[i]<<"\t";
cout<<"\nTotal swap is "<<count;


return 0;
}
