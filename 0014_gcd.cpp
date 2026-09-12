#include<iostream>
using namespace std;
int main() {
    int a,b,mn,mx,i;
    cin >> a >> b;
    mn = min(a,b);
    for (i=1;i<=mn;i++) {
        if ( a%i==0 && b%i==0 ) {
            mx = i;
        }
    }
    cout << mx;
}