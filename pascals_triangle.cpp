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


	ll n;
	cin>>n;
	
	ll arr[n+1][n+1];
	
	for(ll i=1; i<=n; i++){
		for(ll j=1; j<=n; j++){
			if(i==j){
				arr[i][j]=1;
			}else if(j==1){
				arr[i][j]=1;
			}else{
				arr[i][j]=0;
			}
		}
	}
	
	for(ll i=3; i<=n; i++){
		for(ll j=2; j<=n; j++){
			if(j>=i){
 arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
		}
	}
	
	
	for(ll i=1; i<=n; i++){
		for(ll j=1; j<=i; j++){
			cout<<arr[i][j]<<' ';
		}cout<<endl;
	}

	return 0;
}