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
		ll n,m;
		cin>>n>>m;
		
		string s;
		cin>>s;
		
		string ss;
		cin>>ss;

		ll cnt = 0;
		ll j =0;
		for(ll i=0; i<m; i++){
			if(j<n){
				if(s[j]==ss[i]){
				cnt++;
				j++;
			}
			}	
		}
		cout<<cnt<<endl;
	}

	return 0;
}
