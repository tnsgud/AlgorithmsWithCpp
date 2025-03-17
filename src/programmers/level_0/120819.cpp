#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;

    answer.push_back(money / 5500);
    answer.push_back(money % 5500);

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    return 0;
}