#include <iostream>
#include <string>
#include <vector>

using namespace std;

// User behavior data class
class UserBehaviorData
{
public:
    vector<string> interests;
    int accountBalance;

    UserBehaviorData(vector<string> interests, int accountBalance)
    {
        this->interests = interests;
        this->accountBalance = accountBalance;
    }
};

// Personalized offering class
class PersonalizedOffering
{
public:
    string productName;
    double discountPercentage;

    PersonalizedOffering(string productName, double discountPercentage)
    {
        this->productName = productName;
        this->discountPercentage = discountPercentage;
    }
};

// Banking app class
class BankingApp
{
private:
    vector<string> products;

public:
    BankingApp(vector<string> products)
    {
        this->products = products;
    }

    void login()
    {
        // Simulate login functionality
        cout << "User logged in" << endl;
    }

    PersonalizedOffering getPersonalizedOffering(UserBehaviorData userBehaviorData)
    {
        // Simulate personalized offering generation based on user behavior data
        if (userBehaviorData.interests.size() > 0 && userBehaviorData.accountBalance > 1000)
        {
            PersonalizedOffering offering("Premium Credit Card", 10.0);
            return offering;
        }
        else
        {
            PersonalizedOffering offering("Savings Account", 5.0);
            return offering;
        }
    }

    void displayOffering(PersonalizedOffering personalizedOffering)
    {
        // Simulate displaying the personalized offering to the user
        cout << "Recommended Product: " << personalizedOffering.productName << endl;
        cout << "Discount Percentage: " << personalizedOffering.discountPercentage << "%" << endl;
    }

    void showAllProducts()
    {
        // Display all available products to the user
        cout << "Available Products:" << endl;
        for (string product : products)
        {
            cout << "- " << product << endl;
        }
    }

    void recommendProduct(UserBehaviorData userBehaviorData)
    {
        // Recommend a product to the user based on their behavior data
        PersonalizedOffering personalizedOffering = getPersonalizedOffering(userBehaviorData);
        displayOffering(personalizedOffering);
    }
};

// Non-banking app
UserBehaviorData collectUserBehaviorData()
{
    // Simulate collecting user behavior data
    vector<string> interests = {"Travel", "Shopping"};
    int accountBalance = 5000;
    UserBehaviorData userBehaviorData(interests, accountBalance);
    return userBehaviorData;
}

// Main function
int main()
{
    // Define available products for the banking app
    vector<string> products = {"Savings Account", "Checking Account", "Credit Card", "Investment Account"};

    // Non-banking app
    UserBehaviorData userBehaviorData = collectUserBehaviorData();

    // Banking app
    BankingApp bankingApp(products);
    bankingApp.login();                            // User logs into the banking app
    bankingApp.showAllProducts();                  // Display all available products to the user
    bankingApp.recommendProduct(userBehaviorData); // Recommend a product to the user based on their behavior data

    return 0;
}
