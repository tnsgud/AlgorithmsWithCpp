#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(vector<string> arr)
{
    string answer = "";

    for (string c : arr)
    {
        answer += c;
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