#include <iostream>

using namespace std;

int main() {
    int m, n, sum = 0, divisor, mini = -1;
    cin >> m >> n;

    for (int i = m; i <= n; ++i) {
        divisor = 0;
        for (int j = 1; j < i; ++j) {
            if (i % j == 0) {
                divisor = j;
            }
        }

        if (divisor == 1) {
            sum += i;
            mini = (mini == -1) ? i : mini;
        }
    }

    if (sum == 0) {
        cout << -1;
    } else {
        cout << sum << '\n' << mini;
    }

    return 0;
}