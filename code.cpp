#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string accountNumber;
    string accountHolderName;
    float balance;

public:
    BankAccount(string accNum, string accHolderName, float bal)
    {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        balance = bal;
    }

    string getAccountNumber()
    {
        return accountNumber;
    }

    string getAccountHolderName()
    {
        return accountHolderName;
    }

    float getBalance()
    {
        return balance;
    }

    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposit of " << amount << " successful. New balance: " << balance << endl;
    }

    void withdraw(float amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful. New balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient funds. Current balance: " << balance << endl;
        }
    }

    void recommendInvestment()
    {
        if (balance >= 10000.00)
        {
            cout << "Based on your balance, we recommend investing in our low-risk mutual fund." << endl;
        }
        else if (balance >= 5000.00)
        {
            cout << "Based on your balance, we recommend investing in our medium-risk mutual fund." << endl;
        }
        else
        {
            cout << "Based on your balance, we do not recommend investing at this time." << endl;
        }
    }
    void recommendCreditCard()
    {
        if (balance >= 5000.00)
        {
            cout << "Based on your balance, you may be eligible for our platinum credit card with a credit limit of $10,000." << endl;
        }
        else if (balance >= 2000.00)
        {
            cout << "Based on your balance, you may be eligible for our gold credit card with a credit limit of $5,000." << endl;
        }
        else
        {
            cout << "Based on your balance, you are not currently eligible for a credit card." << endl;
        }
    }

    void checkSpecialOffers()
    {

        if (balance >= 10000.00)
        {
            cout << "Congratulations! You are eligible for our special offer. Please contact customer service for more details." << endl;
        }
        else
        {
            cout << "Sorry, there are no special offers available for you at this time." << endl;
        }
    }
};

int main()
{
    BankAccount myAccount("1234567890", "John Doe", 1000.00);

    cout << "Account details:" << endl;
    cout << "Account number: " << myAccount.getAccountNumber() << endl;
    cout << "Account holder name: " << myAccount.getAccountHolderName() << endl;
    cout << "Balance: " << myAccount.getBalance() << endl;

    myAccount.deposit(500.00);
    myAccount.withdraw(200.00);
    myAccount.withdraw(1500.00);

    myAccount.recommendInvestment();
    myAccount.recommendCreditCard();
    myAccount.checkSpecialOffers();

    return 0;
}
