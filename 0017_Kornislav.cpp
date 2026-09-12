#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int S[4]={},i;
    for(i=0;i<4;i++) {
        cin >> S[i];
    }
    sort(S,S+4);
    if(S[0]==S[1]){
        cout << S[0]*S[3];
    }
    else {
        cout << S[0]*S[2];
    }
}