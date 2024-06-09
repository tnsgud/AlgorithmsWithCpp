//
// Created by 박순형 on 2024. 6. 9..
//

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char output[] = {'D', 'C', 'B', 'A', 'E'};
    int index[] = { 0, 0, 0};

    for(int & i : index) {
        int d1, d2, d3, d4;
        cin >> d1 >> d2 >> d3 >> d4;

        i = d1 + d2 + d3 +d4;
    }

    for(auto i:index)  {
        cout << output[i] << endl;
    }

    return 0;
}