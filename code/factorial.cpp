#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    ll tc,x;
    cin>>tc;
    while(tc--){
        ll fact=1;
        cin>>x;
        for(int i=1; i<=x; i++){
            fact= fact*i;
        }
        cout<<fact<<endl;
    }


    return 0;
}