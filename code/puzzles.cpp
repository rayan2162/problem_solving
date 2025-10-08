#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define sz(s) ((int)((s).size()))


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll n,h;
	cin>>n>>h;
	
	ll arr[h];
	for(ll i=0; i<h; i++){
		cin>>arr[i];
	}
	
	sort(arr, arr+h);
	
	ll sml = 1e18;
	for(ll i=0; i<h-n; i++){
		if(arr[i+n-1]-arr[i]<sml){
			sml=arr[i+n-1]-arr[i];
cout<<arr[i]<<' '<<arr[i+n-1]<<' '<<sml<<endl;
		}

	}
	
	cout<<sml<<endl;

	return 0;
}