#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define pb push_back

#define big long long = 1e18
#define sml long long  = -1e18
const ll mod = 1e9+7;


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll tc;
	cin>>tc;
	
	while(tc--){
		ll n, f, k;
		cin>>n>>f>>k;
		
		vector <ll> v;
		for(ll i=0; i<n; i++){
			ll x;
			cin>>x;
			v.pb(x);
		}
		
		ll fav = v[f-1];
		sort(v.begin(), v.end());
		
		ll match = 0;
		for(ll i=0; i<n; i++){
				if(v[i]==fav){
				match++;
			}
		}
		match--;
		for(ll i=0; i<k; i++){
			v.erase(v.begin());
		}
		
		if(v[0]>fav){
			cout<<"YES"<<endl;
		}else{
			if(match){
				cout<<"MAYBE"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
		
	}

	return 0;
}
