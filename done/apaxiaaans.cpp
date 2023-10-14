// https://open.kattis.com/problems/apaxiaaans
#include <bits/stdc++.h>
using namespace std;


int main() {

    string s;
    cin >> s;

    char c;
    

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            s.erase(i, 1);
            i--;
        }
        c = s[i];
    }

    cout << s;
}

