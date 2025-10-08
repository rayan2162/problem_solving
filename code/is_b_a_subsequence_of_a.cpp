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
		
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
	
	ll arr2[m];
	for(ll j=0; j<n; j++){
		cin>>arr2[j];
	}
	
	ll trigg =0;
	for(ll i=0; i<m; i++){
		for(ll j=0; j<n; j++){
			if(arr2[i]==arr[j]){
				arr2[i]=0;
				arr[j]=0;
				trigg++;
			}
		}
	}
	if(trigg == m){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}