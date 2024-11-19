#include<iostream>
using namespace std;

void insert_big();
void insert_end();
void del_big();
void del_end();
void display();

struct Student {
    int ID;
    char name[20];
    float grade;
    Student *next;
} *start = NULL;

int main() {
    char ch = 'y';
    do {
        int choice = 0;
        system("cls");
        cout << "What do you want to enter? Your choice: \n";
        cout << "\t\t 1) Add a node at the beginning of the list\n";
        cout << "\t\t 2) Add a node at the end of the list\n";
        cout << "\t\t 3) Delete a node at the beginning of the list\n";
        cout << "\t\t 4) Delete a node at the end of the list\n";
        cout << "\t\t 5) Display all lists\n";
        cout << "\t\t 6) Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: insert_big(); break;
            case 2: insert_end(); break;
            case 3: del_big(); break;
            case 4: del_end(); break;
            case 5: display(); break;
            case 6: 
                ch = 'n';
                cout << "Goodbye\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (ch == 'y' || ch == 'Y');

    return 0;
}

void insert_big() {
    Student *temp = new Student;
    cout << "Please enter a student ID: ";
    cin >> temp->ID;
    cout << "Please enter a student Name: ";
    cin >> temp->name;
    cout << "Please enter a student grade: ";
    cin >> temp->grade;
    temp->next = NULL;

    if (start == NULL) {
        start = temp;
    } else {
        temp->next = start;
        start = temp;
    }
}

void insert_end() {
    Student *temp = new Student;
    cout << "Please enter a student ID: ";
    cin >> temp->ID;
    cout << "Please enter a student Name: ";
    cin >> temp->name;
    cout << "Please enter a student grade: ";
    cin >> temp->grade;
    temp->next = NULL;

    if (start == NULL) {
        start = temp;
    } else {
        Student *temp1 = start;
        while (temp1->next != NULL) {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
}

void del_big() {
    if (start == NULL) {
        cout << "The list is empty.\n";
        cin.ignore(); // To pause before the next input
    } else {
        Student *temp = start;
        start = start->next;
        delete temp;
        cout << "Deleted one student information.\n";
        cin.ignore(); // To pause before the next input
    }
}

void del_end() {
    if (start == NULL) {
        cout << "The list is empty.\n";
        cin.ignore(); // To pause before the next input
    } else if (start->next == NULL) {
        delete start;
        start = NULL;
        cout << "Deleted one student information.\n";
        cin.ignore(); // To pause before the next input
    } else {
        Student *temp = start;
        Student *prv = NULL;

        while (temp->next != NULL) {
            prv = temp;
            temp = temp->next;
        }

        prv->next = NULL;
        delete temp;
        cout << "Deleted one student information.\n";
        cin.ignore(); // To pause before the next input
    }
}

void display() {
    if (start == NULL) {
        cout << "The list is empty.\n";
        cin.ignore(); // To pause before the next input
    } else {
        Student *temp = start;
        cout << "\nStudent ID\tStudent Name\tStudent Grade\n";
        cout << "===============================================\n";
        while (temp != NULL) {
            cout << temp->ID << "\t\t" << temp->name << "\t\t" << temp->grade << endl;
            temp = temp->next;
        }
        cin.ignore(); // To pause before the next input
    }
}
