//Ascending order binary searching
#include<iostream>
using namespace std;
int main(){

int n,find,mid=0;
cout<<"How many value you want to take?" <<endl;
cin>>n;
int arr[n];
cout<<"Enter your value with ascending order"<<endl;
for(int i=0; i<n; i++)
cin>>arr[i];

for(int i=0; i<n-1; i++){
if(arr[i]>arr[i+1]){
cout<<"I said, you have to input values with ascending order. But you do not care about my command. So,  you do not have any right to use my code. just go ahead";
exit(0);
}

}

cout<<"What value you want to found?"<<endl;
cin>>find;

int hi=n-1;
int lo=0;
if(find>arr[hi]){
cout<<"This value is not here.Moreover this value is greater than the height value of the array."<<endl;
exit(0);
}
else if(find<arr[lo]){
cout<<"This value is not here.Moreover this value is smaller than the smallest value of the array."<<endl;
exit(0);
}

do{
mid=(hi+lo)/2;
if(arr[mid]==find){
cout<<"Yes , it is here,, The index num is "<<mid<<endl;
break;
}
else if(find>arr[mid])
lo=mid+1;

else if(find<arr[mid])
hi=mid-1;

if(mid==hi){
cout<<"The value is not here";
break;
}
}while(true);

}
    
