#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    ll e,m,b;
    ll total;

    cin>>e>>m>>b;

   if(e==0 || b==0){
    cout<<0<<endl;
   }
   else{
    if(m>0){
    ll min_value = min({e,m,b});
    total = min_value;
    e = e - min_value;
    m = m - min_value;
    b = b - min_value;
    }
    if (m==0){
        ll min_value = min(e/2,b);
        total = total + min_value;
    }
    cout<<total<<endl;
   }
    return 0;
}