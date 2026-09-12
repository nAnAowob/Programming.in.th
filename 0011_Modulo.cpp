#include<iostream>
using namespace std;
int main() {
    int S[42] = {};
    int i=1, cnt=0;
    int x,R;
    for (i=1;i<=10;i++) {
        cin >> R;
        x = R%42;
        S[x] = 1;
    }
    for (i=0;i<43;i++) {
        if (S[i]==1) {
            cnt++;
        }
    }
    cout << cnt;

}