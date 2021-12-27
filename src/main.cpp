#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long sum = 0, S, cnt = 1;
    cin >> S;

    while (true) {
        sum += cnt;

        if(S < sum) {
            cnt--;
            break;
        }

        cnt++;
    }

    cout << cnt;

    return 0;
}