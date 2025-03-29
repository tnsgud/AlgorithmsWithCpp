#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int order)
{
    int answer = 0;
    string num_str = to_string(order);

    for (char c : num_str)
    {
        if (c == '3' || c == '6' || c == '9')
        {
            answer++;
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
