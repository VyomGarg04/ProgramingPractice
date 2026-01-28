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
        int max = arr[0];
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
    cout<<"Maximum element in array : "<<max<<endl;
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Minimum element in array : "<<min;
}