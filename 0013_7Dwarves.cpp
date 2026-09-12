#include<iostream>
using namespace std;
int main() {
    int a[9] = {};
    int i=0, j=0, sum=0;
    for (i=0;i<9;i++) {
        cin >> a[i];
        sum+=a[i];
    }
    for (i=0;i<9;i++) {
        for (j=i+1;j<9;j++) {
            if ( sum-a[i]-a[j] == 100 ) {
                a[i] = -1;
                a[j] = -1;
                break;
            }
        }
    }
    for (i=0;i<9;i++) {
        if ( a[i] != -1 ) {
            cout << a[i] << "\n";
        }
    }
}