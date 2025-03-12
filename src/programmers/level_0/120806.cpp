#include <iostream>

using namespace std;

int solution(int num1, int num2) {
    int answer = ((double)num1) / ((double)num2) * 1000;

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    return 0;
}