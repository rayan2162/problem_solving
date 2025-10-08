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

	ll n;
	cin>>n;
	
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
	
	ll arr2[n];
	for(ll i=0; i<n; i++){
		cin>>arr2[i];
	}
	
	sort(arr, arr+n);
	sort(arr2, arr2+n);
	
	for(ll i=0; i<n; i++){
		if(arr[i]!=arr2[i]){
			cout<<"no"<<endl;
			return 0;
		}
	}
	
	cout<<"yes"<<endl;
	return 0;
}