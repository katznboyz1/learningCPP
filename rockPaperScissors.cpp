#include <iostream>
#include <stdlib.h>

using namespace std;

int makeValidRPSChoice(string choice) {
    int newChoice = 0;
    if (choice == "rock") {
        newChoice = 1;
    } else if (choice == "paper") {
        newChoice = 2;
    } else if (choice == "scissors") {
        newChoice = 3;
    } else {
        newChoice = 4;
    }
    return newChoice;
}

string decideWinnerOfRound(int human, int computer) {
    string winner = "";
    if (human == computer) {
        winner = "nobody, its a tie!";
    } else if (human == 1 && computer == 2) {
        winner = "the computer";
    } else if (human == 1 && computer == 3) {
        winner = "the human";
    } else if (computer == 1 && human == 2) {
        winner = "the human";
    } else if (computer == 1 && human == 3) {
        winner = "the computer";
    } else {
        winner = "error";
    }
    return winner;
}

bool gamerunning = true;

int main() {
    while (gamerunning) {
        cout << "Rock, paper or scissors?\n";
        string input;
        cin >> input;
        int humanChoice = makeValidRPSChoice(input);
        int computerChoice = 1 + (rand() % 2);
        cout << "The winner is " << decideWinnerOfRound(humanChoice, computerChoice) << " (" << computerChoice << ")\n\n";
    }
}
