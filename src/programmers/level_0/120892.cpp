#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string cipher, int code)
{
    string answer = "";

    for (int i = 1; code * i <= cipher.size(); i++)
    {
        answer += cipher[code * i - 1];
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
