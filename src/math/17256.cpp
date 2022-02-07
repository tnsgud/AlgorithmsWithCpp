//
// Created by qkrtn on 2022-02-07.
// Link : https://www.acmicpc.net/problem/17256

#include <iostream>

using namespace std;

class Cake {
public :
    int x;
    int y;
    int z;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Cake arr[2];

    for (auto &i: arr) {
        i = Cake();
        cin >> i.x >> i.y >> i.z;
    }

    cout << arr[1].x - arr[0].z << " " << arr[1].y / arr[0].y << " " << arr[1].z - arr[0].x;

    return 0;
}