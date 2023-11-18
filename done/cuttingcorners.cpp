// https://open.kattis.com/problems/cuttingcorners
#include <bits/stdc++.h>
using namespace std;



double triangle_angel(double a[2], double b[2], double c[2]) {
    double al = sqrt(pow(b[0] - c[0],2) + pow(b[1] - c[1],2));
    double bl = sqrt(pow(a[0] - b[0],2) + pow(a[1] - b[1],2));
    double cl = sqrt(pow(c[0] - a[0],2) + pow(c[1] - a[1],2));
    return acos((pow(al,2)+pow(bl,2)-pow(cl,2))/(2*al*bl))*360/(2*M_PI);
}


int main() {
    int n;
    double arr[100][2];

    while (cin >> n) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> arr[i][j];
            }
        }

        
        int minIndex;
        double val = 91;
        while (n > 3) {
            double min = 90;
            double glbMin = min;
            for (int i = 0; i < n; i++) {
                double val = triangle_angel(arr[i], arr[(i+1)%n], arr[(i+2)%n]);
                if (val < min) {
                    min = val;
                    minIndex = i+1;
                }
            }
            if (glbMin > min) {
                glbMin = min;
                for (int i = 0; i < n; i++) {
                    if (i == minIndex) continue;
                    else if(i+1 == minIndex) val = triangle_angel(arr[i], arr[(i+2)%n], arr[(i+3)%n]);
                    else if(i+2 == minIndex) val = triangle_angel(arr[i], arr[(i+1)%n], arr[(i+3)%n]);
                    else val = triangle_angel(arr[i], arr[(i+1)%n], arr[(i+2)%n]);
                    if (val < min) {
                        min = val;
                        minIndex = i;
                    }
                }
            } 
            if (glbMin > min || min == 90) {
                break;
            }




            for (int i = minIndex%n; i < n-1; i++) {
                arr[i][0] = arr[i+1][0];
                arr[i][1] = arr[i+1][1];
            }
            n--;    

        }
        if (n == 0) break;
        
        cout << n;
        for (int j = 0; j < n; j++) {
            cout << " " << arr[j][0] << " " << arr[j][1];
        }
        cout << "\n";
    }
   





    return 0;
}