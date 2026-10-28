
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Transaction {
    int type;
    double amount;
    string reason;
};

int main() {
    vector<Transaction> history;
    double balance = 0;
    int choice;

    do {
        cout << "\n===== EXPENSE TRACKER =====\n";
        cout << "1. Add Income\n";
        cout << "2. Add Expense\n";
        cout << "3. View Transaction History\n";
        cout << "4. View Balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            double amount;

            cout << "Enter income amount: Rs. ";
            cin >> amount;

            if (amount <= 0) {
                cout << "Amount must be greater than zero!\n";
                continue;
            }

            history.push_back({1, amount, "Income"});
            balance += amount;

            cout << "Income added successfully!\n";
        }
        else if (choice == 2) {
            double amount;
            string reason;

            cout << "Enter expense amount: Rs. ";
            cin >> amount;

            if (amount <= 0) {
                cout << "Amount must be greater than zero!\n";
                continue;
            }

            if (amount > balance) {
                cout << "Insufficient balance!\n";
                continue;
            }

            cin.ignore(10000, '\n');

            cout << "Where did you spend the money? ";
            getline(cin, reason);

            history.push_back({2, amount, reason});
            balance -= amount;

            cout << "Expense recorded successfully!\n";
        }
        else if (choice == 3) {
            cout << "\n===== TRANSACTION HISTORY =====\n";

            if (history.empty()) {
                cout << "No transactions recorded yet.\n";
            }

            for (int i = 0; i < history.size(); i++) {
                cout << i + 1 << ". ";

                if (history[i].type == 1) {
                    cout << "Income";
                } else {
                    cout << "Expense";
                }

                cout << " | Rs. "<< fixed << setprecision(2) << history[i].amount << " | " << history[i].reason << '\n';
            }
        }
        else if (choice == 4) {
            cout << endl << fixed << setprecision(2);
            cout << "Current Balance: Rs. " << balance << '\n';
        }
        else if (choice == 5) {
            cout << "Thank you for using Expense Tracker!\n";
        }
        else {
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}
