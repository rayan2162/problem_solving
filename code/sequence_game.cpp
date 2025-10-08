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
		ll n;
		cin>>n;
		
		ll arr[n];
		for(ll i=0; i<n; i++){
			cin>>arr[i];
		}
		vector <ll> v;
		for(ll i=0; i<n-1; i++){
			v.pb(arr[i]);
			if(arr[i]-arr[i+1]>=1){
				v.pb(1);
			}
		}v.pb(arr[n-1]);
		
		if(n==1){
			cout<<n<<endl;
			cout<<arr[0]<<endl;
		}else{
			cout<<sz(v)<<endl;
			for(ll i=0; i<sz(v); i++){
				cout<<v[i]<<' ';
			}cout<<endl;
		}
	}
}
