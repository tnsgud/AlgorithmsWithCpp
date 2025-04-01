#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(string my_string)
{
  int answer = 0;
  int startIndex = 0, endIndex = 0, signal = 1, num;

  while ((endIndex = my_string.find(" ", startIndex)) != string::npos)
  {
    string str = my_string.substr(startIndex, endIndex - startIndex);

    if (str == "+")
    {
      signal = 1;
    }
    else if (str == "-")
    {
      signal = -1;
    }
    else
    {
      num = stoi(str);
      answer += num * signal;
    }

    startIndex = endIndex + 1;
  }

  string str = my_string.substr(startIndex, my_string.size() - startIndex);
  num = stoi(str);
  answer += num * signal;

  return answer;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  return 0;
}
