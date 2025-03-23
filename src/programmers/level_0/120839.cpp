#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

string solution(string rsp)
{
  string answer = "";

  for (char c : rsp)
  {
    char win = '0';
    if (c == '0')
    {
      win = '5';
    }
    else if (c == '5')
    {
      win = '2';
    }

    answer += win;
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
