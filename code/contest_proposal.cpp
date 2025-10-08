#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
//#define push_back pb

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
		
		vector<ll>v;
		for(ll i=0; i<n;i++){
			ll x;
			cin>>x;
			v.push_back(x);
		}
		
		vector<ll>vv;
		for(ll i=0; i<n; i++){
			ll x;
			cin>>x;
			vv.push_back(x);
		}
		
		ll cnt = 0;
		for(ll i=0; i<n; i++){
			for(ll j=i; j<n; j++){
				if(vv[i]<v[j]){
cnt++;
v.push_back(vv[j]);
sort(v.begin(), v.end());
v.pop_back();
i++;
				}else{
					break;
				}
			}	
		}
		cout<<cnt<<endl;
	}

	return 0;
}
