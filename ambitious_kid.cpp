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

	ll n;
	cin>>n;
	
	ll arr[n];
	ll pmn = 1e18;
	ll nmn = -1e18;
	ll z = 0;
	for(ll i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]==0)z++;
		else if(arr[i]>0){
			if(arr[i]<=pmn){
				pmn = arr[i];
			}
		}else{
			if(arr[i]>=nmn){
				nmn = arr[i];
			}
		}
	}
	if(z){
		cout<<0<<endl;
	}else{
		cout<<min(pmn, abs(nmn))<<endl;
	}
	return 0;
}
