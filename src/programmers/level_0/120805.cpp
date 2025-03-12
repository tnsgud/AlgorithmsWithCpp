#include <iostream>

using namespace std;

int solution(int num1, int num2) {
    int answer = num1 / num2;

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    cout << solution(10, 5) << '\n';
    cout << solution(7, 2) << '\n';

    return 0;
}