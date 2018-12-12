#include <iostream>

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

string decideWinner(int human, int computer) {
    //todo
}

bool gamerunning = true;

int main() {
    while (gamerunning) {
        cout << "Rock, paper or scissors?\n";
        string input;
        cin >> input;
        int humanChoice = makeValidRPSChoice(input);
        int computerChoice = 0;
    }
}
