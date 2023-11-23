// https://open.kattis.com/problems/monopol
#include <bits/stdc++.h>
using namespace std;


int main() {

    int n, a;
    cin >> n;
    long double tmp, sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a;
        tmp = 0;
        for (int j = 1; j < 7; j++) {
            for (int k = 1; k < 7; k++) {
                if (j+k == a) tmp++; 
            }
        }
        sum += tmp/36;
        
    }


    cout << sum;




    return 0;
}

