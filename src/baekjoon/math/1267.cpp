//
// Created by 박순형 on 2024. 6. 9..
//
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 1. 입력
    int N;
    cin >> N;

    int *num = new int[N];

    for(int i = 0; i < N; i++) {
        cin >> num[i];
    }

    // 2. 처리
    // 2-1. 영식
    int yong_price = 0;
    for(int i = 0; i < N; i++) {
        yong_price += (num[i]/30 + 1) * 10;
    }

    // 2-2. 민식
    int min_price = 0;
    for(int i =0; i < N; i++) {
        min_price += (num[i] / 60 + 1) * 15;
    }

    // 3. 출력
    if(yong_price < min_price) cout << "Y " << yong_price;
    else if(min_price < yong_price) cout << "M " << min_price;
    else cout << "Y M " << min_price;

    delete [] num;

    return 0;
}