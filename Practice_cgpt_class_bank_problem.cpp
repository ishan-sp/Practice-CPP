/*
Certainly! Here's a tougher C++ problem that involves designing a class and thinking about more complex interactions:

Question:

Create a C++ class named BankAccount to represent a basic bank account. The class should have the following features:

Private member variables to store the account number, account holder's name, and current balance.
Public member functions to deposit money, withdraw money, and check the balance.
Use constructors to initialize the account with an account number and an initial balance.
Create a static member variable to keep track of the total number of bank accounts created.
Overload the + operator to allow transferring money between two BankAccount objects.
Include a function to display the account details, including the account number, account holder's name, and current balance.
Here's a template to get you started:
*/

#include <iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        double accountBalance;
        string accountHolder;

    public:
        static int totalAccounts;

        BankAccount(int acc_num, string acc_holder_name, double acc_bal) {
            this->accountNumber = acc_num;
            this->accountBalance = acc_bal;
            this->accountHolder = acc_holder_name;
            totalAccounts++;
            }
        void depositAmount(int amt);
        void withdrawAmount(int amt);
        double checkBalance(void);
        void displayDetails(void);
};

int BankAccount::totalAccounts = 0;

void BankAccount :: depositAmount(int amt){
    accountBalance += amt;
    cout << "Successfully deposited " << amt << " rupees in account #" << accountNumber << endl;
}
void BankAccount :: withdrawAmount(int amt){
    accountBalance -= amt;
    cout << "Successfully withdrew " << amt << " rupees from account #" << accountNumber << endl;
}
double BankAccount :: checkBalance(void){
    cout << "Account no ----" << accountNumber << endl << "Balance ---- " << accountBalance <<endl;
}

void BankAccount :: displayDetails() {
    cout << "Account number ---- " << accountNumber << endl << "Account holder ---- " << accountHolder << endl; 
    cout << "Balance ---- " << accountBalance << endl;
}


int main() {
    BankAccount account1(459939300395, "Alex", 2500);
    BankAccount account2(324353556666, "John", 3450);
    BankAccount account3(235235644666, "Fred", 10000);

    account1.withdrawAmount(340);
    account1.displayDetails();
    cout << BankAccount :: totalAccounts;
    return 0;
}
