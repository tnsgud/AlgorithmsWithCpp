//
// Created by 박순형 on 2024. 6. 23..
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    int startIndex = 1, endIndex = 1, sum = 1, count = 1;

    while(endIndex != N) {
        if (sum == N) {
            count++;
            sum += ++endIndex;
            continue;
        }

        if (sum > N) {
            sum -= startIndex++;
            continue;
        }

        sum += ++endIndex;
    }

    cout << count << '\n';

    return 0;
}
