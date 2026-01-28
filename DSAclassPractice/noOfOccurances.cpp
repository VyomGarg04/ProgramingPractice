#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int n;
    cout<<"Enter number of elements :"<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements in vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Enter the value to count the occurance "<<endl;
    int val;
    cin>>val;
    int count=0;
    for(int i=0;i<n;i++){
        if(v.at(i)==val)
            count++;
    }
    cout<<"\nTotal number of "<<val<<"'s are :"<<count;
}