#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
// #define push_back pb

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
		
		ll arr[n];
		for(ll i=0; i<n; i++){
			cin>>arr[i];
		}
		
		if(n==2){
			cout<<2<<endl;
		}else{
			ll cnt=1;
		vector<ll>v;
		for(ll i=0; i<n-1; i++){
			if(arr[i]==(arr[i+1]-1)){
				cnt++;
			}else{
				if(cnt!=1){
					v.push_back(cnt);
					cnt = 1;
				}
				
			}
		}
		ll mn = 1e18;
			for(ll i=0; i<sz(v); i++){
				if(v[i]<mn){
					mn = v[i];
				}
			}
			cout<<mn<<endl;
		}
		
		
		
	}

	return 0;
}
