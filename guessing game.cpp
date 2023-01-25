#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int random_number, guess;
    srand(time(0));
    random_number = rand() % 100 + 1;

    cout << "Welcome to the guessing game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;

    while (1) {
        cout `oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Your guess: \";\n        cin >>"}` guess;
        if (guess == random_number) {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        } else if (guess < random_number) {
            cout << "The number I'm thinking of is higher." << endl;
        } else {
            cout << "The number I'm thinking of is lower." << endl;
        }
    }
    return 0;
}
