// https://open.kattis.com/problems/oddecho
#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {

    string s;
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> s;
        if(i % 2 == 0) continue;
        cout << s << endl;
    }


    return 0;
}