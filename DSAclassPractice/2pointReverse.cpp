#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> rotationTwoPoint(vector<int> v,int s,int e){
    int n=v.size();
    
    while(s<=e){
        int t = v.at(s);
        v.at(s)=v.at(e);
        v.at(e)=t;
        s++;
        e--;
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
    int start,end;
    cout<<"Enter the starting index for reverse : "<<endl;
    cin>>start;
    cout<<"Enter the ending index of the reverse : "<<endl;
    cin>>end;

    vector<int> result = rotationTwoPoint(v,start,end);

    for(int i=0;i<n;i++)
        cout<<result.at(i)<<" ";
}