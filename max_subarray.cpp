#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll tc;
cin>>tc;
while(tc--){
	ll n;
	cin>>n;
	ll arr[n];

	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
		//sort(arr,arr+n);
	// for(ll i=0; i<n; i++){
		// cout<<arr[i]<<' ';
	// }
	

	for(ll i=0; i<n; i++){
		ll x = INT_MIN;
		for(ll j=0; j<n; j++){
			if(arr[j]>x){
				x=arr[j];
			}
		}
		cout<<x<<' ';
	}
}

	return 0;
}