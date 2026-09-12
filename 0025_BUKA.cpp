#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main() {
    char A[1001], B[1001], s;
    scanf("%s", A);
    scanf("\n%c", &s);
    scanf("%s", B);
    int L_A = strlen(A), L_B = strlen(B);
    if (s == '+') {
        int most = max(L_A, L_B), less = min(L_A, L_B);
        if (L_A == 0) {
            cout << B << endl;
        } else if (L_B == 0) {
            cout << A << endl;
        } else if (L_A == L_B) {
            cout << "2";
            for (int i = 0; i < most - 1; i++) {
                cout << "0";
            }
            cout << endl;
        } else {
            cout << "1";
            for (int i = most - 1; i > 0; i--) {
                if (i == less) {
                    cout << "1";
                } else {
                    cout << "0";
                }
            }
            cout << endl;
        }
    } else {
        cout << "1";
        for (int i = 0; i < L_A + L_B - 2; i++) {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
