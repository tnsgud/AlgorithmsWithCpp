#include <iostream>

using namespace std;

int* solution(int numbers[], size_t number_len) {
    int* answer = (int*)malloc(sizeof(int) * number_len);

    for(int i = 0; i < number_len; i++) {
        answer[i] = numbers[i] * 2;
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    return 0;
}