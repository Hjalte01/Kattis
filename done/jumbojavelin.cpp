// https://open.kattis.com/problems/jumbojavelin
#include <iostream>
using namespace std;


int main() {


    int n, l, sum;

    cin >> n;
    sum = 1;

    for (int i = 0; i < n; i++) {
        cin >> l;
        sum += l - 1;
    }

    cout << sum;


    return 0;
}