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

	ll n;
	cin>>n;
	
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
	
	ll mx = arr[0];
	for(ll i=1; i<n; i++){
		if(arr[i]>mx){
			cout<<i+1<<endl;
			return 0;
		}
	}
	cout<<-1<<endl;
	return 0;
}
