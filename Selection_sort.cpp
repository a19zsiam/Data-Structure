//Selection sort
#include<iostream>
using namespace std;
int main() {
    cout<<"How many value do you want to input?"<<endl;
    int m,n,temp,count=0;
    cin>>n;
    int arr[n];
    cout<<"Enter your input "<<endl;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n-1; i++){
        int max=arr[i];

        for(int k=i+1; k<n; k++) {
            if(arr[k]>max) {
                max=arr[k];
                m=k;
            }
        }
        if(max!=arr[i]) {
            temp=arr[i];
            arr[i]=arr[m];
            arr[m]=temp;
            count++;
        }
    }
    cout<<"The sorted array is "<<endl;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<"\t";
    cout<<"\nTotal swap of the array is "<<count;
    return 0;
}
