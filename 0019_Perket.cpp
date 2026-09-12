#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
    int S[11][3000],B[11][3000],n,N=0;
    int i,j,k;
    int min=1000000;
    cin >> n;
    for(i=0;i<n;i++) {
        cin >> S[i][0] >> B[i][0];
        N+=pow(2,i);
        int l=1;
        for(j=0;j<i;j++) {
            for(k=0;k<=N;k++) {
                if(S[j][k]==0) {
                    break;
                }
                B[i][l] = B[i][0]+B[j][k];
                S[i][l] = S[i][0]*S[j][k];
                l++;
            }
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<N;j++) {
            if(S[i][j]==0) {
                break;
            }
            if(abs(S[i][j]-B[i][j])<min) {
                min = abs(S[i][j]-B[i][j]);
            }
        }
    }
    cout << min;
}