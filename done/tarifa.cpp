// https://open.kattis.com/problems/tarifa
#include <iostream>
using namespace std;


int main() {

    int x, n;
    cin >> x;
    cin >> n;

    int sum = x;
    int Pi;
    while (cin >> Pi){
        sum += x - Pi;
    }

    cout << sum;

    return 0;
}