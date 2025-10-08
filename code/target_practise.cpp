#include <bits/stdc++.h>
using namespace std;


#define CODE_STARTS_FROM_HERE ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define endl '\n'
#define sz(s) ((int)((s).size()))
//#define push_back pb

#define big long long = 1e18
#define sml long long  = -1e18
const ll mod = 1e9+7;


int32_t main()
{
					CODE_STARTS_FROM_HERE

	ll tc;
	cin>>tc;
	
	while(tc--){
		
ll arr[100]= {1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,1,1,2,3,3,3,3,3,3,2,1,1,2,3,4,4,4,4,3,2,1,1,2,3,4,5,5,4,3,2,1,1,2,3,4,5,5,4,3,2,1,1,2,3,4,4,4,4,3,2,1,1,2,3,3,3,3,3,3,2,1,1,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1};
		ll sum = 0;
		for(ll i=0; i<100; i++){
				char c;
				cin>>c;
		if(c=='X')sum = sum + arr[i];
			}
		cout<<sum<<endl;
	}
	return 0;
}
