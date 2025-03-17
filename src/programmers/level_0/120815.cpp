#include <iostream>
#include <vector>

using namespace std;

int min(int num1, int num2) {
    return num1 <= num2 ? num1 : num2;
}

int max(int num1, int num2) {
    return num1 >= num2 ? num1 : num2;
}

int gcd(int num1, int num2) {
    if (num2 == 0) return num1;

    return gcd(num2, num1 % num2);
}

int lcm(int num1, int num2) {
    return num1 * num2 / gcd(min(num1, num2), max(num1, num2));
}


int solution(int n) {
    int answer = lcm(n, 6);

    return answer / 6;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    return 0;
}