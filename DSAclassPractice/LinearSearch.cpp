#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int val;
    cout<<"Enter the value to find in the array : ";
    cin>>val;
    int count=0,i;
    for(i=0;i<n;i++){
        count++;
        if(arr[i]==val) break;
    }
    if(count==n){
        cout<<"Value not found: ";
        
    }
    else{
        cout<<"Value Found at position "<<i+1;
    }


}