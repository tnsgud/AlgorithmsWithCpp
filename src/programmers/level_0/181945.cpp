#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string str;
  cin >> str;

  for (char c : str)
  {
    cout << c << '\n';
  }
  return 0;
}