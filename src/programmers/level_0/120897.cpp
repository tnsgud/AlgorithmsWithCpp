#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;

    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0) {
            answer.push_back(i);
        }
    }

    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = i+1; j < answer.size(); j++)
        {
            if(answer[i] > answer[j]) {
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
