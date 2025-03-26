#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

vector<int> get_numbers_at_string(string my_string)
{
  vector<int> numbers;

  for (char c : my_string)
  {
    int num = c - '0';
    if (num < 0 || num > 9)
    {
      continue;
    }

    numbers.push_back(num);
  }

  return numbers;
}

int solution(string my_string)
{
  vector<int> numbers = get_numbers_at_string(my_string);
  int answer = 0;

  for (int n : numbers)
  {
    answer += n;
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