#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    std::string accountHolderName;
    double balance;

public:

    BankAccount(const std::string& holderName, double initialBalance) : accountHolderName(holderName), balance(initialBalance) {

        cout << "Account created for " << accountHolderName << " with initial balance: $" << balance <<endl;
    }

    ~BankAccount() {
      
        cout << "Account for " << accountHolderName << " destroyed." <<endl;
    }

   
    void display() const {
        cout << "Account Holder: " << accountHolderName << ", Balance: $" << balance <<endl;
    }
};

int main() {
  
    BankAccount account1("John Doe", 1000.0);

    account1.display();
    return 0;
}
