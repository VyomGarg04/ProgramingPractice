#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector <int> v; 
    cout<<"Enter 5 EXIT"<<endl;
    int choice;
    

    
    do{
        cout<<"Enter your choice"<<endl;
        cout<<"Enter 1 to CREATE"<<endl;
        cout<<"Enter 2 to READ"<<endl;
        cout<<"Enter 3 to UPDATE"<<endl;
        cout<<"Enter 4 to INSERT"<<endl;
        cout<<"Enter 5 EXIT"<<endl;
        int choice;
        cin>>choice;
    
        switch(choice){
        case 1:
        // create
            cout<<"\nEnter element in vector :"<<endl;
            cin>>n;
            v.push_back(n);
            break;

        case 2:
        // read
            cout<<"\nEnter elements in vector :"<<endl;
            for(int i:v){
                cout<<v[i]<<" ";
            }
            break;
        
        case 3:
        //update 
            cout<<"\nAfter incrementing each value by 1 "<<endl;
            for(int i=0;i<n;i++){
                v[i]++;
            }
            break;

        case 4:
        // update
            cout<<"\nAfter removing the last element "<<endl;
            v.pop_back();
            for(int i=0;i<n-1;i++){
                cout<<v[i]<<" ";
            }
            break;

        case 5:
        // exit
            cout<<"EXITED from the code"<<endl;
            break;
        
        default:
            cout<<"You have entered a wrong choice : ";

        }
    }while(choice!=5); 
}