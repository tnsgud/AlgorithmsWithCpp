//
// Created by tnsgud on 2021-11-12.
// Link : https://www.acmicpc.net/problem/9498

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