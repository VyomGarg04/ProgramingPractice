#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    int n,a;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a;
        s.insert(a);
        
    }
    int k,count=1;
    cin>>k;
    for(int x:s){
       if(count==k){
           cout<<x;
       } 
       
       count++;
    }
     return 0;
}