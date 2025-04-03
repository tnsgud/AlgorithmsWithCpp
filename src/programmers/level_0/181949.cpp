#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string str, answer;
  cin >> str;

  for (char c : str)
  {
    if (c < 96)
    {
      answer += c + 32;
      continue;
    }
    answer += c - 32;
  }

  cout << answer;
  return 0;
}