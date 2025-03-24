#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int solution(vector<int> dot)
{
    int answer = 4;

    if (dot[0] > 0 && dot[1] > 0)
    {
        answer = 1;
    }
    else if (dot[0] < 0 && dot[1] > 0)
    {
        answer = 2;
    }
    else if (dot[0] < 0 && dot[1] < 0)
    {
        answer = 3;
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