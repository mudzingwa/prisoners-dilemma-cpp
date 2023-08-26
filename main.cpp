#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int computerChoice, playerChoice;

void computerChance() {
    srand(time(nullptr));

    // Generate a random number between 0 and 1 and store it in computerChoice
    computerChoice = rand() % 2;
}

void playerChance() {
    cout << "Enter your choice (0 for cooperate, 1 for betray): " << endl;
    cin >> playerChoice;
}

int main() {
    computerChance();
    playerChance();

    cout << "Computer's choice: " << computerChoice << endl;
    cout << "Player's choice: " << playerChoice << endl;

    if (computerChoice == 0 && playerChoice == 0) {
        cout << "You both cooperate and walk out free!" << endl;
    } else if (computerChoice == 1 && playerChoice == 1) {
        cout << "You both betray each other and receive a sentence!" << endl;
    } else if (computerChoice == 0 && playerChoice == 1) {
        cout << "You betray while computer cooperates. Computer walks out free, you receive a sentence." << endl;
    } else {
        cout << "You cooperate while computer betrays. You walk out free, computer receives a sentence." << endl;
    }

    return 0;
}

