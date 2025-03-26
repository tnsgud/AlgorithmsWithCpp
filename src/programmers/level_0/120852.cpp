#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;

    for (int i = 2; 1 < n;)
    {
        if(n%i == 0) {
            answer.push_back(i);
            n /= i;
            continue;
        }

        i++;
    }

    set<int> temp = set<int>(answer.begin(), answer.end());
    answer = vector<int>(temp.begin(), temp.end());

    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}
