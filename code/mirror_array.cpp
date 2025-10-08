#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;



int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll n,m;
	cin>>n>>m;
	
	ll arr[n][m];
	for(ll i=0; i<n; i++){
		for(ll j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	
	for(ll i=0; i<n; i++){
		for(ll j=m-1; j>=0; j--){
			cout<<arr[i][j]<<' ';
		}
		cout<<endl;
	}

	return 0;
}