#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, arr[5], cnt=0;
    cin >> n;
    for (int & i : arr) {
        cin >> i;
    }

    for (auto i:arr) {
        if(i == n) cnt++;
    }

    cout << cnt;

    return 0;
}