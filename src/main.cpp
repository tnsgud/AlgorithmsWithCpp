#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    string out = "*";
    for (int i = 0; i < N; ++i) {
        cout << setw(N) << right << out << '\n';
        out += "*";
    }
    return 0;
}