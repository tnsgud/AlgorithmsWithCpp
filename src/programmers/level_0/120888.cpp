#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

string solution(string my_string)
{
  string answer = "";

  for (char c : my_string)
  {
    if (answer.find(c) != string::npos)
    {
      continue;
    }

    answer += c;
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
