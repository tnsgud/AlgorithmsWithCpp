#include <iostream>
#include <vector>
#include <string>

using namespace std;

string solution(int age) {
    string temp = "", answer = "";

    while(true) {
        int num = age % 10;
        age /= 10;

        temp += 'a'+num;

        if (age == 0) break;
    }

    for(int i = temp.size() - 1; 0 <= i; i--) {
        answer += temp[i];
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}