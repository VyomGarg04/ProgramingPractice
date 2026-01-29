#include<iostream>
using namespace std;

class BankAccount{
    public:
        int accountNumber;
        double balance;
        string accountHolderName;


        void deposit(double amount) { 
            if (amount > 0) { 
                balance += amount; 
                cout << "Deposited: " << amount << endl; 
            } 
            else { 
                cout << "Invalid deposit amount!" << endl; 
            } 
        } 

        void withdraw(double amount) { 
            if (amount > 0 && amount <= balance){ 
                balance -= amount; 
                cout << "Withdrawn: " << amount << endl; 
            } 
            else{ 
                cout << "Invalid or insufficient balance!" << endl; 
            } 
        } 

        void display() { 
            cout << "\n--- Account Details ---" << endl; 
            cout << "Account Holder: " << accountHolderName << endl; 
            cout << "Account Number: " << accountNumber << endl; 
            cout << "Balance: " << balance << endl; 
        } 
};

int main(){
    BankAccount acc1;
    acc1.accountNumber = 10101; 
    acc1.balance = 5000.0; 
    acc1.accountHolderName = "Amit Sharma";
    acc1.deposit(1500.0); 
    acc1.withdraw(2000.0);  

    acc1.display();
}