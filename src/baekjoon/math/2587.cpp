//
// Created by 박순형 on 2024. 6. 9..
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num[5], sum = 0;

    // 입력
    for(int & n : num) {
        cin >> n;

        sum += n;
    }

    // 처리
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(num[j] < num[i])  {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    // 출력
    cout << sum / 5 << endl << num[2];

    return 0;
}