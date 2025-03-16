#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = n / 7;

    if(n % 7 != 0) answer++;

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    return 0;
}