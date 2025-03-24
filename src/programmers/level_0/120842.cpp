#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    int index = 0;

    answer.push_back(vector<int>());

    for (int num : num_list)
    {
        if(answer[index].size() == n) {
            answer.push_back(vector<int>());
            index++;
        }

        answer[index].push_back(num);
    }

    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}
