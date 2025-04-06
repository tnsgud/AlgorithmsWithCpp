#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board)
{
    vector<int> answer = {0, 0};

    for (string s : keyinput)
    {
        int moveX = 0, moveY = 0;
        if (s == "up")
        {
            moveY = 1;
        }
        else if (s == "down")
        {
            moveY = -1;
        }
        else if (s == "left")
        {
            moveX = -1;
        }
        else if (s == "right")
        {
            moveX = 1;
        }

        answer[0] += moveX;
        answer[1] += moveY;
    }

    if (answer[0] > board[0] / 2)
    {
        answer[0] = board[0] / 2;
    }

    if (answer[1] > board[1] / 2)
    {
        answer[1] = board[1] / 2;
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