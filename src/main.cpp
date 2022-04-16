#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if (a == b && b == 0) {
        cout << "Not a moose";
    } else if (a == b) {
        cout << "Even " << a * 2;
    } else {
        cout << "Odd " << max(a, b) * 2;
    }

    return 0;
}