#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(35);
    v.push_back(64);
    v.push_back(72);
    v.push_back(25);
    v.push_back(85);

    cout<<"Entered elements are: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\nAfter deleting the last element: "<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }

    
}

