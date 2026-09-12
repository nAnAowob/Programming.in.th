#include<iostream>
using namespace std;
int main() {
    int S[1002],A[1002],N,K,i,j,cnt=0;
    cin >> N >> K;
    for(i=2;i<=N;i++) {
        S[i]=i;
        A[i]=i;
    }
    for(i=2;i<=N;i++) {
        for(j=2;j<=N;j++) {
            if(A[j]!=0){
                if(S[j]%i==0) {
                    A[j]=0;
                    cnt++;
                    if (cnt==K) {
                        cout << S[j];
                        return 0;
                    }
                }
            }
        }
    }
}