#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
  string answer = "";
  map<string, int> map;

  for (string p : participant)
  {
    if (map.find(p) != map.end())
    {
      map[p] = map[p] + 1;
      continue;
    }

    map.insert({p, 1});
  }

  for (string c : completion)
  {
    map[c] = map[c] - 1;
  }

  for (auto pair : map)
  {
    if (pair.second > 0)
    {
      answer = pair.first;
      break;
    }
  }

  return answer;
}