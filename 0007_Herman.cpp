#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
    double r,a,b;
    cin >> r;
    a = M_PI*r*r;
    b = 2*r*r;
    cout << fixed << setprecision(6);
    cout << a << "\n" << b;
}