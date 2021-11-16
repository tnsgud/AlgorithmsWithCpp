#include <iostream>

using namespace std;

int main() {
    int arr[9], max = 0, idx = 0;

    for (int i = 0; i < 9; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < 9; ++i) {
        if (max < arr[i]) {
            max = arr[i];
            idx = i + 1;
        }
    }

    cout << max << '\n' << idx;

    return 0;
}