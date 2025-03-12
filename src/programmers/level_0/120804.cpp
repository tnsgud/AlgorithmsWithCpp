#include <iostream>

using namespace std;

int solution(int num1, int num2) {
    int answer = num1 * num2;

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    cout << solution(3, 4) << '\n';
    cout << solution(27, 19) << '\n';

    return 0;
}