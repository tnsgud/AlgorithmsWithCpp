#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<int> array) {
  vector<int> answer;
  pair<int, int> max = pair(0, 0);
  
  for(int i = 0;i < array.size();i++) {
    if(max.first < array[i]) {
      max.first = array[i];
      max.second = i;
    }
  }
  
  answer.push_back(max.first);
  answer.push_back(max.second);
  
  return answer;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  return 0;
}