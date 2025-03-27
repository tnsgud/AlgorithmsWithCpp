#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;
vector<int> solution(vector<string> strlist)
{
    vector<int> answer;

    for (string str : strlist)
    {
        answer.push_back(str.length());
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