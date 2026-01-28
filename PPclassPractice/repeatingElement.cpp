#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    set<int>s;
    int n;
    cin>>n;   //n is no.of element in set and k is the position that we have to print
    
    for(int i:v){
        s.insert(v.at(i));
    }

    int k,count=1,z;
    cin>>k;
    for(int x:s){
       if(count==k){
           cout<<x;
       } 
       
       count++;
    }
     return 0;
}