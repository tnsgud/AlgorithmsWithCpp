#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

string solution(string my_string)
{
    string answer = "";
    for (char c : my_string)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            continue;
        }

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
