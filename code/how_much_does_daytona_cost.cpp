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
		ll n,k;
		cin>>n>>k;
		
		ll cnt=0;
		ll arr[n];
		for(ll i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]==k)cnt++;
		}
		
		if(cnt)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

	return 0;
}
