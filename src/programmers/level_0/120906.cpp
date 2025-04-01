#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int n)
{
  int answer = 0;
  string str = to_string(n);

  for (char c : str)
  {
    answer += c - '0';
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
