//
// Created by 박순형 on 2024. 6. 23..
//
#include <iostream>
#include <queue>

using namespace std;

struct compare {
    bool operator()(int o1, int o2) {
        int first_abs = abs(o1);
        int second_abs = abs(o2);


        if(first_abs == second_abs) {
            return o1 > o2;
        }

        return first_abs > second_abs;
    }
};


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    priority_queue<int, vector<int>, compare> pq;

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;

        if(num == 0) {
            if(pq.empty()) {
                cout << "0\n";
                continue;
            }

            cout << pq.top() << '\n';
            pq.pop();
            continue;
        }

        pq.push(num);
    }

    return 0;
}

