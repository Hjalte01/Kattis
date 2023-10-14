// https://open.kattis.com/problems/countthevowels
#include <iostream>
#include <string>
using namespace std;

//  A, E, I, O and U,
int main() {


    string s;
    

    char vo[5] = {'a', 'e', 'i', 'o', 'u'};
    int n = s.length();
    int sum = 0;
    while (cin >> s) {
        for (char i : s) {
            for (char j : vo) {
                if ((char)tolower(i) == j) sum++;
            }
        }
    }

    cout << sum;


    return 0;
}