#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;

    while(T--) {
        int m;
        string S;
        cin >> m >> S;

        for (int i = 0; i < S.length(); ++i) {
            for (int j = 0; j < m; ++j) {
                cout << S[i];
            }
        }
        cout << '\n';
    }



    return 0;
}