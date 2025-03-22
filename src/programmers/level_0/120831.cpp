#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int n) {
    int answer = 0;

    for(int i = 2; i <= n; i+=2) {
        answer += i;
    }
    
    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}