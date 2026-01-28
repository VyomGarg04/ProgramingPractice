#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    cout<<"Enter a sentence : "<<endl;
    string st;
    cin>>st;

    map<char,int> chars;

    for(auto ch:st){
        chars[ch] = 0;
    }

    
}