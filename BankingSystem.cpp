#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    Account(int accNum, string accHolder, double bal)
        : accountNumber(accNum), accountHolderName(accHolder), balance(bal) {}

    virtual void calculateInterest() = 0;  // abstract method
    virtual ~Account() {}                 // virtual destructor
};

class SavingsAccount : public Account {
    double interestRate;

public:
    SavingsAccount(int accNum, string accHolder, double bal, double rate)
        : Account(accNum, accHolder, bal), interestRate(rate) {}

    void calculateInterest() override {
        double interest = balance * interestRate / 100;
        cout << "Savings Account Interest: " << interest << endl;
    }
};

class CurrentAccount : public Account {
    double overdraftLimit;

public:
    CurrentAccount(int accNum, string accHolder, double bal, double overdraft)
        : Account(accNum, accHolder, bal), overdraftLimit(overdraft) {}

    void calculateInterest() override {
        cout << "Current Account: No interest, Overdraft Limit = "
             << overdraftLimit << endl;
    }
};



int main() {
    Account* acc1 = new SavingsAccount(101, "Alice", 5000.0, 4.0);
    Account* acc2 = new CurrentAccount(102, "Bob", 3000.0, 1000.0);

    acc1->calculateInterest();
    acc2->calculateInterest();

    delete acc1;
    delete acc2;
    return 0;
}
