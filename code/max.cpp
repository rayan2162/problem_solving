#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int tc,x,m=0;
    cin>>tc;
    while (tc--) {
        cin>>x;
        if(x>m){
            m=x;
        }
    }
cout<<m<<endl;

    return 0;
}