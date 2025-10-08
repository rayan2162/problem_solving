#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int32_t main()
{
   ios_base::sync_with_stdio(false); 
	cin.tie(NULL);

	ll n;
	cin>>n;
	
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
	
	for(ll i=n-1; i>=0; i--){
		cout<<arr[i]<<' ';
	}

	return 0;
}