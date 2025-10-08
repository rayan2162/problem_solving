#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define push_back pb

#define big long long = 1e18
#define sml long long  = -1e18
const ll mod = 1e9+7;


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll tc;
	cin>>tc;
	
	while(tc--){
		ll n;
		cin>>n;
		
		if(n==2){
			cout<<1<<endl;
		}else{
			ll mxgcd = 0;
			ll mx=0;
		for(ll i=1; i<n; ++i){
			if(__gcd(n,i)>=mxgcd){
				mxgcd = __gcd(n,i);
				if(__gcd(n,i)+i>=mx){
					mx = i;
				}    
			}
		}
		
		cout<<mx<<endl;
		}
		
	}

	return 0;
}
