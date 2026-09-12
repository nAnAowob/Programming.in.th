#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,N;
    int i,j;
    cin >> N;
    n = N;
    if(!(n%2)) {n--;}
    for(i=0;i<(n+1)/2;i++) {
        for(j=n-1;j>=0;j--) {
            if(j==n/2-i||j==n/2+i) {
                cout << "*";
            }
            else {
                cout << "-";
            }
        }
        cout << "\n";
    }
    if(N==2) {
        cout << "*";
    }
    else if(N%2==0){
        cout << "*";
        for(i=0;i<n-2;i++) {
            cout << "-";
        }
        cout << "*" << "\n";
    }
    for(i=n/2-1;i>=0;i--) {
        for(j=n-1;j>=0;j--) {
            if(j==n/2-i||j==n/2+i) {
                cout << "*";
            }
            else {
                cout << "-";
            }
        }
        cout << "\n";
    }

}