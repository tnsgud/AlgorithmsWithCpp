#include <iostream>

using namespace std;

int main() {
    int num, first, second, result, count = 0;

    cin >> num;

    num = num < 10 ? num * 10 : num;

    result = num;

    while (true) {
        first = result / 10;
        second = result % 10;
        result = (second * 10) + ((first + second) % 10);
        count++;
        if (num == result) break;
    }

    cout << count;
    return 0;
}