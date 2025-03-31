#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string my_string, int num1, int num2)
{
    string answer = my_string;

    char temp = answer[num1];
    answer[num1] = answer[num2];
    answer[num2] = temp;

    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}
