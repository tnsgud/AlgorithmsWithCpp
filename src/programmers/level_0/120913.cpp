#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n)
{
  vector<string> answer;
  int start = 0, end = n;

  for (int i = 0; i * n < my_str.size(); i++)
  {
    answer.push_back(my_str.substr(i * n, n));
  }

  return answer;
}