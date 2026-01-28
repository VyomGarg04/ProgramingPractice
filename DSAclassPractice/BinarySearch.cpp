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
    int val,index;
    cout<<"Enter the value to find in the array : ";
    cin>>val;

    int lb=0,ub=n,mid;
    for(int i=0;i<n;i++){
        mid = (lb+ub)/2;
        for(int j=lb;j<=ub;j++){
            if(arr[mid]==val){
                index = mid;
                break;
            }
            else if(arr[mid]<val){
                lb = mid+1;
            }
            else{
                ub = mid -1;
            }
        }
    }
    cout<<"\nValue found at position : "<<index+1;
}