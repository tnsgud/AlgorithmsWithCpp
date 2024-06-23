//
// Created by 박순형 on 2024. 6. 23..
//
#include <iostream>

using namespace std;

int check[4];
int current[4];
int secret = 0;

void add(char c) {
    if(c == 'A') {
        if(check[0] == ++current[0]) secret++;

        return;
    }

    if(c == 'C') {
        if(check[1] == ++current[1]) secret++;

        return;
    }

    if(c == 'G') {
        if(check[2] == ++current[2]) secret++;

        return;
    }

    if(check[3] == ++current[3]) secret++;
}

void remove(char c) {
    if(c == 'A') {
        if(check[0] == current[0]--) secret--;

        return;
    }
    if(c == 'C') {
        if(check[1] == current[1]--) secret--;

        return;
    }
    if(c == 'G') {
        if(check[2] == current[2]--) secret--;

        return;
    }

    if(check[3] == current[3]--) secret--;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int S, P, count = 0;
    cin >> S >> P;

    string dna;
    cin >> dna;

    for(int & i : check) {
        cin >> i;

        if(i == 0) secret++;
    }

    for(int i = 0; i < P; i++) {
        add(dna[i]);
    }

    if(secret == 4) count++;

    for(int i = 0; i+P < S; i++) {
        int j =  i + P;

        remove(dna[i]);
        add(dna[j]);

        if(secret == 4) count++;
    }

    cout << count << '\n';

    return 0;
}

