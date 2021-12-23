#include <iostream>

using namespace std;

int factorial(int n) {
    if(n <= 1) {
        return 1;
    }else {
        return factorial(n-1) * n;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    cout << factorial(N);

    return 0;
}