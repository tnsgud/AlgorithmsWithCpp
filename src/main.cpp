#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

vector<int> solution(vector<int> numbers, string direction)
{
    vector<int> answer;
    bool isLeft = direction == "left";

    for (int i = isLeft ? 0 : numbers.size() - 1; isLeft ? i < numbers.size() : i > 0; isLeft ? i++ : i--)
    {
        int temp = numbers[i];
        int index = isLeft ? i + 1 : i - 1;

        numbers[i] = numbers[index];
        numbers[index] = i;
    }

    for (auto i : numbers)
    {
        cout << i << ' ';
    }

    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solution({1, 2, 3}, "right");

    return 0;
}