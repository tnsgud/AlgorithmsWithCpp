#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sum = a + b + c + d;
    cout << sum / 60 << '\n';
    cout << sum % 60;

    return 0;
}