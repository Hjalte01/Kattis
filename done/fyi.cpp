// https://open.kattis.com/problems/fyi
#include <iostream>
#include <math.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    if (n / 10000 == 555) {
        cout << 1;
    } else {
        cout << 0;
    }

    return 0;
}