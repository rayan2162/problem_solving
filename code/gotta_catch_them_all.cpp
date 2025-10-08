#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define push_back pb

#define big long long = 1e18
#define sml long long  = -1e18


int32_t main()
{
					CODE_STARTS_FROM_HERE

		ll tc;
	cin>>tc;
	
	while(tc--){
// 		x = normal
// 		y = master
		ll n, x, y;
		cin>>n>>x>>y;
		
		ll cost=0;
		ll arr[n];
		for(ll i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]*x >= y){
				cost = cost + y;
			}else{
				cost = cost + (x*arr[i]);
			}
		}
		cout<<cost<<endl;
	}

	return 0;
}
