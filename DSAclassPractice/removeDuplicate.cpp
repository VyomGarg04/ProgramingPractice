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
    cout<<"After removing duplicates : "<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                for(int k=j;k<n-1;k++){
                    arr[k]=arr[k+1];
                }
                n--;//decreasing size
                j--;//rechek position
            }
        }
        
    }

    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

