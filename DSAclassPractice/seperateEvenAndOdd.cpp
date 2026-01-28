#include <iostream>
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
    int eCount=0,oCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) eCount++;
        else oCount++;
    }
    int eArr[eCount];
    int oArr[oCount];
    int j=0,k=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            eArr[j]=arr[i];
            j++;
        }
        else{
            oArr[k]=arr[i];
            k++;
        }
    }
    cout<<"Even Elements :"<<endl;
    for(int i=0;i<eCount;i++){
        cout<<eArr[i]<<" ";
    }
    cout<<"\nOdd Elements :"<<endl;
    for(int i=0;i<oCount;i++){
        cout<<oArr[i]<<" ";
    }


    
}