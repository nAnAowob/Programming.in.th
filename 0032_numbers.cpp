#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int N,x[1000],i;
    cin >> N;
    
    for(i=0;i<N;i++) {
        cin >> x[i];
    }
    sort(x,x+i);

    for(int j=0;j<N;j++) {
        if(!x[j]) {
            continue;
        }
        cout << x[j];
        x[j] = -1;
        break;
    }

    for(i=0;i<N;i++) {
        if(x[i]!=-1) {
            cout << x[i];
        }
    }
    return 0;
}