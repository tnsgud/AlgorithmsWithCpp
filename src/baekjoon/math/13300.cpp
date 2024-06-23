//
// Created by 박순형 on 2024. 6. 15..
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K, roomCount = 0,  students[2][6] = { { 0, }, { 0, } };

    cin >> N >> K;

    for (int i = 0; i < N; ++i) {
        int S, Y;
        cin >> S >> Y;

        students[S][Y-1]++;
    }

    for(auto arr : students) {
        for (int i = 0; i < 6; ++i) {
            if(arr[i] != 0 && arr[i] <= K)  roomCount++;
            else {
                roomCount += arr[i] / K;

                if(arr[i] % K > 0) {
                    roomCount++;
                }
            }
        }
    }

    cout << roomCount << endl;

    return 0;
}