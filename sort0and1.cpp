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
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v.at(i)==0) i++;
        else if(v.at(j)==1) j--;
        else if(v.at(i)==1 && v.at(j)==0){
            v.at(i)=0;
            v.at(j)=1;
            i++;
            j--;
        }
        else if(v.at(i) == 1 && v.at(j) == 1)
            j--; 
        
    }
    
}
int main(){
    cout<<"Enter the size of array : ";
    int size;
    cin>>size;
    vector<int> v;
    cout<<"Enter array of 0's and 1's"<<endl;
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