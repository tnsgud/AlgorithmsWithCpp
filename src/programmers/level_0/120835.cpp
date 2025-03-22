#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<pair<int, int>> data;

    for (int i = 0; i < emergency.size(); i++) {
        data.push_back(pair<int, int>(i, emergency[i]));
    }

    for (int i = 0; i < data.size(); i++) {
        for (int j = i+1; j < data.size(); j++) {
            if(data[i].second < data[j].second) {
                pair<int, int> temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }   
        }
    }
    
    for (int i = 0; i < data.size(); i++) {
        data[i].second = i + 1;
    }

    for (int i = 0; i < data.size(); i++) {
        for (int j = i+1; j < data.size(); j++) {
            if(data[i].first > data[j].first) {
                pair<int, int> temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }   
        }
    }
    
    for (int i = 0; i < data.size(); i++) {
        answer.push_back(data[i].second);
    }
    
    return answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 0;
}