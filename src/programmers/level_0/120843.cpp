#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int solution(vector<int> numbers, int k)
{
    int answer = numbers[2 * (k - 1) % numbers.size()];

    return answer;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}
