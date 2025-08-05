#include <iostream>
using namespace std;

class Bank {
private:
    int balance;

public:
    Bank() {
        balance = 20000; 
    }
    void deposit(int amount);
    
    void withdraw(int amount);

    void showBalance();
};

void Bank::deposit(int amount) {
    balance += amount;
    cout << "Rs. " << amount << "\n deposited successfully  ";
    cout << "\n Current Balance: Rs. " << balance ;
}

void Bank::withdraw(int amount) {
    if (amount > balance) {
        cout << "\n low balance. Withdrawal failed. ";
    } else {
        balance -= amount;
        cout << " \n Rs. " << amount << " withdrawn successfully. ";
        cout << " \n Remaining Balance: Rs. " << balance ;
    }
}

void Bank::showBalance() {
    cout << "\n Your Current Balance is: Rs. " << balance ;
}

void showHelp() {
    cout << "\n========= HELP SCREEN =========\n";
    cout << "\n Use ATM PIN: 54321 ";
    cout << "\n Options: ";
    cout << "\n 1. Deposit Money ";
    cout << "\n 2. Withdraw Money ";
    cout << "\n 3. Check Balance ";
    cout << "\n ===============================";
}

void showWelcomeScreen() {
    cout << "\n ==============================";
    cout << " \n WELCOME TO ATM APPLICATION  ";
    cout << "\n ==============================";
    cout << "\n Date & Time: [Simulated Time]";  
    cout << "\nMenu:\n";
    cout << "\n 1. Enter ATM";
    cout << "\n 2. Help";
    cout << "\n Enter your choice: ";
}
main() {
    int choice;
    const int correctPIN = 54321;
    int enteredPIN;

    Bank userAccount;

    showWelcomeScreen();
    cin >> choice;

    if (choice == 1) {
        cout << "\n Enter ATM PIN: ";
        cin >> enteredPIN;

        if (enteredPIN == correctPIN) {
            int option;
            do {
                cout << "\n========= ATM MENU =========\n";
                cout << "\n 1. Deposit";
                cout << "\n 2. Withdraw";
                cout << "\n 3. Check Balance";
                cout << "\n 4. Exit";
                cout << "Select an option: ";
                cin >> option;

                if (option == 1) {
                    int amount;
                    cout << "\n Enter amount to deposit: Rs. ";
                    cin >> amount;
                    userAccount.deposit(amount);
                } else if (option == 2) {
                    int amount;
                    cout << "\n Enter amount to withdraw: Rs. ";
                    cin >> amount;
                    userAccount.withdraw(amount);
                } else if (option == 3) {
                    userAccount.showBalance();
                } else if (option == 4) {
                    cout << "\n Thank you for using ATM. Goodbye!";
                } else {
                    cout << "\n Invalid option. Try again.";
                }

            } while (option != 4);
        } else {
            cout << "\n Incorrect PIN. Exiting program.";
        }

    } else if (choice == 2) {
        showHelp();
    } else {
        cout << "\n Invalid choice. Exiting...";
    }
}

