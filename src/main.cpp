#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        int n;
        cin >> n;
        sum += n * 5;
    }

    cout << sum;

    return 0;
}