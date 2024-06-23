//
// Created by 박순형 on 2024. 6. 23..
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, count = 0;
    cin >> N;

    vector<long> num(N, 0);

    for(int i = 0; i < N; i++) {
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    for(int i = 0; i < N; i++) {
        int p1 = 0, p2 = N - 1;
        long find = num[i];

        while(p1 < p2) {
            if(num[p1] + num[p2] == find) {
                if(p1 != i && p2 != i) {
                    count++;
                    break;
                }

                if(p1 == i)  {
                    p1++;
                    continue;
                }

                p2--;
                continue;
            }

            if(num[p1] + num[p2] < find) {
                p1++;
                continue;
            }

            p2--;
        }
    }

    cout << count << '\n';

    return 0;
}
