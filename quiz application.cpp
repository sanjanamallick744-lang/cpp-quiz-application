#include <iostream>
using namespace std;

int main() {
    string questions[5] = {
        "C++ is a programming language.",
        "HTML is a programming language.",
        "CPU stands for Central Processing Unit.",
        "Python is used for programming.",
        "RAM is permanent storage."
    };

    char answers[5] = {'T', 'F', 'T', 'T', 'F'};
    char userAnswer;
    int score = 0;

    cout << "===== TRUE/FALSE QUIZ GAME =====\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Q" << i + 1 << ". " << questions[i] << endl;
        cout << "Enter T for True or F for False: ";
        cin >> userAnswer;

        if (toupper(userAnswer) == answers[i]) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "Wrong!\n\n";
        }
    }

    cout << "===== QUIZ COMPLETED =====\n";
    cout << "Your Score: " << score << " out of 5\n";

    if (score == 5)
        cout << "Outstanding Performance!\n";
    else if (score >= 3)
        cout << "Good Work!\n";
    else
        cout << "Try Again!\n";

    return 0;
}
