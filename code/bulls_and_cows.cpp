#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,g;
    int c=0,b=0;
    cin>>s;
    cin>>g;
    if(s[0]==g[0]){
        c++;

    }
    if(s[1]==g[1]){
        c++;

    }
    if(s[2]==g[2]){
        c++;
    }
    if(s[3]==g[3]){
        c++;
    }

    if (s[0]==g[1]|| s[0]==g[2]|| s[0]==g[3]) {
        b++;
    }
    if (s[1]==g[0]|| s[1]==g[2]|| s[1]==g[3]) {
        b++;
    }
    if (s[2]==g[0]|| s[2]==g[1]|| s[2]==g[3]) {
        b++;
    }
    if (s[3]==g[0]|| s[3]==g[1]|| s[3]==g[2]) {
        b++;
    }
    cout<<c<<endl;
    cout<<b<<endl;
}
