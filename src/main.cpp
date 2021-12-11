#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    while(true) {
        int a, b;
        cin >> a >> b;
        if(a == 0 && b == 0) {
            break;
        }else {
            cout << a+b << '\n';
        }
    }
}