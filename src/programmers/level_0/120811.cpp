#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int center = array.size() / 2;

    for(int i = 0; i < array.size(); i++) {
        for(int j = i+1; j < array.size(); j++) {
            if(array[j] < array[i]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    answer = array[center];

    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    return 0;
}