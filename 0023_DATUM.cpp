#include<iostream>
using namespace std;

int main() {
    char d[12][100] = {"Wednesday","Thursday","Friday","Saturday","Sunday","Monday", "Tuesday" };
    int D,M;
    cin >> D >> M;
    while(M>1) {
        if(M==2) { D+=31; }
        else if(M==3) { D+=28;}
        else if (M==4) { D+=31;} 
        else if (M==5) { D+=30;}
        else if(M==6) { D+=31;}
        else if(M==7) { D+=30;}
        else if(M==8) { D+=31;}
        else if(M==9) { D+=31;}
        else if(M==10) { D+=30;}
        else if(M==11) { D+=31;}
        else if(M==12) { D+=30;}
        M--;
    }
    cout << d[D%7];
}