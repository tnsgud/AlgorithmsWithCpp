#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    cout << (a - b < 0 ? (a - b) * -1 : a - b);

    return 0;
}