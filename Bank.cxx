//this mobile banking project I did.
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

double account = 0;
string userid, password, id, pass;
string ruserid, rpassword, rid, rpass;

void money_deposit();
void money_withdraw();
void check_balance();
void money_transfer();
void login();
void signup();
void page();
void members();

int main()
{
    int c;
    while (true) {
        cout << "Please select your choice" << endl;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "3. Group members" << endl;
        cin >> c;
        cout << endl;

        switch (c) {
            case 1:
                login();
                break;
            case 2:
                signup();
                break;
            case 3:
                members();
                break;
            default:
                system("cls");
                cout << "Please enter a valid value" << endl;
        }
    }
}

void login()
{
    int count = 0;
    system("cls");
    cout << "Please enter username and password " << endl;
    cout << "USERNAME: ";
    cin >> userid;
    cout << "PASSWORD: ";
    cin >> password;

    ifstream input("records.txt");

    while (input >> id >> pass) {
        if (id == userid && pass == password) {
            count = 1;
            system("cls");
            break;
        }
    }
    input.close();

    if (count == 1) {
        cout << userid << " you have logged in successfully" << endl;
        page();
    } else {
        cout << "Login error. If you don't have an account, please register" << endl;
        main(); // Re-prompts the user if login fails
    }
}

void signup()
{
    system("cls");
    cout << "Please enter username and password" << endl;
    cout << "USERNAME: ";
    cin >> ruserid;
    cout << "PASSWORD: ";
    cin >> rpassword;
    ofstream f1("records.txt", ios::app);
    f1 << ruserid << " " << rpassword << endl;
    f1.close();
    system("cls");
    cout << "Registration is successful!" << endl;
    main(); // After registration, go back to main menu
}

void page()
{
    int ch;
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Check Balance\n";
    cout << "4. Money Transfer\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
    cin >> ch;
    switch (ch) {
        case 1:
            money_deposit();
            break;
        case 2:
            money_withdraw();
            break;
        case 3:
            check_balance();
            break;
        case 4:
            money_transfer();
            break;
        case 5:
            system("cls");
            cout << "Exit from the system" << endl;
            break;
        default:
            cout << "Select the correct option" << endl;
            page();
    }
}

void money_deposit() {
    system("cls");
    double deposit;
    cout << "Enter the amount to deposit: $";
    cin >> deposit;
    if (deposit > 0) {
        account += deposit;
        cout << "You have deposited: $" << deposit << endl;
        cout << "Your account balance is: $" << account << endl;
    } else {
        cout << "Invalid amount!" << endl;
    }
    page();
}

void money_withdraw() {
    system("cls");
    double withdraw;
    cout << "Enter the amount you want to withdraw: $";
    cin >> withdraw;
    if (withdraw > account) {
        cout << "The amount is greater than the account balance" << endl;
    } else if (withdraw > 0) {
        account -= withdraw;
        cout << "You have withdrawn: $" << withdraw << endl;
        cout << "Your current balance is: $" << account << endl;
    } else {
        cout << "Invalid amount!" << endl;
    }
    page();
}

void check_balance() {
    system("cls");
    cout << "Your account balance is: $" << account << endl;
    page();
}

void money_transfer() {
    system("cls");
    double transfer;
    double account1 = 12345; // Example account numbers
    double account2 = 54321;
    cout << "Enter the amount you want to transfer: $";
    cin >> transfer;
    if (transfer > account) {
        cout << "Your balance is not enough to transfer" << endl;
    } else if (transfer > 0) {
        cout << "Enter the account you want to transfer to: ";
        double transfer_account;
        cin >> transfer_account;
        if (transfer_account == account1 || transfer_account == account2) {
            account -= transfer;
            cout << "You transferred: $" << transfer << " to account: " << transfer_account << endl;
            cout << "Your current balance is: $" << account << endl;
        } else {
            cout << "Enter a valid account number" << endl;
        }
    } else {
        cout << "Invalid amount!" << endl;
    }
    page();
}

void members(){
    cout << "| Name                     | ID       |" << endl;
    cout << "| Besufkad Ayalkbet        | 1501050  |" << endl;
    cout << "| Besufkad Zenebe          | 1501049  |" << endl;
    cout << "| Amerti Geremew           | 1500986  |" << endl;
    cout << "| Bantalem Mitku           | 1501020  |" << endl;
    cout << "| Bereket Million          | 1501040  |" << endl;
    cout << "| Azanew Nega              | 1501019  |" << endl;
    cout << "| Betelhem Worku           | 1501055  |" << endl;
    cout << "| Betelhem Hiluf           | 1501054  |" << endl;
    cout << "| Kalkidan K/Mariyam       | 1501713  |" << endl;
    cout << "| Bereket Shegye           | 1501043  |" << endl;
    main();  // Go back to main menu after displaying members
}
