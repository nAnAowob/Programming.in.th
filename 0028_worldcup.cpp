#include<iostream>
#include<math.h>
using namespace std;
int main() {
    string name[4];
    int s[4][4],sum[4]={ }, sum2[4], get[4]={ }, loss[4] = { };
    int i,j;
    for(i=0;i<4;i++) {
        cin >> name[i];
    }
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            cin >> s[i][j];
        }
    }
    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            if(i==j) {
                continue;
            }
            if(s[i][j]>s[j][i]) {
                sum[i]+=3;
            }
            else if(s[i][j]==s[j][i]) {
                sum[i]++;
            }
            get[i]+=s[i][j];
            loss[i]+=s[j][i];
        }
    }
    int temp1,t2,t3;
    string temp2;
    for(i=0;i<4;i++) {
        for(j=i+1;j<4;j++) {
            if(sum[i]<sum[j]) {
                temp1 = sum[i];
                sum[i] = sum[j];
                sum[j] = temp1;
                temp2 = name[i];
                name[i] = name[j];
                name[j] = temp2;
            }
            else if(sum[i]==sum[j]) {
                t2=1;
            }
        }
    }
    if(t2) {
        for(i=0;i<4;i++) {
            for(j=i+1;j<4;j++) {
                if(j!=i+1) {
                    break;
                }
                if(sum[i]==sum[j]) {
                    int subi = abs(get[i]-loss[i]), subj = abs(get[j]-loss[j]);
                    if(subi<subj) {
                        temp1 = sum[i];
                        sum[i] = sum[j];
                        sum[j] = temp1;
                        temp2 = name[i];
                        name[i] = name[j];
                        name[j] = temp2;
                    }
                    else if(subi==subj) {
                        t3=1;
                    }
                }
            }
        }
     }
    if(t3) {
        for(i=0;i<4;i++) {
            for(j=i+1;j<4;j++) {
                if(j!=i+1) {
                    break;
                }
                if(sum[i]==sum[j]) {
                    int subi = abs(get[i]-loss[i]), subj = abs(get[j]-loss[j]);
                    if(subi==subj) {
                        if(get[i]<get[j]) {
                            temp1 = sum[i];
                            sum[i] = sum[j];
                            sum[j] = temp1;
                            temp2 = name[i];
                            name[i] = name[j];
                            name[j] = temp2;
                        }
                    }
                }
            }
        }
     }
    for(i=0;i<4;i++) {
        cout << name[i] << " " << sum[i] << "\n";
    }
}