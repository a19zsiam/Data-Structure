#include<iostream>
using namespace std;
int main(){
int temp,n,count=0;
cout<<"How many index do you want?.... ";
cin>>n;
int arr[n];
for(int i=0; i<n;i++)
cin>>arr[i];

for(int i=0; i<n-1; i++){
if(arr[i]>arr[i+1]){
temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
count++;
if(i>0){
for(int k=i; arr[k]<arr[k-1]; k--){
if(k<=0)
break;
temp=arr[k];
arr[k]=arr[k-1];
arr[k-1]=temp;
count++;
}
}
}
}

cout<<"The sorted array is "<<endl;
cout<<"Total swap is "<<count<<endl;

for(int i=0; i<n; i++)
cout<<arr[i]<<"\t";

return 0;
}
