#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = vector<int>(2, 0);

    for(int num : num_list) {
        if(num % 2 == 0) answer[0]++;
        else if(num % 2 != 0) answer[1]++;
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}