#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int i = 1;

    while (true)
    {
        if (i * i == n)
        {
            answer = 1;
            break;
        }
        else if (i * i > n)
        {
            answer = 2;
            break;
        }

        i++;
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
