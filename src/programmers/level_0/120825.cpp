#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";

    for(char c:my_string) {
        for (int i = 0; i < n; i++) {
            answer += c;
        }
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}