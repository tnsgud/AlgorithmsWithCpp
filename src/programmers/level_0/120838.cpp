#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

map<string, string> morse = {
    {".-", "a"},
    {"-...", "b"},
    {"-.-.", "c"},
    {"-..", "d"},
    {".", "e"},
    {"..-.", "f"},
    {"--.", "g"},
    {"....", "h"},
    {"..", "i"},
    {".---", "j"},
    {"-.-", "k"},
    {".-..", "l"},
    {"--", "m"},
    {"-.", "n"},
    {"---", "o"},
    {".--.", "p"},
    {"--.-", "q"},
    {".-.", "r"},
    {"...", "s"},
    {"-", "t"},
    {"..-", "u"},
    {"...-", "v"},
    {".--", "w"},
    {"-..-", "x"},
    {"-.--", "y"},
    {"--..", "z"},
};

string solution(string letter)
{
  string answer = "";
  int startIndex = 0, endIndex = 0;

  while (true)
  {
    endIndex = letter.find(' ');

    if (endIndex == string::npos && letter.size() == 0)
    {
      break;
    }
    else if (endIndex == string::npos)
    {
      endIndex = letter.size();
    }

    string key = letter.substr(startIndex, endIndex);
    cout << "this is Key:" << key << '\n'
         << "this is value:" << morse[key] << '\n';
    answer += morse[key];

    letter = letter.substr(endIndex + 1 <= letter.size() ? endIndex + 1 : letter.size());
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