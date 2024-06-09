//
// Created by 박순형 on 2024. 6. 9..
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int card[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    // 1. 입력
    for(int i = 0; i< 10; i++)  {
        int a, b;
        cin >> a >> b;

        for(int j = 0; j < (b-a+1)/2; j++) {
            int temp = card[a+j-1];
            card[a+j-1]= card[b-j-1];
            card[b-j-1] = temp;
        }
    }

    for(int &i : card) {
        cout << i << ' ';
    }

    return 0;
}