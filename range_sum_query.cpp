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

	ll n,k;
	cin>>n>>k;
	
	ll arr[n+1]={0};
	
	for(ll i=1; i<=n; i++){
		cin>>arr[i];
	}
	
	for(ll i=1; i<=n; i++){
			arr[i]=arr[i]+arr[i-1];
		}
		
	while(k--){
		ll l,r;
		cin>>l>>r;
		
		cout<<arr[r]-arr[l-1]<<endl;
	}

	return 0;
}