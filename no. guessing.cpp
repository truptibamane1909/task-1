#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess;

    srand(time(0));          // random seed
    number = rand() % 100 + 1;   // 1 to 100

    cout << "Guess the number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number)
            cout << "Too High!\n";
        else if (guess < number)
            cout << "Too Low!\n";
        else
            cout << "Congratulations! You guessed correctly.\n";

    } while (guess != number);

    return 0;
}