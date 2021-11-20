#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int length;
    cin >> length;

    queue<int> cards;

    for (int i = 0; i < length; ++i) {
        cards.push(i+1);
    }

    while(cards.size() != 1) {
        cards.pop();
        int num = cards.front();
        cards.pop();
        cards.push(num);
    }

    cout << cards.front() << '\n';

    return 0;
}