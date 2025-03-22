#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<int> numbers, int num1, int num2) {
    vector<int> answer = vector<int>(numbers.begin() + num1, numbers.begin()+ num2 + 1);    

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}