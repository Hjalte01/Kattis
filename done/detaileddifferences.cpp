// https://open.kattis.com/problems/detaileddifferences
#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    string s1, s2;

    cin >> n;
    
    while (cin >> s1 >> s2) {
        cout << s1 << "\n" << s2 << "\n";
        for (int i = 0; i < s1.length() && i < s2.length(); i++) {
            cout << (s1[i] == s2[i] ? "." : "*");
        }
        cout << "\n\n";

    }




    return 0;
}