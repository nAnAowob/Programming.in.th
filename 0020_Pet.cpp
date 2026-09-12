#include<iostream>
using namespace std;
int main() {
    int S[5][4],A[5]={ },i,j,max=0,maxi=0;
    for(i=0;i<5;i++) {
        for(j=0;j<4;j++) {
            cin >> S[i][j];
            A[i]+=S[i][j];
        }
        if (A[i]>max) {
            max = A[i];
            maxi = i;
        }
    }
    cout << maxi+1 << " " << max;
}