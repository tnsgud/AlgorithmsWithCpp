//
// Created by 박순형 on 2024. 6. 9..
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num[7];
    int sum = 0, min = 100;

    // 입력
    for(int & n : num) {
        cin >> n;
    }

    // 처리
    for(auto n : num)  {
        if(n % 2 == 0 ) continue;

        if(n < min) min = n;

        sum += n;
    }

    cout << (sum == 0 ? -1 : sum) << endl;

    if(sum != 0) cout << min;

    return 0;
}