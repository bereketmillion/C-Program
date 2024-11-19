//this is number guessing game. it will pick one number and you tyr to guess the number.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int getRandomNumber();
void playGame(int& totalWins, int& totalLosses);
void displayResult(int totalWins, int totalLosses);

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int totalWins = 0;
    int totalLosses = 0;
    cout<<"This group work is prepared by group two members. All group member's name and id provided below  the program."<<endl;

    playGame(totalWins, totalLosses);
    displayResult(totalWins, totalLosses);

    return 0;
}
// Generate a random number between 1 and 10
int getRandomNumber() {
    return rand() % 10 + 1;
}


void playGame(int& totalWins, int& totalLosses) {
    while (true) {
        int targetNumber = getRandomNumber();
        int guess;
        int attempts = 0;
        bool hasGuessed = false;
        
        cout << "Welcome to the Number Guessing Game!\n";
        cout << "I'm thinking of a number between 1 and 10. You have 3 attempts to guess it.\n";

        while (attempts < 3) {
            cout << "\nEnter your guess: ";
            cin >> guess;
            attempts++;

            if (guess > targetNumber) {
                cout << " wrong! Try lower again.\n";
               totalLosses++;
            } else if (guess < targetNumber) {
                cout << " wrong! Try higher again.\n";
               totalLosses++;
            } else {
                cout << "Congratulations! You've guessed the number (" << targetNumber << ") in " << attempts << " attempts.\n";
                hasGuessed = true;
                totalWins++;
                break;
            }
        }

        if (!hasGuessed) {
            cout << "Sorry, you couldn't get the number. The number was: " << targetNumber << "\n";
            
        }

        cout << "Total Wins: " << totalWins << "  Total Losses: " << totalLosses << "\n";

        char playAgain;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            break;
        }
    }
}


void displayResult(int totalWins, int totalLosses) {
    cout << "Thanks for playing! Total Wins: " << totalWins << "  Total Losses: " << totalLosses << "\n";
}
/* group members name and ID
    NAME                                 ID
1,  Bereket shegye               1501043
2,  Bereket million               1501040
3,  Betelhem hiluf                1501054
4,  Kalkidan k/Mariam       1501713          
5,  Betelhem worku             1501055        
6,  Besufkad ayalkbet         1501050
7,  Besufkad zenebe            1501049
8,  Azanew nega                   1501019
9,  Bantalem mitku              1501020
10, Amerti geremew           1500986*/
