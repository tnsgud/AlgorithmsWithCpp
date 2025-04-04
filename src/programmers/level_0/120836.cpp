#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int n) {
    int answer = 0;

    for(int i = 1; i <= n; i++) {
        if(n%i == 0) {
            answer++;
        }
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}