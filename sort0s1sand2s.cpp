#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//two pointer(iterator) approach
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void sorting(vector<int> &v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    while(mid<=high){
        if(v.at(mid)==0){
            int temp = v.at(low);
            v.at(low) = v.at(mid);
            v.at(mid) = temp;
            low++;
            mid++;
        }
        else if(v.at(mid)==2){
            int temp = v.at(high);
            v.at(high) = v.at(mid);
            v.at(mid) = temp;
            high--;
        }
        else{
            mid++;
        }
        
    }
    
}
int main(){
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;
    vector<int> v;
    cout<<"Enter array of 0's and 1's and 2's "<<endl;
    for(int i=0;i<size;i++){
        int e;
        cin>>e;
        v.push_back(e);
    }

    cout<<"Input array : "<<endl;
    display(v);

    sorting(v);
    cout<<"\nSorted array : "<<endl;
    display(v);
    
    
    
    
}