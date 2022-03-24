//
// Created by qkrtn on 2022-03-24.
// Link : https://www.acmicpc.net/problem/10707

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C, D, P;
    cin >> A >> B >> C >> D >> P;

    int temp1 = A * P;
    int temp2 = B;

    if (P > C){
        temp2 += (P - C)*D;
    }

    cout << min(temp1, temp2);

    return 0;
}