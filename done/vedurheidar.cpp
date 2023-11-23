// https://open.kattis.com/problems/vedurheidar
#include <bits/stdc++.h>
using namespace std;


int main() {

    int v, n, k;
    string s;
    cin >> v >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> k;
        cout << s << " " << (v > k ? "lokud" : "opin") << endl;
    }




    return 0;
}