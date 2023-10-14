// https://open.kattis.com/problems/r2
#include <iostream>
using namespace std;
#include <string>
#include <sstream>


int main() {

    string str;
    getline(cin, str);
    istringstream sstr(str);
    int i;
    int r1, s;
    sstr >> r1;
    sstr >> s;

    cout << s*2-r1;


    return 0;
}