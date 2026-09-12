#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int a[3]={};
    int x;
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+2);
    if ( a[2]-a[1] > a[1]-a[0] ) {
        cout << a[2]-a[1]-1;
    }
    else {
        cout << a[1]-a[0]-1;
    }
}