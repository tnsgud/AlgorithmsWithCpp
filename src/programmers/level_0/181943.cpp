#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
  string answer = my_string.replace(s, overwrite_string.size(), overwrite_string);

  return answer;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  return 0;
}
