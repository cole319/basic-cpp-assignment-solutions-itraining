#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string holderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        holderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void display() {
        cout << "Account No: " << accountNumber << "\nHolder: " << holderName
             << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(101, "John Doe", 5000);
    acc.deposit(1000);
    acc.withdraw(2000);
    acc.display();
    return 0;
}
