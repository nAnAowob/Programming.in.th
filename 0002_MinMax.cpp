#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n,A;
    int most = -2000000000;
    int least = 2000000000;
    int i=0;
    cin >> n;
    for (i=0;i<n;i++) {
        cin >> A;
        if ( A >= most ) {
            most = A;
        }
        if ( A <= least ) {
            least = A;
        }
    }
    cout << least << "\n" << most;
}