// https://open.kattis.com/problems/findingana
#include <iostream>
#include <string.h>
using namespace std;


int main() {

    string s;

    cin >> s;

    while (s[0] != 'a') {
        s.erase(0, 1);
    }
    cout << s;

    return 0;
}