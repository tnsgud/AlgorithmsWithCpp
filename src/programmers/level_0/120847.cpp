#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int solution(vector<int> numbers)
{
  // sort
  for (int i = 0; i < numbers.size(); i++)
  {
    for (int j = i + 1; j < numbers.size(); j++)
    {
      if (numbers[i] <= numbers[j])
      {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
      }
    }
  }

  int answer = numbers[0] * numbers[1];

  return answer;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  return 0;
}