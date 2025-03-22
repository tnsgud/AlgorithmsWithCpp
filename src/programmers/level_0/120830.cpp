#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int n, int k) {
    int answer = n * 12000 + k * 2000 - (n/10)*2000;
    
    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}