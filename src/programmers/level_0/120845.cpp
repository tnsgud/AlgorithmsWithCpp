#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int solution(vector<int> box, int n)
{
  int answer = (box[0] / n) * (box[1] / n) * (box[2] / n);
  return answer;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  return 0;
}