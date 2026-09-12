#include<iostream>
using namespace std;
int main() {
    int i,m,max=0,S[3]={};
    char A[3]={'A','B','C' },B[4]={'B','A','B','C'},C[6]={'C','C','A','A','B','B'};
    string x;
    cin >> m >> x;
    for(i=0;i<m;i++) { // Grading
        if(A[i%3]==x[i]) {
            S[0]++;
        }
        if(B[i%4]==x[i]) {
            S[1]++;
        }
        if(C[i%6]==x[i]){
            S[2]++;
        }
    }
    for(i=0;i<3;i++) {  // check max
        if(max<=S[i]) {
            max = S[i];
        }
    }
    cout << max << "\n";
    if(S[0]==max) {
        cout << "Adrian\n";
    }
    if(S[1]==max) {
        cout << "Bruno\n";
    }
    if(S[2]==max) {
        cout << "Goran";
    }

    /* Print MAX*/
}