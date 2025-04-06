#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots)
{
  int answer = 0;

  int x = dots[1][0] - dots[0][0];
  int y = dots[1][1] - dots[0][1];

  if (x == 0)
  {
    x = dots[2][0] - dots[0][0];
  }

  if (y == 0)
  {
    y = dots[2][0] - dots[0][1];
  }

  if (x < 0)
  {
    x *= -1;
  }

  if (y < 0)
  {
    y *= -1;
  }

  answer = x * y;

  return answer;
}