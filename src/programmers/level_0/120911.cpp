#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string my_string)
{
  string answer = "";

  for (char c : my_string)
  {
    if (c < 97)
    {
      answer += c + 32;
      continue;
    }

    answer += c;
  }

  for (int i = 0; i < answer.size(); i++)
  {
    for (int j = i + 1; j < answer.size(); j++)
    {
      if (answer[i] > answer[j])
      {
        char temp = answer[i];
        answer[i] = answer[j];
        answer[j] = temp;
      }
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
