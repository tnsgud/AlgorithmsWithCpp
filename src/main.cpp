#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, w, m, cnt = 0;
    cin >> k >> w >> m;

    while(k < w) {
        k += m;
        cnt++;
    }

    cout << cnt;

    return 0;
}