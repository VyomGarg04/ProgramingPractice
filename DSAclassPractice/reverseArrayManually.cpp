#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no of array elements : ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"The reversed arry is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}