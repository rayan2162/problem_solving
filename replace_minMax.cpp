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
	
	ll mn = 9223372036854775807;
	ll mnPos;
	
	ll mx = -9223372036854775807;
	ll mxPos;
	
	for(ll i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]<mn){
			mn = arr[i];
			mnPos=i;
		}
		if(arr[i]>mx){
			mx = arr[i];
			mxPos=i;
		}
	}
	swap(arr[mnPos],arr[mxPos]);
	for(ll i=0; i<n; i++){
			cout<<arr[i]<<' ';	
	}

	return 0;
}