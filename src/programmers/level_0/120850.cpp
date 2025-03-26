#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

vector<int> solution(string my_string)
{
    vector<int> answer;

    for (char c : my_string)
    {
        int num = c - '0';

        if (num < 0 || num > 9)
        {
            continue;
        }

        answer.push_back(num);
    }

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = i + 1; j < answer.size(); j++)
        {
            if (answer[i] >= answer[j])
            {
                int temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
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
