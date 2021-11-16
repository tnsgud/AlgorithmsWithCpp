#include <iostream>

using namespace std;

int main() {
    int score;

    cin >> score;

    char grade = 74-(score/10);

    if('D' < grade) {
        cout << 'F';
    }else if(grade < 'A') {
        cout << 'A';
    }else {
        cout << grade;
    }

    return 0;
}