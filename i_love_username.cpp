#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define sz(s) ((int)((s).size()))


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll n;
	cin>>n;
	
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
	
	ll mn = arr[0];
	ll mx = arr[0];
	
	ll cnt=0;
	for(ll i=1; i<n; i++){
		if(arr[i]>mx){
			mx=arr[i];
			cnt++;
//cout<<arr[i]<<' '<<"b "<<cnt<<endl;
		}else if(arr[i]<mn){
			mn=arr[i];
			cnt++;
//cout<<arr[i]<<' '<<"s "<<cnt<<endl;
		}
	}
	cout<<cnt<<endl;

	return 0;
}