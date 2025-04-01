#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(int n, vector<int> numlist)
{
  vector<int> answer;

  for (int num : numlist)
  {
    if (num % n == 0)
    {
      answer.push_back(num);
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
