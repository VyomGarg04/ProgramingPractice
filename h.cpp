#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotationTwoPoint(vector<int> arr){
    vector<int> v;
        for(int i=0;i<arr.size();i++){
            int leader = arr[0];
            if(leader<arr[i]){
                leader = arr[i];
            }
            v.push_back(leader);
        }
        for(int i=0;i<v.size();i++)
            cout<<v[i];
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

    vector<int> result = rotationTwoPoint(v);

    for(int i=0;i<n;i++)
        cout<<result.at(i)<<" ";
}