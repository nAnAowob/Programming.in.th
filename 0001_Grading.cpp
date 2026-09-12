#include<iostream>
using namespace std;
int main() {
    int a,b,c,sum;
    cin >> a >> b >>c;
    sum = a+b+c;
    if ( sum >= 80 ) {
        cout << "A";
        return 0;
    }
    if ( sum >= 75 ) {
        cout << "B+";
        return 0;
    }
    if ( sum >= 70 ) {
        cout << "B";
        return 0;
    }
    if ( sum >= 65 ) {
        cout << "C+";
        return 0;
    }
    if ( sum >= 60 ) {
        cout << "C";
        return 0;
    }
    if ( sum >= 55 ) {
        cout << "D+";
        return 0;
    }
    if ( sum >= 50 ) {
        cout << "D";
        return 0;
    }
    else {
        cout << "F";
        return 0;
    } 
}