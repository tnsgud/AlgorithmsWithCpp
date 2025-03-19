#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string my_string) {
    string answer = "";

    for(int i = my_string.size() - 1; 0 <= i; i--) {
        answer += my_string[i];
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}