#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance) {
    cout << "Your balance is: $" << fixed << setprecision(2) << balance << endl;
}

double withdraw(double balance) {
    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount!" << endl;
        return 0;
    }
    else if (amount > balance) {
        cout << "Insufficient balance!" << endl;
        return 0;
    }
    else {
        return amount;
    }
}

double deposit() {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount!" << endl;
        return 0;
    }
    else {
        return amount;
    }
}

int main() {
    double balance = 0.00;
    int choice;

    do {
        cout << "\n*******************************\n";
        cout << "1. Show balance\n";
        cout << "2. Deposit money\n";
        cout << "3. Withdraw money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            showBalance(balance);
            break;

        case 2:
            balance += deposit();
            showBalance(balance);
            break;

        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;

        case 4:
            cout << "Thanks for visiting 😊" << endl;
            break;

        default:
            cout << "Wrong choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
