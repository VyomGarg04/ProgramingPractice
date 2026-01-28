#include<iostream>
using namespace std;

int main(){

    int arr[5];
    cout<<"Enter 5 elements in array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<"The elements of the array are : "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}