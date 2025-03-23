#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(int hp)
{
  int answer = (hp / 5) + (hp % 5 / 3) + (hp % 5 % 3 / 1);
  return answer;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  return 0;
}