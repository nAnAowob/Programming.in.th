#include <iostream>
using namespace std;
int main() {
    int a[100][100], b[100][100], sum[100][100];
    int m,n;
    int i=0,j=0;
    cin >> m >> n;
    for (i=0;i<m;i++) { //for 1st matrix 
        for (j=0;j<n;j++) {
            cin >> a[i][j];
        }
    }
    for (i=0;i<m;i++) { //for 2nd matrix
        for (j=0;j<n;j++) {
            cin >> b[i][j];
        }
    }
    for (i=0;i<m;i++) { //for sum
        for (j=0;j<n;j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    }
}