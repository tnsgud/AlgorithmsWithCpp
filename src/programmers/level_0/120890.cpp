#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(vector<int> array, int n)
{
    int answer = 0;
    // index, value
    pair<int, int> node = pair<int, int>(99, 100);

    for (int i = 0; i < array.size(); i++)
    {
        int num = n - array[i];

        if (num < 0)
        {
            num *= -1;
        }

        if (num < node.second)
        {
            node.first = i;
            node.second = num;
        }
        else if (num == node.second && array[i] < array[node.first])
        {
            node.first = i;
            node.second = num;
        }
    }

    answer = array[node.first];

    return answer;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}
