#include <bits/stdc++.h>
#include <sys/types.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
    cin.tie(NULL);


    int tc;
    cin>>tc;
    while(tc--){
        ll a, b;
        cin>>a>>b;
        ll arr[a];
        ll sum=1;
        for(ll i=0; i<a; i++){
            ll x;
            cin>>x;
            sum = sum *x;
        }
        ll rem = 2023 % sum;
       cout<<rem;
    }
    

    return 0;
}