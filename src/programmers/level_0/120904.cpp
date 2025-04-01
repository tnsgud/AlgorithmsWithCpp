#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int num, int k)
{
  int answer = 0;

  string num_str = to_string(num);

  for (int i = 0; i < num_str.size(); i++)
  {
    if (i == num_str.size() - 1)
    {
      answer = -1;
    }

    if ((num_str[i] - '0') == k)
    {
      answer = i + 1;
      break;
    }
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
