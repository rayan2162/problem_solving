#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;

#define sz(s) ((int)((s).size()))


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll ra,ca;
	cin>>ra>>ca;
	
	ll ar[ra][ca];
	for(ll i=0; i<ra; i++){
		for(ll j=0; j<ca; j++){
			cin>>ar[i][j];
		}
	}
	
	ll rb,cb;
	cin>>rb>>cb;
	
	ll arr[rb][cb];
	for(ll i=0; i<rb; i++){
		for(ll j=0; j<cb; j++){
			cin>>arr[i][j];
		}
	}
	
	
	ll ans[ra][cb];
	for(ll i=0; i<ra; i++){
		for(ll j=0; j<cb; j++){
			ans[i][j]=0;
			for(ll k=0; k<rb; k++){
				ans[i][j]=ans[i][j] + ar[i][k] * arr[k][j];				
			}
		}
	}
	
	
	for(ll i=0; i<ra; i++){
		for(ll j=0; j<cb; j++){
			cout<<ans[i][j]<<' ';
		}
		cout<<endl;
	}

	return 0;
}