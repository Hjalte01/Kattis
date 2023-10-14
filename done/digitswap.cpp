// https://open.kattis.com/problems/digitswap
#include <iostream>
#include <string.h>
using namespace std;


int main() {

    int n;

    cin >> n;

    cout << n % (n/10*10) << n/10;

    return 0;
}