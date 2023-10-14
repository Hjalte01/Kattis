// https://open.kattis.com/problems/cold
#include <iostream>
using namespace std;
#include <sstream>


int main() {

    int n, sum;
    sum = 0;
    string line;
    int t[n];


    cin >> n >> ws;



    getline(cin, line);
    istringstream os(line);

    int j;
    for (int i = 0; os >> j; i++) {
        t[i] = j;
        if (j < 0) sum++;
    }
    cout << sum;


    return 0;
}