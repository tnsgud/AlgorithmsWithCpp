#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";

    for(char c:my_string) {
        if(c == letter[0]) continue;

        answer += c;
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}