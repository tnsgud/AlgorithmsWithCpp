#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

int solution(vector<int> sides)
{
  int answer = 0;

  // sort
  for (int i = 0; i < sides.size(); i++)
  {
    for (int j = i + 1; j < sides.size(); j++)
    {
      if (sides[i] <= sides[j])
      {
        int temp = sides[i];
        sides[i] = sides[j];
        sides[j] = temp;
      }
    }
  }

  answer = sides[0] < (sides[1] + sides[2]) ? 1 : 2;

  return answer;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  return 0;
}
