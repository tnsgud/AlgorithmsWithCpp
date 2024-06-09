//
// Created by 박순형 on 2024. 6. 9..
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num[9], result[7], total = 0;

    // 1. 입력
    for(int &n : num) {
        cin >> n;
    }

    // 2. 처리

    // 2-1. 수 찾기
    for(int i = 0; i < 8; i++) {
        for(int j = i + 1; j < 9; j++) {
            total = 0;
            for(int k = 0, l = 0; k < 9; k++)  {
                if(i != k && j != k) {
                    result[l++] = num[k];
                    total += num[k];
                }
            }

            if(total == 100) break;
        }

        if(total == 100) break;
    }

    // 2-2. 정렬
    for(int i = 0; i < 7; i++) {
        for(int j = i + 1; j < 7; j++) {
            if(result[j] < result[i]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }

    // 3. 출력
    for(int i = 0; i < 7; i++) {
        cout << result[i] << '\n';
    }

    return 0;
}