//
// Created by qkrtn on 2021-11-23.
// Link : https://www.acmicpc.net/problem/14681

#include <iostream>

using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    if( 0 < x && 0 < y ) {
        cout << 1;
    }else if(x < 0 && 0 < y) {
        cout << 2;
    }else if(x < 0 && y < 00) {
        cout << 3;
    }else if(0 < x && y < 0) {
        cout << 4;
    }


    return 0;
}