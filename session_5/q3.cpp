#include <iostream>
#include <string>
#include <cmath>

class AccountDetails {
public:
    int accountNo;
    std::string accountHolderName;
    int balance;

    bool operator==(AccountDetails const &other) const {
        return (
            accountNo == other.accountNo &&
            accountHolderName == other.accountHolderName &&
            balance == other.balance
        );
    }
};

class Account {
protected:
    AccountDetails accountDetails;

public:
    Account(AccountDetails const &_accountDetails)
        : accountDetails(_accountDetails) {}

    virtual void displayAccountDetails() {
        std::cout << accountDetails.accountNo << std::endl;
        std::cout << accountDetails.accountHolderName << std::endl;
        std::cout << accountDetails.balance << std::endl;
    }

    virtual void withdraw(int _amount) = 0;
    virtual void deposit(int _amount) = 0;
    virtual double getInterest() = 0;

    virtual ~Account() {}
};

class SavingsAccount : public Account {
    const int interestRate = 4;
    const int withdrawalLimit = 20000;

public:
    SavingsAccount(AccountDetails const &_accountDetails) : Account(_accountDetails) {}

    void displayAccountDetails() override {
        std::cout << accountDetails.accountNo << std::endl;
        std::cout << accountDetails.accountHolderName << std::endl;
        std::cout << accountDetails.balance << std::endl;
        std::cout << interestRate << std::endl;
        std::cout << withdrawalLimit << std::endl;
    }

    void withdraw(int _amount) override {
        if (_amount <= accountDetails.balance && _amount <= withdrawalLimit) {
            accountDetails.balance -= _amount;
        } else {
            std::cout << "Insufficient funds" << std::endl;
        }
    }

    void deposit(int _amount) override {
        accountDetails.balance += _amount;
    }

    double getInterest() override {
        return accountDetails.balance * interestRate / 100.0;
    }
};

class CurrentAccount : public Account {
    const int overdraftLimit = 40000;
    const int overdraftInterestRate = 2;

public:
    CurrentAccount(AccountDetails const &_accountDetails) : Account(_accountDetails) {}

    void displayAccountDetails() override {
        std::cout << accountDetails.accountNo << std::endl;
        std::cout << accountDetails.accountHolderName << std::endl;
        std::cout << accountDetails.balance << std::endl;
        std::cout << overdraftLimit << std::endl;
        std::cout << overdraftInterestRate << std::endl;
    }

    void withdraw(int _amount) override {
        if (accountDetails.balance - _amount >= -overdraftLimit) {
            accountDetails.balance -= _amount;
        } else {
            std::cout << "Overdraft Limit Crossed" << std::endl;
        }
    }

    double getInterest() override {
        if (accountDetails.balance >= 0) return 0;
        return std::abs(accountDetails.balance) * overdraftInterestRate / 100.0;
    }

    void deposit(int _amount) override {
        if (accountDetails.balance < 0) {
            double interest = getInterest();
            double totalOverdraft = std::abs(accountDetails.balance) + interest;
            if (_amount <= totalOverdraft) {
                accountDetails.balance += (_amount - totalOverdraft);
            } else {
                accountDetails.balance = _amount - totalOverdraft;
            }
        } else {
            accountDetails.balance += _amount;
        }
    }
};