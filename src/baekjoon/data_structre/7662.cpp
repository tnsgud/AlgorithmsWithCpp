//
// Created by qkrtn on 2022-03-31.
// Link : https://www.acmicpc.net/problem/7662

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) {
        map<int, int> mp;
        int n; cin >> n;
        for(int i=0;i<n;i++) {
            char cmd; cin >> cmd;
            int x;cin >> x;

            if(cmd == 'I') {
                mp[x] += 1;
            }
            else {
                if(mp.empty()) continue;
                if(x == -1) {
                    if(mp.begin()->second == 1) {
                        mp.erase(mp.begin()->first);
                    }
                    else {
                        mp.begin()->second --;
                    }
                }
                else {
                    if(mp.rbegin()->second == 1) {
                        mp.erase(mp.rbegin()->first);
                    }
                    else {
                        mp.rbegin()->second --;
                    }
                }
            }
        }
        if(mp.empty()){
            cout << "EMPTY\n";
        }else {
            cout << mp.rbegin()->first << ' ' << mp.begin()->first << '\n';
        }
    }

    return 0;
}