#include <iostream>
#include <string>
using namespace std;

class BankAccount {
 // TODO
 private:
        string accountNumber;
        string accountHolder;
        float balance;
 public:
        BankAccount(string accountNumber, string accountHolder, float balance){
            this -> accountNumber = accountNumber;
            this -> accountHolder = accountHolder;
            this -> balance = balance;
        };

    void deposit(float amount){
        balance += amount;
    };
    bool withdraw(float amount){
        if(balance >= amount){
            balance -= amount;
            return true;

        } else {

            cout << "insufficient balance\n"; 
            
            return false;
        }
    };
    void displayAccountinfo(){
        
       
    
    };
    string toString() const{
       return "Number: " + accountNumber + ", Name: " + accountHolder + ", Balance: " + to_string(balance);
    };
};

int main() {

    // Create an account with 0$
    BankAccount myAccount("ABC", "ronan", 0);
    cout<< myAccount.toString() << endl;

    // Deposite 100$
    myAccount.deposit(100);
    cout<< myAccount.toString() << endl;

    // Withdraw 80$ - Should success
    myAccount.withdraw(80);
    cout<< myAccount.toString() << endl;

    // Withdraw 30$ - Should fail
    myAccount.withdraw(30);
    cout<< myAccount.toString() << endl;

    return 0;
}