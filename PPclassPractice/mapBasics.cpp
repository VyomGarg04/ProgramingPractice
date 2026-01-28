#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int> marks;

    //input method 1
    marks.insert({"Amit",85});
    marks.insert({"Priya",91});

    //input method 2
    marks["Rahul"]=89;
    marks["Neha"]=83;


    //updation
    marks["Rahul"] = 90;

    //searching
    string name = "Priya";
    auto it = marks.find(name);

    if(it != marks.end())
        cout<<"Marks of "<< name <<" is "<<it->second;
    else
        cout<<"Not found!!";
}