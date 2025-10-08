#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
#define pb push_back

#define big long long = 1e18
#define sml long long  = -1e18
const ll mod = 1e9+7;


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll tc;
	cin>>tc;
	
	while(tc--){
		ll x,y;
		cin>>x>>y;
		if(y==0){
			cout<<ceil(x/15.0)<<endl;
		}else{
			ll total_screen;
		ll left_place;
		if(y%2==0){
			total_screen = y/2;
			left_place = total_screen*7;
		}else{
			total_screen = y/2;
			left_place = total_screen*7;
			total_screen++;
			left_place += 11;
		}
		if(x>left_place){
			ll rem = x - left_place;
			total_screen += ceil(rem/15.0);
		}
		cout<<total_screen<<endl;
		}
		
		
	}
	

	return 0;
}
