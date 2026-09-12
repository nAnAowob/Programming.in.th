#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main() {
    char s[10];
    cin >> s;
    int l = strlen(s),i,sum3=0,sum11=0;
    for(i=0;i<l;i++) {
        sum3+=s[i]-'0';
    }
    int r3 = sum3%3;
    
    for(i=l-1;i<;i++){
        if(i%2){
            sum11+=s[i]-'0';
        }
        else {
            sum11-=s[i]-'0';
        }

    }
    int r11 = abs(sum11%11);
    
    cout << r3 << ' ' << r11;
}