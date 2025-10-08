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
		ll n,x;
		cin>>n>>x;
		if(n==1){
			ll p;
			cin>>p;
			cout<<max(p,(2*(x-p)))<<endl;
		}else{
			ll arr[n];
			for(ll i=0; i<n; i++){
				cin>>arr[i];
			}
			ll m = n+1;
			ll ans[m];
			ans[0]=arr[0];
			for(ll i=1; i<n; i++){
				ans[i]=arr[i]-arr[i-1];
			}
			ans[m-1]=2*(x-arr[n-1]);
			sort(ans, ans+m);
			cout<<ans[m-1]<<endl;
		}
		
	}

	return 0;
}