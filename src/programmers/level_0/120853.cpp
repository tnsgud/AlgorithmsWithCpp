#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

vector<string> split(string str, string del)
{
  vector<string> values;
  int startIndex = 0, endIndex = 0;

  while ((endIndex = str.find(del, startIndex)) != string::npos)
  {
    int length = endIndex - startIndex;
    values.push_back(str.substr(startIndex, length));

    startIndex = endIndex + 1;
  }

  values.push_back(str.substr(startIndex));

  return values;
}

int solution(string s)
{
  int answer = 0, prevNum = 0;

  vector<string> values = split(s, " ");

  for (int i = 0; i < values.size(); i++)
  {
    if (values[i] == "Z")
    {
      answer -= prevNum;
      continue;
    }

    int num = stoi(values[i]);

    answer += num;
    prevNum = num;
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
