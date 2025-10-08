#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int d = a*b*c;
    int e = (a+b)*c;
    int f = (a*b)+c;
    int g = a + (b*c);
    int h = a * (b+c);
    // int k = (a+c)*b;
    // int l = (a*c)+b;
    int i = a+b+c;

    int m = max(d,e);
    m = max(m,f);
    m = max(m,g);
    m = max(m,h);
    // m = max(m,k);
    // m = max(m,l);
    m = max(m,i);

    cout<<m<<endl;
}