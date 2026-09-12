#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char s[100];
    fgets(&s[0],100,stdin);
    int l = strlen(s);
    for(int i=0;i<l;i++) {
        cout << s[i];
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            i+=2;
        }
    }
}