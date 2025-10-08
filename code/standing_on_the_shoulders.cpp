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

	ll n;
	cin>>n;
	ll arr[n];
	ll arr2[n];
	ll sum = 0;
	for(ll i=0; i<n; i++){
		cin>>arr[i];
		sum += arr[i];
		cin>>arr2[i];
	}
	ll mx = -1e18;
	for(ll i=0; i<n; i++){
		ll sum2 = sum;
		sum2 = sum2 - arr[i];
		sum2 = sum2 + arr2[i];
		
		if(sum2>=mx){
			mx = sum2;
		}
	}
	
	cout<<mx<<endl;

	return 0;
}
