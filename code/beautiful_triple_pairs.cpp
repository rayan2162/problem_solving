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
		ll n;
		cin>>n;
		
		ll arr[n];
		for(ll i=0; i<n; i++){
			cin>>arr[i];
		}
		
		ll mat[n-2][3];
		ll c=0;
		for(ll i=0; i<=n-3; i++){
			for(ll k=i; k<i+3; k++){
				if(c==3)c=0;
				mat[i][c]=arr[k];
				c++;
			}
		}
		
		ll cnt = 0;
		ll i =0;
		//for(ll i=0; i<n-2; i++){
			for(ll j=i; j<n-2; j++){
			ll x,y,z;
			x = mat[i][0];
			y = mat[i][1];
			z = mat[i][2];
			
			// for(ll j=i; j<n-2; j++){
if(x!=mat[j][0] && y==mat[j][1] && z==mat[j][2]){
	cnt++;
	i++;
	continue;
}else if(x==mat[j][0] && y!=mat[j][1] && z==mat[j][2]){
	cnt++;
	i++;
	continue;
}else if(x==mat[j][0] && y==mat[j][1] && z!=mat[j][2]){
	cnt++;
	i++;
	continue;
}

if(j==n-3){
	i++;
}
			//}
			
		}
		cout<<cnt<<endl;
	}

	return 0;
}
