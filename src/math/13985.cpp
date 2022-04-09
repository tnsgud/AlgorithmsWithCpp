//
// Created by qkrtn on 2022-04-10.
// Link : https://www.acmicpc.net/problem/13985

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);

    int firstNum = input[0] - '0';
    int secondNum = input[4] - '0';
    int result = input[8] - '0';

    if (firstNum + secondNum == result) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}