// https://open.kattis.com/problems/greetings2
#include <iostream>
#include <string.h>
using namespace std;



int main() {

    string str;
    char str1[str.length()*2];
    cin >> str;

    int n = str.length();

    str.erase(n-1, 1);

    for (int i = 2; i < n; i++) {
        str += 'e';
    }


    str += 'y';

    cout << str;


    return 0;
}