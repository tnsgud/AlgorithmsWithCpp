#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int cnt[10] = {0,}, out = 0;
    for (int i = 0; i < 10; i++) {
        int a, idx;
        cin >> a;

        idx = ((a % 42) == 0 ? 0 : a % 42 - 1);

        if (cnt[idx] == 0) {
            cnt[idx]++;
        }
    }

    for (auto a: cnt) {
        if (a != 0) {
            out++;
        }
    }

    cout << out;
}