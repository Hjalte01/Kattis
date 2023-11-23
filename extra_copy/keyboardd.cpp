// https://open.kattis.com/problems/keyboardd
#include <bits/stdc++.h>
using namespace std;


int main() {

    string s, t, sum = "";
    getline(cin, s);
    getline(cin, t);

    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] == t[i]) continue;
        
        t.erase(i, 1);
        i--;
        for (int j = 0; j < sum.length(); j++) {
            if (s[i] == sum[j]) sum.erase(j, 1);
        }
        sum += s[i];
    }
    if (s.length() != t.length()) {
        for (int j = 0; j < sum.length(); j++) {
            if (s[s.length()-1] == sum[j]) sum.erase(j, 1);
        }
        sum += s[s.length()-1];
    }
    cout << sum;
    return 0;
}