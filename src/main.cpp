#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int combi(int n, int r)
{
    if (r == 0 || n == 1 || n <= r)
    {
        return 1;
    }

    return combi(n - 1, r) + combi(n - 1, r - 1);
}

int solution(int balls, int share)
{
    int answer = combi(balls, share);
    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cout << solution(3, 2) << '\n';

    return 0;
}