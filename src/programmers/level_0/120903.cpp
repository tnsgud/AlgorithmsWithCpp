#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(vector<string> s1, vector<string> s2)
{
  int answer = 0;

  for (string str1 : s1)
  {
    for (string str2 : s2)
    {
      if (str1 == str2)
      {
        answer++;
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
