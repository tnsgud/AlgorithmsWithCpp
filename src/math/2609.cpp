#include<iostream>

using namespace std;

int gcd(int num1, int num2){
    if(num2==0)
        return num1;
    else
        return gcd(num2, num1 % num2);
}

auto main() -> int {
    int a, b;

    cin >> a >> b;

    int c = gcd(a, b);
    cout << c << endl
         << a * b / c;
}