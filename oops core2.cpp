#include <iostream>
using namespace std;

class ATM {
private:
    int balance;

public:
    ATM() {
        balance = 10000;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful\n";
        } else {
            cout << "Insufficient balance\n";
        }
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    ATM user;
    user.withdraw(3000);
    cout << "Remaining Balance: " << user.getBalance();
}
