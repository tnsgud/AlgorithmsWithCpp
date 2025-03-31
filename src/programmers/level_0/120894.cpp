#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<pair<string, string>> num = {
    pair<string, string>("zero", "0"),
    pair<string, string>("one", "1"),
    pair<string, string>("two", "2"),
    pair<string, string>("three", "3"),
    pair<string, string>("four", "4"),
    pair<string, string>("five", "5"),
    pair<string, string>("six", "6"),
    pair<string, string>("seven", "7"),
    pair<string, string>("eight", "8"),
    pair<string, string>("nine", "9"),
};

long long solution(string numbers)
{
  long long answer = 0;
  int pos;

  for (pair<string, string> n : num)
  {
    while ((pos = numbers.find(n.first)) != string::npos)
    {
      numbers.replace(pos, n.first.size(), n.second);
    }
  }

  answer = stoll(numbers);

  return answer;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  return 0;
}
