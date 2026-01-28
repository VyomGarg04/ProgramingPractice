//     1
//    121
//   12321
//  1234321

#include<iostream>
using namespace std;

int main(){

    cout<<"Enter a number : ";
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"  ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        for(int l=i+1;l>=1;l--){
            cout<<l<<" ";
        }
        cout<<endl;
        
    }
}