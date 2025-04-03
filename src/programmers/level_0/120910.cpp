#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int n, int t)
{
  int answer = n * 2;

  for (int i = 0; i < t - 1; i++)
  {
    answer *= 2;
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
