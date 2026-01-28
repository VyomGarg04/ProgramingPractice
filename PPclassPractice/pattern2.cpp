//     1
//    12
//   123
//  1234
// 12345


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
        cout<<endl;
    }
}