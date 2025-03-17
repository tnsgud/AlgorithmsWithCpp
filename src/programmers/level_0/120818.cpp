#include <iostream>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    double discount = 1.0;

    if(price >= 500000) {
        discount = 0.8;
    } else if(price >= 300000) {
        discount = 0.9;
    } else if(price >= 100000) {
        discount = 0.95;
    }

    answer = price * discount;

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    return 0;
}