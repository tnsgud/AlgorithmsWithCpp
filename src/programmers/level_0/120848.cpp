#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int factorial(int n)
{
  if (n == 1)
    return n;

  return n * factorial(n - 1);
}

int solution(int n)
{
  int answer = 0;

  for (int i = 1; i <= 10; i++)
  {
    if (factorial(i) <= n)
    {
      answer = i;
    }
    else
    {
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
