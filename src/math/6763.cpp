//
// Created by qkrtn on 2022-03-05.
// Link : https://www.acmicpc.net/problem/6763

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int limit, speed;
    cin >> limit >> speed;

    int overSpeed = speed - limit;

    if (overSpeed < 1) {
        cout << "Congratulations, you are within the speed limit!";
        return 0;
    }
    int money = 0;

    if (overSpeed > 0 && overSpeed < 21) {
        money = 100;
    }else if(overSpeed > 20 && overSpeed < 31) {
        money = 270;
    }else {
        money = 500;
    }

    cout << "You are speeding and your fine is $" << money << ".\n";

    return 0;
}