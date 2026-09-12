#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int l = s.length();
    int x=1;
    for (int i=0;i<l;i++) {
        if (s[i] == 'A') {
            if ( x == 1 ) {
                x = 2;
            }
            else if ( x == 2 ) {
                x = 1;
            }
        }
        else if (s[i] == 'B') {
            if ( x == 2 ) {
                x = 3;
            }
            else if ( x == 3 ) {
                x = 2;
            }
        }
        else if (s[i] == 'C') {
            if ( x == 3 ) {
                x = 1;
            }
            else if ( x == 1 ) {
                x = 3;
            }
        }
    }
    cout << x;
}