#include <iostream>

using namespace std;

int solution(int num1, int num2) {
    bool answer = num1 == num2 ;

    return answer ? 1 : -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    return 0;
}