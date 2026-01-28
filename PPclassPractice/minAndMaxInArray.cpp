#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout<<"Enter no of array elements : ";
    int n;
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements in array"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int max = v.at(0);
    for(int i=0;i<n;i++){
        if(max<v.at(i)){
            max=v.at(i);
        }
    }
    cout<<"Maximum element in array : "<<max<<endl;
    int min = v.at(0);
    for(int i=0;i<n;i++){
        if(min>v.at(i)){
            min=v.at(i);
        }
    }
    cout<<"Minimum element in array : "<<min;
}