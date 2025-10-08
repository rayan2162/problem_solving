#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define endl '\n'

#define long long big = 1e18;
#define long long sml = -1e18;

#define sz(s) ((int)((s).size()))


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll tc;
cin>>tc;
while(tc--){
	ll n, c, d;
	ll arr[n];
	for(ll i=0; i<n; i++){
		cin>>arr[i];
	}
	sort(arr, arr+n);
	//bool ok=0;
	ll a = arr[0];
	
	ll arr2[n][n];
	arr2[0][0]=a;
	
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			if(i==n-1){
				arr2[i+1][j] = arr2[i][j]+c;
			}
			if(j== n-1){
				arr2[i][j+1] = arr2[i][j]+d;
			}
			if(i<n-1 && j<n-1){
				arr2[i+1][j] = arr2[i][j]+c;
			arr2[i][j+1] = arr2[i][j]+d;
			}
			
		}
		
	}
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
				cout<<arr2[i][j]<<' ';
		}cout<<endl;
		
	}
	
}

	return 0;
}