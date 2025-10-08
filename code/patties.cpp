#include <algorithm>
#include <bits/stdc++.h>
using  namespace std ;
int main(){
    int p,m,c,k,r,v;
    cin>>p>>m>>c;
    cin>>k>>r>>v;
    int a = (p/k);
    int b = (m/r);
    int d = (c/v);
    int e = min(a,b);
    cout<<min(e,d)<<endl;
}