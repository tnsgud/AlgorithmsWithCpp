#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> solution(vector<string> quiz)
{
  vector<string> answer;
  int startIndex, endIndex, num, signal, quiz_answer;

  for (string str : quiz)
  {
    startIndex = num = quiz_answer = 0;
    signal = 1;

    while ((endIndex = str.find(" ", startIndex)) != string::npos)
    {
      string s = str.substr(startIndex, endIndex - startIndex);

      if (s == "+")
      {
        signal = 1;
      }
      else if (s == "-")
      {
        signal = -1;
      }
      else if (s == "=")
      {
        startIndex = endIndex + 1;
        num = stoi(str.substr(startIndex, s.size() - startIndex));
        answer.push_back(num == quiz_answer ? "O" : "X");
      }
      else
      {
        num = stoi(s);
        quiz_answer += num * signal;
      }

      startIndex = endIndex + 1;
    }
  }

  return answer;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  for (auto s : solution({"3 - 4 = -3", "5 + 6 = 11"}))
  {
    cout << s << '\n';
  }

  return 0;
}
