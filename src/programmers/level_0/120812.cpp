#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int maxCount = 0;
    vector<pair<int, int>> max;
    vector<int> counter = vector<int>(1001, 0);

    for(int i : array) {
        counter[i]++;
    }

    for (int i = 0; i < counter.size(); i++) {
        if(counter[i] == 0 || counter[i] < maxCount) continue;

        if(maxCount <= counter[i]) {
            maxCount = counter[i];

            max.push_back({i, counter[i]});
        }
    }

    answer = max.back().first;

    if(max.size() >= 2) {
        int num1 = max.back().second;
        max.pop_back();
        int num2 = max.back().second;

        answer = num1 == num2 ? -1 : answer;
    }
    
    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    cout << solution({1,1,2,3});

    return 0;
}