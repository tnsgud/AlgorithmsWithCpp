#include <iostream>

using namespace std;

int main() {
    int a, b, first, second, third;
    cin >> a >> b;

    first = b/100;
    second = (b%100)/10;
    third = b%10;

    cout << a*third << '\n' << a*second << '\n' << a*first << '\n';
    cout << a*b;

    return 0;
}