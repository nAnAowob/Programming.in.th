#include<iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int l = s.length();
    if ( l%3 == 0) {
        //line 1
       cout << "..#..";
        for (int i=2;i<=l;i++) {
            if ( i%3==1 ) { 
                cout << ".#..";
            }
            else if (i%3 == 2 ) {
                cout << ".#.";
            }
            else {
                cout << "..*..";
            }
        }
        cout << "\n";
        //line 2
        cout << ".#.#.";
        for (int i=2;i<=l;i++) {
            if ( i%3 == 1 ) {
                cout << "#.#.";
            }
            else if (i%3 == 2 ) {
            cout << "#.#";
            }
            else {
                cout << ".*.*.";
            }
        }
        cout << "\n";
        //line 3
        cout << "#." << s[0] << ".#";
        for (int i=1;i<=l-1;i++) {
            if ((i+1)%3==1 ) {
                cout << "." << s[i]<< ".#";
            }
            else if ((i+1)%3 == 2 ) {
                cout << "." << s[i] << ".";
            }
            else {
                cout << "*." << s[i] << ".*";
            }
        }
        cout << "\n";
        //line 4
         cout << ".#.#.";
        for (int i=2;i<=l;i++) {
            if ( i%3 == 1 ) {
                cout << "#.#.";
            }
            else if (i%3 == 2 ) {
            cout << "#.#";
            }
            else {
                cout << ".*.*.";
            }
        }
        cout << "\n";
        //line 5
    cout << "..#..";
        for (int i=2;i<=l;i++) {
            if ( i%3==1 ) { 
                cout << ".#..";
            }
            else if (i%3 == 2 ) {
                cout << ".#.";
            }
            else {
                cout << "..*..";
            }
        }
    }

   else {
       //line 1
       cout << "..#..";
        for (int i=2;i<l;i++) {
            if ( i%3==1 ) { 
                cout << ".#..";
            }
            else if (i%3 == 2 ) {
                cout << ".#.";
            }
            else {
                cout << "..*..";
            }
        }
        if ( l != 1 ) {
            cout << ".#..";
        }
        cout << "\n";
        //line 2
        cout << ".#.#.";
        for (int i=2;i<l;i++) {
            if ( i%3 == 1 ) {
                cout << "#.#.";
            }
            else if (i%3 == 2 ) {
            cout << "#.#";
            }
            else {
                cout << ".*.*.";
            }
        }
        if ( l != 1 ) {
            cout << "#.#.";
        }
        cout << "\n";
        //line 3
        cout << "#." << s[0] << ".#";
        for (int i=1;i<l-1;i++) {
            if ((i+1)%3==1 ) {
                cout << "." << s[i]<< ".#";
            }
            else if ((i+1)%3 == 2 ) {
                cout << "." << s[i] << ".";
            }
            else {
                cout << "*." << s[i] << ".*";
            }
        }
        if ( l != 1 ) {
            cout << "." << s[l-1] << ".#";
        }
        cout << "\n";
        //line 4
         cout << ".#.#.";
        for (int i=2;i<l;i++) {
            if ( i%3 == 1 ) {
                cout << "#.#.";
            }
            else if (i%3 == 2 ) {
            cout << "#.#";
            }
            else {
                cout << ".*.*.";
            }
        }
        if ( l != 1 ) {
            cout << "#.#.";
        }
        cout << "\n";
        //line 5
    cout << "..#..";
        for (int i=2;i<l;i++) {
            if ( i%3==1 ) { 
                cout << ".#..";
            }
            else if (i%3 == 2 ) {
                cout << ".#.";
            }
            else {
                cout << "..*..";
            }
        }
        if ( l != 1 ) {
            cout << ".#..";
        }
   }
}