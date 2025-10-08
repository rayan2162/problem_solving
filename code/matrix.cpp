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
	
	ll arr[n][n];
	
	ll d1=0;
	ll d2=0;
	for(ll i=0; i<n; i++){
		for(ll j=0; j<n; j++){
			cin>>arr[i][j];
			if(i==j){
				d1=d1+arr[i][j];
			}
			if(i+j==(n-1)){
				d2= d2+arr[i][j];
			}
		}
	}
	
	cout<<abs(d1 - d2)<<endl;

	return 0;
}