#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) continue;
        answer.push_back(i);
    }
    
    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    return 0;
}
