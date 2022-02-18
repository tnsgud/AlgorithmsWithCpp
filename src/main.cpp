#include <iostream>
#include <math.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, h, w;
    cin >> d >> h >> w;

    auto x = sqrt(h * h + w * w);
    auto o1 = h * d / x, o2 = w * d / x;

    cout << (int)o1 << ' ' << (int)o2;

    return 0;
}