#include<iostream>
using namespace std;
int main() {
    string x;
    int a=0,b=0,l,i=0;
    cin >> x;
    l = x.length();
    for (i=0;i<l;i++) {
        if (x[i]-'A' >=32 ) {
            a++;
        }
        else {
            b++;
        }
    }
    if ( a==l ) {
        cout << "All Small Letter";
    }
    else if ( b==l ) {
        cout << "All Capital Letter";
    }
    else {
        cout << "Mix";
    }
}