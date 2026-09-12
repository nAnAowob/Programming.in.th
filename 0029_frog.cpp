#include<iostream>
using namespace std;
    
int main() {
    int x,y;
    cin >> x >> y;
    if(x>y) {
        cout << "2";
    }
    else if(y%x) {
        cout << y/x+1;
    }
    else {
        cout << y/x;
    }
}