#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define push_back pb

#define big long long = 1e18
#define sml long long  = -1e18

#define mod long long = 1000000007


int32_t main()
{
					CODE_STARTS_FROM_HERE

		ll tc;
	cin>>tc;
	
	while(tc--){
		ll n;
		cin>>n;
		
		ll arr[n];
		for(ll i=0; i<n; i++){
			cin>>arr[i];
		}
		sort(arr, arr+n);
		
		ll ans = arr[0];
		
			for(ll i=1; i<n; i++){
				if(arr[i]==1){
				ans++;
				}else{
	ans = (ans*arr[i])%1000000007;
				}
				}
				
			cout<<ans<<endl;			
			}

	return 0;
}
