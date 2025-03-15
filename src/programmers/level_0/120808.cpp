#include <iostream>
#include <vector>

using namespace std;

int min(int num1, int num2) {
    return num1 <= num2 ? num1 : num2;
}

int max(int num1, int num2) {
    return num1 >= num2 ? num1 : num2;
}

int gcd(int num1, int num2) {
    if(num2 == 0) {
        return num1;
    }

    return gcd(num2, num1 % num2);
}

int lcm(int num1, int num2) {
    return num1 * num2 / gcd(min(num1, num2), max(num1, num2));
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;

    int lcm1 = lcm(denom1, denom2);

    int val1 = lcm1/denom1;
    int val2 = lcm1/denom2;

    int num1 =  numer1 * val1 + numer2 * val2;
    int num2 = lcm1;

    answer.push_back(num1);
    answer.push_back(num2);

    if(answer[0] % answer[1] == 0) {
        answer[0] = answer[0] / answer[1];
        answer[1] = 1;
    }
    
    int gcd1 = gcd(answer[0], answer[1]);

    if(gcd1 != 0) {
        answer[0] = answer[0] / gcd1;
        answer[1] = answer[1] / gcd1;
    }

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    return 0;
}