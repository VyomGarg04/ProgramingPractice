#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotationLeft(vector<int> v,int k){
    int n=v.size();
    k %= n;
    while(k>0){
        int temp = v.at(0);
        for(int i=1;i<n;i++){
            v[i-1]=v[i];
        }
        v[n-1]=temp;
        k--;
    }
    return v;
}

int main(){
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    vector<int> v(n);
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int key;
    cout<<"Enter the key by which you want to raoate the array : "<<endl;
    cin>>key;

    vector<int> result = rotationLeft(v,key);

    for(int i=0;i<n;i++)
        cout<<result.at(i)<<" ";
}