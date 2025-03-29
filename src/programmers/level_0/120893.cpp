#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string my_string)
{
  string answer = "";
  int sign = 1;

  for (char c : my_string)
  {
    sign = (65 <= c && c <= 90) ? 1 : -1;
    answer += c + 32 * sign;
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
